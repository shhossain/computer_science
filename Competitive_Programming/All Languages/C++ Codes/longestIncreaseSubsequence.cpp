// Longest Increasing Subsequence Program All possible solutions
// Given an integer array nums, return the length of the longest strictly increasing subsequence.
// A subsequence is a sequence that can be derived from an array by deleting some or no elements
// without changing the order of the remaining elements. For example, [3,6,2,7] is a subsequence
// of the array [0,3,1,6,2,2,7].
// Input: nums = [10,9,2,5,3,7,101,18]
// Output: 4
// Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
// #LeetCode Medium Problem on DP
#include <bits/stdc++.h>
using namespace std;

// Special Algorithm using Binary Search lower_bound
// Time Complexity : O(N * logN)
// Space Complexity : O(N) [due to use of one temp array]
// Auxiliary Space Complexity : No recursive stack space used, hence no ASC
int longestIncreasingSubsequenceOpt(int arr[], int n)
{
    vector<int> temp;
    int len = 1;
    temp.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > temp.back())
        {
            temp.push_back(arr[i]);
            len++;
        }
        else
        {
            int ind = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
            temp[ind] = arr[i];
        }
    }
    return len;
}

// Printing Longest Increasing Subsequence with another hash array
// Special type Tabulation Space Optimized DP Approach
// Time Complexity : O(N*N)
// Space Complexity : O(N) [due to use of one dp array]
// Auxiliary Space Complexity : No recursive stack space used, hence no ASC
int longestIncreasingSubsequenceBUSPrint(int arr[], int n)
{
    vector<int> dp(n, 1), hash(n);
    int maxi = 1, lastIndex = 0;
    for (int i = 0; i < n; i++)
    {
        hash[i] = i;
        for (int prev = 0; prev < i; prev++)
        {
            if (arr[i] > arr[prev] and (1 + dp[prev]) > dp[i])
            {
                hash[i] = prev;
                dp[i] = 1 + dp[prev];
            }
        }
        if (dp[i] > maxi)
        {
            lastIndex = i;
            maxi = dp[i];
        }
    }

    vector<int> lis;
    lis.push_back(arr[lastIndex]);
    while (lastIndex != hash[lastIndex])
    {
        lastIndex = hash[lastIndex];
        lis.push_back(arr[lastIndex]);
    }
    reverse(lis.begin(), lis.end());
    cout << "Longest Increasing Subsequence Array : ";
    for (auto x : lis)
        cout << x << " ";
    cout << endl;
    return maxi;
}

// Special type Tabulation Space Optimized DP Approach
// Time Complexity : O(N*N)
// Space Complexity : O(N) [due to use of one dp array]
// Auxiliary Space Complexity : No recursive stack space used, hence no ASC
int longestIncreasingSubsequenceBUSp(int arr[], int n)
{
    vector<int> dp(n, 1);
    int maxi = 1;
    for (int i = 0; i < n; i++)
    {
        for (int prev = 0; prev < i; prev++)
        {
            if (arr[i] > arr[prev])
                dp[i] = max(dp[i], 1 + dp[prev]);
        }
        maxi = max(maxi, dp[i]);
    }
    return maxi;
}

// Bottom Up Tabulation Space Optimized DP Approach
// Time Complexity : O(N*N)
// Space Complexity : O(N) + O(N) [due to 2 arrays curr and next]
// Auxiliary Space Complexity : No recursive stack space used, hence no ASC
int longestIncreasingSubsequenceBUS(int arr[], int n)
{
    vector<int> curr(n + 1, 0), next(n + 1, 0);
    for (int ind = n - 1; ind >= 0; ind--)
    {
        for (int prev = ind - 1; prev >= -1; prev--)
        {
            int len = 0 + next[prev + 1];
            if (prev == -1 or arr[ind] > arr[prev])
                len = max(len, 1 + next[ind + 1]);
            curr[prev + 1] = len;
        }
        next = curr;
    }
    return next[0];
}

// Bottom Up Tabulation DP Approach
// Time Complexity : O(N*N)
// Space Complexity : O(N*N) [due to DP array]
// Auxiliary Space Complexity : No recursive stack space used, hence no ASC
int longestIncreasingSubsequenceBU(int arr[], int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int ind = n - 1; ind >= 0; ind--)
    {
        for (int prev = ind - 1; prev >= -1; prev--)
        {
            int len = 0 + dp[ind + 1][prev + 1];
            if (prev == -1 or arr[ind] > arr[prev])
                len = max(len, 1 + dp[ind + 1][ind + 1]);
            dp[ind][prev + 1] = len;
        }
    }
    return dp[0][0];
}

// Top Down Memoization DP Approach
// Time Complexity : O(N*N)
// Space Complexity : O(N*N) [due to DP array]
// Auxiliary Space Complexity : O(N) [due to recusrsive stack space]
int lisTD(int ind, int prev, int n, int arr[], vector<vector<int>> &dp)
{
    // Base Case
    if (ind == n)
        return 0;
    if (dp[ind][prev + 1] != -1)
        return dp[ind][prev + 1];
    int len = 0 + lisTD(ind + 1, prev, n, arr, dp);
    if (prev == -1 or arr[ind] > arr[prev])
        len = max(len, 1 + lisTD(ind + 1, ind, n, arr, dp));
    return dp[ind][prev + 1] = len;
}
int longestIncreasingSubsequenceTD(int arr[], int n)
{
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    return lisTD(0, -1, n, arr, dp);
}

// Recursive Approach
// Time Complexity : O(2^N)
// Space Complexity : O(N) [Auxiliary Space Complexity]
int lisRec(int ind, int prev, int n, int arr[])
{
    // Base Case
    if (ind == n)
        return 0;
    int len = 0 + lisRec(ind + 1, prev, n, arr);
    if (prev == -1 or arr[ind] > arr[prev])
        len = max(len, 1 + lisRec(ind + 1, ind, n, arr));
    return len;
}
int longestIncreasingSubsequenceRec(int arr[], int n)
{
    return lisRec(0, -1, n, arr);
}

// main function
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // Printing output
    cout << longestIncreasingSubsequenceOpt(arr, n) << endl;
    return 0;
}