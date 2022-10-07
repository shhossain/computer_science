# Tim Sort

TimSort is a sorting algorithm based on Insertion Sort and Merge Sort. It is used as the default sorting technique in python's sorted() and .sort() as well as Java's Arrays.sort()

## Complexity

| Best | Average  | Worst    | Memory | Stable |
| ---- | -------- | -------- | ------ | ------ |
| n    | n log(n) | n log(n) | n      | Yes    |

## Algorithm

```
Step 1 - Divide the array into the number of blocks known as run.
Step 2 - Consider the size of run, either 32 or 64.
Step 3 - Sort the individual elements of every run one by one using insertion sort.
Step 4 - Merge the sorted runs one by one using the merge function of merge sort.
Step 5 - Double the size of merged sub-arrays after every iteration.
```

## Implementations

- [Python](#python)
- [C++](#cpp)
- [Java](#java)

### Python

```python
# Python program - timSort
MIN_MERGE = 32

def calcMinRun(n):
    r = 0
    while n >= MIN_MERGE:
        r |= n & 1
        n >>= 1
    return n + r

def insertionSort(arr, left, right):
    for i in range(left + 1, right + 1):
        j = i
        while j > left and arr[j] < arr[j - 1]:
            arr[j], arr[j - 1] = arr[j - 1], arr[j]
            j -= 1

def merge(arr, l, m, r):
    len1, len2 = m - l + 1, r - m
    left, right = [], []
    for i in range(0, len1):
        left.append(arr[l + i])
    for i in range(0, len2):
        right.append(arr[m + 1 + i])

    i, j, k = 0, 0, l

    while i < len1 and j < len2:
        if left[i] <= right[j]:
            arr[k] = left[i]
            i += 1

        else:
            arr[k] = right[j]
            j += 1

        k += 1

    while i < len1:
        arr[k] = left[i]
        k += 1
        i += 1

    while j < len2:
        arr[k] = right[j]
        k += 1
        j += 1


def timSort(arr):
    n = len(arr)
    minRun = calcMinRun(n)

    for start in range(0, n, minRun):
        end = min(start + minRun - 1, n - 1)
        insertionSort(arr, start, end)

    size = minRun
    while size < n:
        for left in range(0, n, 2 * size):
            mid = min(n - 1, left + size - 1)
            right = min((left + 2 * size - 1), (n - 1))

            if mid < right:
                merge(arr, left, mid, right)

        size = 2 * size


if __name__ == "__main__":

    arr = [-2, 7, 15, -14, 0, 15, 0,
           7, -7, -4, -13, 5, 8, -14, 12]

    print("Given Array is")
    print(arr)

    timSort(arr)

    print("After Sorting Array is")
    print(arr)
```

### CPP

```cpp
// c++ program - timsort
#include<bits/stdc++.h>
using namespace std;
const int RUN = 32;

void insertionSort(int arr[], int left, int right)
{
    for (int i = left + 1; i <= right; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

void merge(int arr[], int l, int m, int r)
{
    int len1 = m - l + 1, len2 = r - m;
    int left[len1], right[len2];
    for (int i = 0; i < len1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < len2; i++)
        right[i] = arr[m + 1 + i];

    int i = 0;
    int j = 0;
    int k = l;
    while (i < len1 && j < len2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < len1)
    {
        arr[k] = left[i];
        k++;
        i++;
    }

    while (j < len2)
    {
        arr[k] = right[j];
        k++;
        j++;
    }
}

void timSort(int arr[], int n)
{

    for (int i = 0; i < n; i+=RUN)
        insertionSort(arr, i, min((i+RUN-1),
                                    (n-1)));

    for (int size = RUN; size < n;
                             size = 2*size)
    {

        for (int left = 0; left < n;
                             left += 2*size)
        {
            int mid = left + size - 1;
            int right = min((left + 2*size - 1),
                                            (n-1));
              if(mid < right)
                merge(arr, left, mid, right);
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {-2, 7, 15, -14, 0, 15, 0, 7, -7,
                       -4, -13, 5, 8, -14, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Given Array is\n");
    printArray(arr, n);

    timSort(arr, n);

    printf("After Sorting Array is\n");
    printArray(arr, n);
    return 0;
}
```

### Java

```java
// Java program - TimSort.
class Main
{

    static int MIN_MERGE = 32;

    public static int minRunLength(int n)
    {
        assert n >= 0;
        int r = 0;
        while (n >= MIN_MERGE)
        {
            r |= (n & 1);
            n >>= 1;
        }
        return n + r;
    }

    public static void insertionSort(int[] arr, int left,
                                     int right)
    {
        for (int i = left + 1; i <= right; i++)
        {
            int temp = arr[i];
            int j = i - 1;
            while (j >= left && arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
    }

    public static void merge(int[] arr, int l,
                                 int m, int r)
    {
        int len1 = m - l + 1, len2 = r - m;
        int[] left = new int[len1];
        int[] right = new int[len2];
        for (int x = 0; x < len1; x++)
        {
            left[x] = arr[l + x];
        }
        for (int x = 0; x < len2; x++)
        {
            right[x] = arr[m + 1 + x];
        }

        int i = 0;
        int j = 0;
        int k = l;

        while (i < len1 && j < len2)
        {
            if (left[i] <= right[j])
            {
                arr[k] = left[i];
                i++;
            }
            else {
                arr[k] = right[j];
                j++;
            }
            k++;
        }
        while (i < len1)
        {
            arr[k] = left[i];
            k++;
            i++;
        }

        while (j < len2)
        {
            arr[k] = right[j];
            k++;
            j++;
        }
    }

    public static void timSort(int[] arr, int n)
    {
        int minRun = minRunLength(MIN_MERGE);

        for (int i = 0; i < n; i += minRun)
        {
            insertionSort(arr, i,
                          Math.min((i + MIN_MERGE - 1), (n - 1)));
        }

        for (int size = minRun; size < n; size = 2 * size)
        {

            for (int left = 0; left < n;
                                 left += 2 * size)
            {

                int mid = left + size - 1;
                int right = Math.min((left + 2 * size - 1),
                                     (n - 1));

                  if(mid < right)
                    merge(arr, left, mid, right);
            }
        }
    }

    public static void printArray(int[] arr, int n)
    {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.print("\n");
    }

    public static void main(String[] args)
    {
        int[] arr = { -2, 7,  15,  -14, 0, 15,  0, 7,
                      -7, -4, -13, 5,   8, -14, 12 };
        int n = arr.length;
        System.out.println("Given Array is");
        printArray(arr, n);

        timSort(arr, n);

        System.out.println("After Sorting Array is");
        printArray(arr, n);
    }
}
```
