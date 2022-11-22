# Swap Sort
Swap Sort is also a sorting algorithm, which is not known by many.It has O(n) time complexity.It works only on numbers [1 to N] and must not contain duplicates.You might be thinking what is the use of Swap Sort as there is Count Sort which time complexity is O(N) and can also sort data with dupliactes, but Swap sort is useful and efficient in solving many problems namely, find duplicate and missing, find all duplicates and missing from Array.

## Complexity
| Best | Average | Worst | Memory | Stable |
|------|---------|-------|--------|--------|
| n    | n       | n     | 1      | No     |


## Sudo Code
```
procedure swapSort( A: nums)
    n = len(nums)
    while i < n
        // get the curr ele original index
        index = nums[i]-1
        if  nums[i] != nums[index]
            swap nums[i] and nums[index]
        else
            i++
end procedure
```

## Implementations
* [Python](#python)
* [CPP](#cpp)
* [C](#c)

### Python 
```python

import sys

def swapSort(arr):
    n = len(arr)
    i = 0
    while i < n:
        if arr[i] != arr[arr[i] - 1]:
            tmp = arr[i]
            arr[i], arr[tmp - 1] = arr[arr[i] - 1], tmp
        else:
            i += 1

def main():
    arr = [5,2,3,1,4]
    swapSort(arr)
    print(arr)

if __name__ == "__main__":
    main()
```

### CPP
```cpp

#include<bits/stdc++.h>
using namespace std;


void swapSort(vector<int>& arr)
{
    int n = arr.size();
    int i=0;

    while(i < n)
    {
        if(arr[i] != arr[arr[i]-1])
            swap(arr[i], arr[arr[i]-1]);
        else
            i++;
    }
}


int main()
{
    vector<int> arr = {5,2,3,1,4};
    swapSort(arr);  // [1,2,3,4,5]

    for(auto x:arr)
        cout<<x<<" ";
}
```

### C
```c

#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapSort(int* arr, int n)
{
    int i=0;
    while(i < n)
    {
        if(arr[i] != arr[arr[i]-1])
            swap(&arr[i], &(arr[arr[i]-1]));
        else
            i++;
    }
}


int main()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    swapSort(arr, n);  // [1,2,3,4,5]

    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}

```

