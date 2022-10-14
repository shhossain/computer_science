# Problem Statement

We will be given an array and we have to find the largest sub-array with sum k.Note the array will contain only positive integers.
Example:    
arr[] = { 10, 5, 2, 7, 1, 9 }, k = 15
Output: 4
Explanation: The sub-array is {5, 2, 7, 1}.

Let's directly jump to the Sliding Window Approach. As we know the brute-force approach will take O(n^2) time complexity.


## Sliding Window Approach

To use the sliding window techinque, first we look at the brute-force approach and try to find some pattern. If you observe in the brute-force approach we are making repetitive steps again and again by just shifting the positon of the subarray. Thus, we can store the sum of the k elements of the subarray starting at index i and exclude element at index i and include next element of the subarray to the right.
Don't worry if u don't get it now, just dry run the below algorithm and you will get it.


## Implementations
* [C++](#cpp)
* [C](#c)


### CPP
```cpp

#include<iostream>
using namespace std;

int longestSubarray(vector<int> nums, int k)
{                                   
    int sum = 0;
    int i=0;
    int j=0;
    int maxLength=0;

    while(j<nums.size())
    {
        sum = sum+nums[j];
        if(sum < k)
            j++;
        else if(sum == k)
        {
            maxLength=max(maxLength,j-i+1);
            j++;
        }
        else if(sum > k)
        {
            while(sum > k)
            {
                sum=sum-nums[i];
                i++;
            }
            if(sum == k)
                maxLength=max(maxLength, j-i+1);
            j++;
        }
    }
    return maxLength;
}

int main()
{       
    vector<int> nums = {2,1,1,3,1} ;
    int ans = longestSubarray(nums, 4); ans= 4 -> [2,1,1,3]
    cout<<ans;

    return 0;
}
```

### C
```c

#include<stdio.h>
#include<conio.h>

int longestSubarray(int *nums, int k, int n) {
  int sum = 0;
  int i = 0, j = 0;
  int maxLength = 0;

  while(j<nums.size())
    {
        sum = sum+nums[j];
        if(sum < k)
            j++;
        else if(sum == k)
        {
            maxLength=max(maxLength,j-i+1);
            j++;
        }
        else if(sum > k)
        {
            while(sum > k)
            {
                sum=sum-nums[i];
                i++;
            }
            if(sum == k)
                maxLength=max(maxLength, j-i+1);
            j++;
        }
    }
  return maxLength;
}
```