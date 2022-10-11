# Longest Increasing Subsequence

Find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in increasing order.


**Examples:**
```
Input: arr[] = {3, 10, 2, 1, 20}
Output: Length of LIS = 3
The longest increasing subsequence is 3, 10, 20

Input: arr[] = {3, 2}
Output: Length of LIS = 1
The longest increasing subsequences are {3} and {2}
```

The following are different methods to solve Longest Increasing Subsequence Problem.

## Method 1 (Recursion)
**Optimal Substructure**: Let arr[0..n-1] be the input array and L(i) be the length of the LIS ending at index i such that arr[i] is the last element of the LIS.

Then, L(i) can be recursively written as:

```
L(i) = 1 + max( L(j) ) where 0 < j < i and arr[j] < arr[i]; or
L(i) = 1, if no such j exists.
```
To find the LIS for a given array, we need to return max(L(i)) where 0 < i < n.
Formally, the length of the longest increasing subsequence ending at index i, will be 1 greater than the maximum of lengths of all longest increasing subsequences ending at indices before i, where arr[j] < arr[i] (j < i).

Thus, we see the LIS problem satisfies the optimal substructure property as the main problem can be solved using solutions to subproblems.

The recursive tree given below will make the approach clearer:  
```
Input  : arr[] = {3, 10, 2, 11}
f(i): Denotes LIS of subarray ending at index 'i'

(LIS(1)=1)

      f(4)  {f(4) = 1 + max(f(1), f(2), f(3))}
  /    |    \
f(1)  f(2)  f(3) {f(3) = 1, f(2) and f(1) are > f(3)}
       |      |  \
      f(1)  f(2)  f(1) {f(2) = 1 + max(f(1)}
              |
            f(1) {f(1) = 1}
```

Below is the implementation of the recursive approach:

## CPP
```cpp

/* A Naive C++ recursive implementation
of LIS problem */
#include <iostream>
using namespace std;

/* To make use of recursive calls, this
function must return two things:
1) Length of LIS ending with element arr[n-1].
	We use max_ending_here for this purpose
2) Overall maximum as the LIS may end with
	an element before arr[n-1] max_ref is
	used this purpose.
The value of LIS of full array of size n
is stored in *max_ref which is our final result
*/
int _lis(int arr[], int n, int* max_ref)
{
	/* Base case */
	if (n == 1)
		return 1;

	// 'max_ending_here' is length of LIS
	// ending with arr[n-1]
	int res, max_ending_here = 1;

	/* Recursively get all LIS ending with arr[0],
	arr[1] ... arr[n-2]. If arr[i-1] is smaller
	than arr[n-1], and max ending with arr[n-1]
	needs to be updated, then update it */
	for (int i = 1; i < n; i++) {
		res = _lis(arr, i, max_ref);
		if (arr[i - 1] < arr[n - 1]
			&& res + 1 > max_ending_here)
			max_ending_here = res + 1;
	}

	// Compare max_ending_here with the overall
	// max. And update the overall max if needed
	if (*max_ref < max_ending_here)
		*max_ref = max_ending_here;

	// Return length of LIS ending with arr[n-1]
	return max_ending_here;
}

// The wrapper function for _lis()
int lis(int arr[], int n)
{
	// The max variable holds the result
	int max = 1;

	// The function _lis() stores its result in max
	_lis(arr, n, &max);

	// returns max
	return max;
}

/* Driver program to test above function */
int main()
{
	int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout <<"Length of lis is "<< lis(arr, n);
	return 0;
}

```

**Output:**

```
Length of lis is 5
```

**Time Complexity:** O(2^n).

**Extra Space:** O(1).

Since the same sub-problems are called again, this problem has the Overlapping Subproblems property.

## Method 2: (Dynamic Programming)

```
The Idea to Solve this Problem is by using the Bottom Up Memoization. Here is the Bottom up approach to solve this Problem.

```

Follow the below steps to Implement the idea:

* Using 2-D vector to store the Overlapping subproblems.
* Traversing the whole array to find the solution and storing in the memoization table.
* Using the memoization table to find the optimal solution.

## Implementation


* [C++](#cpp)
* [Python](#python)
* [Java](#java)


## CPP

```cpp

/* A Naive C++ recursive implementation
of LIS problem */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/* To make use of recursive calls, this
function must return two things:
1) Length of LIS ending with element arr[n-1].
	We use max_ending_here for this purpose
2) Overall maximum as the LIS may end with
	an element before arr[n-1] max_ref is
	used this purpose.
The value of LIS of full array of size n
is stored in *max_ref which is our final result
*/

int f(int idx, int prev_idx, int n, int a[],
	vector<vector<int> >& dp)
{
	if (idx == n) {
		return 0;
	}

	if (dp[idx][prev_idx + 1] != -1) {
		return dp[idx][prev_idx + 1];
	}

	int notTake = 0 + f(idx + 1, prev_idx, n, a, dp);
	int take = INT_MIN;
	if (prev_idx == -1 || a[idx] > a[prev_idx]) {
		take = 1 + f(idx + 1, idx, n, a, dp);
	}

	return dp[idx][prev_idx + 1] = max(take, notTake);
}
// Function to find length of longest increasing
// subsequence.
int longestSubsequence(int n, int a[])
{
	vector<vector<int> > dp(n + 1, vector<int>(n + 1, -1));
	return f(0, -1, n, a, dp);
}

/* Driver program to test above function */
int main()
{
	int a[] = { 3, 10, 2, 1, 20 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Length of lis is " << longestSubsequence(n, a);
	return 0;
}


```
## PYTHON

```python

# Dynamic Programming Python implementation of
# of LIS problem

# To make use of recursive calls, this
# function must return two things:
# 1) Length of LIS ending with element arr[n-1].
#	 We use max_ending_here for this purpose
# 2) Overall maximum as the LIS may end with
#	 an element before arr[n-1] max_ref is
#	 used this purpose.
# The value of LIS of full array of size n
# is stored in *max_ref which is our final result
import sys

def f(idx, prev_idx, n, a,dp):

	if (idx == n):
		return 0

	if (dp[idx][prev_idx + 1] != -1):
		return dp[idx][prev_idx + 1]

	notTake = 0 + f(idx + 1, prev_idx, n, a, dp)
	take = -sys.maxsize -1
	if (prev_idx == -1 or a[idx] > a[prev_idx]):
		take = 1 + f(idx + 1, idx, n, a, dp)

	dp[idx][prev_idx + 1] = max(take, notTake)
	return dp[idx][prev_idx + 1]

# Function to find length of longest increasing
# subsequence.
def longestSubsequence(n, a):

	dp = [[-1 for i in range(n + 1)]for j in range(n + 1)]
	return f(0, -1, n, a, dp)

# Driver program to test above function
a = [ 3, 10, 2, 1, 20 ]
n = len(a)
print("Length of lis is ",longestSubsequence(n, a))


```

## JAVA

```java

/* Dynamic Programming java implementation of LIS problem */
import java.util.Arrays;
import java.lang.*;
class LIS {

/* To make use of recursive calls, this function must
	return two things: 1) Length of LIS ending with element
	arr[n-1]. We use max_ending_here for this purpose 2)
	Overall maximum as the LIS may end with an element
	before arr[n-1] max_ref is used this purpose.
	The value of LIS of full array of size n is stored in
	*max_ref which is our final result */
static int f(int idx, int prev_idx, int n, int a[],
			int[][] dp)
{
	if (idx == n) {
	return 0;
	}

	if (dp[idx][prev_idx + 1] != -1) {
	return dp[idx][prev_idx + 1];
	}

	int notTake = 0 + f(idx + 1, prev_idx, n, a, dp);
	int take = Integer.MIN_VALUE;
	if (prev_idx == -1 || a[idx] > a[prev_idx]) {
	take = 1 + f(idx + 1, idx, n, a, dp);
	}

	return dp[idx][prev_idx + 1] = Math.max(take, notTake);
}

// The wrapper function for _lis()
static int lis(int arr[], int n)
{

	// The function _lis() stores its result in max
	int dp[][] = new int[n+1][n+1];
	for (int row[] : dp)
	Arrays.fill(row, -1);

	return f(0, -1, n, arr, dp);


}

// driver program to test above functions
public static void main(String args[])
{
	int a[] = { 3, 10, 2, 1, 20 };
	int n = a.length;
	System.out.println("Length of lis is " + lis(a, n)
					+ "\n");
}
}


```


**Output:**

```
Length of lis is 3
```
**Time complexity:** O(n x n)

**Auxiliary space:** O(n x n)
