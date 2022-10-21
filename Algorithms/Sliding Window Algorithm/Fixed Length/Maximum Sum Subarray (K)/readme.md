# Problem Statement

We will be given an array and we have to find the maximum sum of the subarray of length k. Target here is to reduce the complexity of the brute force approach as much as possible. Thus, lets take up the SLIDING WINDOW TECHNIQUE.


# Brute-Force Approach

Check every possible sub-array of length k. And then get the maximum sum among these subarrays. The complexity for this approach is **O(n^2)**

## Pseudocode

```
for(int i=0; i<=n-k; i++)
{
    int sum=0;
    for(int j=i; j<k; j++)
        sum+=a[j];
    maxi = max(maxi, sum);
}

```
## Complexity
Time Complexity: **O(n^2)**


## Sliding Window Approach

Since our aim is to reduce the time complexity, we observe that the brute force approach is repeated many times. Thus, we maintain a sum of the elements of k immediately before the end of a subarray, the sum is then just reduced by the element at beginning and increased by the element immediately after the end of the current subarray. In this way the complexity is greatly reduced as now it is **O(n)**


## Implementations
* [C++](#cpp)
* [C](#c)
* [JAVA](#java)


### CPP
```cpp

#include<iostream>
using namespace std;
#include<vector>

int maximumSumSubarray(int K, vector<int> &arr , int N)
{
    int maxSum = 0;
    int i=0, j=0;
    int sum =0;

    while(j<N)
    {
        sum = sum+arr[j];

        // as soon as size of the subarray is greater than K, we exclude the element from back which is being pointed by i
        // it is done so as to maintain the size of subarray as k.
        if(j-i+1 == K)
        {
            maxSum = max(maxSum, sum);
            sum = sum - arr[i];
            i++;
        }
        j++;
    }
    return maxSum;
}

int main()
{

    vector<int> nums = {2,5,1,8,2,9,1};
    cout<<maximumSumSubarray(3, nums, nums.size()); // ans = 19
    return 0;
}
```

### C
```c

#include<stdio.h>
#include<conio.h>

int maximumSumSubarray(int *arr, int K, int N) {
  int maxSum = 0;
  int i = 0, j = 0;
  int sum = 0;

  while (j < N) {
    sum = sum + arr[j];

    /* This is sliding-window-logic ie
    as soon as size of the subarray
    is greater than K, we exclude the
    element from back which is being pointed by i
    it is done so as to maintain the size of subarray as k.
    */
    if (j - i + 1 == K) {
      maxSum = max(maxSum, sum);
      sum = sum - arr[i];
      i++;
    }
    j++;
  }

  return maxSum;
}

int main()
{

    int nums[] = {2,5,1,8,2,9,1};
    printf("maximumSumSubarray = %d\n", maximumSumSubarray(nums, 3, 7)); // ans = 19
    return 0;
}
```
### JAVA
```java

// JAVA Code for Find maximum (or minimum)
// sum of a subarray of size k
import java.util.*;

class GFG {
	
	// Returns maximum sum in a subarray of size k.
	public static int maxSum(int arr[], int n, int k)
	{
		// k must be smaller than n
		if (n < k)
		{
		System.out.println("Invalid");
		return -1;
		}
	
		// Compute sum of first window of size k
		int res = 0;
		for (int i=0; i<k; i++)
		res += arr[i];
	
		// Compute sums of remaining windows by
		// removing first element of previous
		// window and adding last element of
		// current window.
		int curr_sum = res;
		for (int i=k; i<n; i++)
		{
		curr_sum += arr[i] - arr[i-k];
		res = Math.max(res, curr_sum);
		}
	
		return res;
	}
	
	/* Driver program to test above function */
	public static void main(String[] args)
	{
		int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
		int k = 4;
		int n = arr.length;
		System.out.println(maxSum(arr, n, k));
	}
}

```
