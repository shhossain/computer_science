# Selection Sort
Selection Sort is a sorting algorithm, specifically an in-place comparison sort. It has $O(n^2)$ time complexity, making it inefficient on large lists, and generally performs worse than the similar insertion sort. Selection sort is noted for its simplicity, and it has performance advantages over more complicated algorithms in certain situations, particularly where auxiliary memory is limited.

## Complexity
|  Best  | Average | Worst | Memory | Stable |
|:--------:|:---------:|:-------:|:--------:|:--------:|
|  $O(n^2)$ |  $O(n^2)$  | $O(n^2)$ | $O(1)$  |   No   |

- The worst-case time complexity of Selection Sort is O($n^2$).
- The best-case time complexity of Selection Sort is O($n^2$).
- The average case time complexity of Selection Sort is O($n^2$).
- The space complexity of Selection Sort is O(1).

## Pseudo Code
```
procedure selectionSort( A : list of sortable items )
    n = length(A)
    for i = 1 to n - 1
        /* set current element as minimum*/
        min = i    
        /* check the element to be minimum */         
        for j = i+1 to n 
            if A[j] < A[min] then
                min = j;
        /* swap the minimum element with the current element*/         
        if indexMin != i  then
            swap A[i] and A[min]
end procedure

procedure selectionSortDesc( A : list of sortable items )
    n = length(A)
    for i = 1 to n - 1
        /* set current element as maximum*/
        max = i    
        /* check the element to be maximum */         
        for j = i+1 to n 
            if A[j] > A[max] then
                max = j;
        /* swap the maximum element with the current element*/         
        if indexMax != i  then
            swap A[i] and A[max]
end procedure
```

## Implementations
* [Python](#python)
* [C++](#cpp)
* [C](#c)
* [Java](#java)
* [JavaScript](#javascript)
* [Go](#go)
* [Ruby](#ruby)
* [c#](#CSharp)

### Python
```python
def selectionSort(arr):
    for i in range(len(arr)):
        min_idx = i
        for j in range(i+1, len(arr)):
            if arr[min_idx] > arr[j]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]

def selectionSortDesc(arr):
    for i in range(len(arr)):
        max_idx = i
        for j in range(i+1, len(arr)):
            if arr[max_idx] < arr[j]:
                max_idx = j
        arr[i], arr[max_idx] = arr[max_idx], arr[i]

arr = [12, 11, 13, 5, 6]
print("Unsorted array is:")
print(arr)
selectionSort(arr)
print("Sorted array is:")
print(arr) # [5, 6, 11, 12, 13]

arr = [12, 11, 13, 5, 6]
print("Unsorted array is:")
print(arr)
selectionSortDesc(arr)
print("Sorted array is:")
print(arr) # [13, 12, 11, 6, 5]
```

### CPP
```cpp
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
}

void selectionSortDesc(int arr[], int n)
{
    int i, j, max_idx;
    for (i = 0; i < n-1; i++)
    {
        max_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] > arr[max_idx])
            max_idx = j;
        swap(arr[max_idx], arr[i]);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
```

### Java
```java

public class SelectionSort {
    public static void main(String[] args) {
        int[] arr = {64, 25, 12, 22, 11};
        selectionSort(arr);
        System.out.println("Sorted array");
        printArray(arr);
    }

    public static void selectionSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n-1; i++) {
            int min_idx = i;
            for (int j = i+1; j < n; j++) {
                if (arr[j] < arr[min_idx]) {
                    min_idx = j;
                }
            }
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }

    public static void printArray(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n; ++i) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
```

### C
```c
#include <stdio.h>

void swap(int *p,int *q)
{
	//p=&n1 so p store the address of n1, so *p store the value of n1
	//q=&n2 so q store the address of n2, so *q store the value of n2

    int tmp;
    tmp = *p; // tmp store the value of n1
    *p=*q;    // *p store the value of *q that is value of n2
    *q=tmp;   // *q store the value of tmp that is the value of n1
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

void selectionSortDesc(int arr[], int n)
{
    int i, j, max_idx;
    for (i = 0; i < n-1; i++)
    {
        max_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] > arr[max_idx])
            max_idx = j;
        swap(&arr[max_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {64, 100, 2, 0, -1, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting: ");
    printArray(arr, n);
    selectionSort(arr, n);
    printf("Sorted array Ascending: ");
    printArray(arr, n);
    selectionSortDesc(arr, n);
    printf("Sorted array Decending: ");
    printArray(arr, n);
    return 0;
}
```

### JavaScript
```js
function selectionSort(arr) {
    for (let i = 0; i < arr.length; i++) {
        let min = i;
        for (let j = i + 1; j < arr.length; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min !== i) {
            [arr[i], arr[min]] = [arr[min], arr[i]];
        }
    }
    return arr;
}

function selectionSortDesc(arr) {
    for (let i = 0; i < arr.length; i++) {
        let max = i;
        for (let j = i + 1; j < arr.length; j++) {
            if (arr[j] > arr[max]) {
                max = j;
            }
        }
        if (max !== i) {
            [arr[i], arr[max]] = [arr[max], arr[i]];
        }
    }
    return arr;
}

const arr = [64, 25, 12, 22, 11];
console.log(selectionSort(arr)); // [11, 12, 22, 25, 64]
console.log(selectionSortDesc(arr)); // [64, 25, 22, 12, 11]
```

### Go
```go
package main

import "fmt"

func selectionSort(arr []int) []int {
    for i := 0; i < len(arr); i++ {
        min := i
        for j := i + 1; j < len(arr); j++ {
            if arr[j] < arr[min] {
                min = j
            }
        }
        if min != i {
            arr[i], arr[min] = arr[min], arr[i]
        }
    }
    return arr
}

func selectionSortDesc(arr []int) []int {
    for i := 0; i < len(arr); i++ {
        max := i
        for j := i + 1; j < len(arr); j++ {
            if arr[j] > arr[max] {
                max = j
            }
        }
        if max != i {
            arr[i], arr[max] = arr[max], arr[i]
        }
    }
    return arr
}

func main() {
    arr := []int{64, 25, 12, 22, 11}
    fmt.Println(selectionSort(arr)) // [11 12 22 25 64]
    fmt.Println(selectionSortDesc(arr)) // [64 25 22 12 11]
}
```

### Ruby
```ruby
def selection_sort(arr)
  for i in 0..arr.length-1
    min = i
    for j in i+1..arr.length-1
      if arr[j] < arr[min]
        min = j
      end
    end
    if min != i
      arr[i], arr[min] = arr[min], arr[i]
    end
  end
  return arr
end

def selection_sort_desc(arr)
  for i in 0..arr.length-1
    max = i
    for j in i+1..arr.length-1
      if arr[j] > arr[max]
        max = j
      end
    end
    if max != i
      arr[i], arr[max] = arr[max], arr[i]
    end
  end
  return arr
end

arr = [64, 25, 12, 22, 11]
p selection_sort(arr) # [11, 12, 22, 25, 64]
p selection_sort_desc(arr) # [64, 25, 22, 12, 11]
```
### CSharp
```c#
using System;

class Program {

//sorting algorithm
   public static void Sort<T>(T[] array) where T : IComparable 
{
    for (int i = 0; i < array.Length - 1; i++) 
    {
        int minin = i; 
        T minval = array[i];
        for (int z = i + 1; z < array.Length; z++) 
        {
            if (array[z].CompareTo(minval) < 0)
            {
             	 minin = z; 
                 minval = array[z]; 
            } 
        } 
        Swap(array, i, minin); 
    }
}

//sorting desc
  public static void SortD<T>(T[] array) where T : IComparable 
{
    for (int i = 0; i < array.Length - 1; i++) 
    {
        int maxin = i; 
        T maxval = array[i];
        for (int z = i + 1; z < array.Length; z++) 
        {
            if (array[z].CompareTo(maxval) > 0)
            {
             	 maxin = z; 
                 maxval = array[z]; 
            } 
        } 
        Swap(array, i, maxin); 
    }
}


//swaping algorithm
private static void Swap<T>(T[] array, int first, int second)
{
	T tnum = array[first]; 
  	array[first] = array[second]; 
  	array[second] = tnum;
}

  //code to print arrays
  public static void print(int[] arr, int n)
	{
		for (int i = 0; i < n; i++)
			Console.Write(arr[i] + " ");
	}
  
  //main program
 public static void Main (string[] args) {
    int[] arr = { 170, 45, 75, 90, 802, 24, 2, 66 };
		int n = arr.Length;
    Console.WriteLine("Starting array");
    print(arr,n);
   

		// Function Call
		Sort(arr);
   Console.WriteLine();
    Console.WriteLine("Sorted array");
		print(arr, n);
		
		
		SortD(arr);
   Console.WriteLine();
    Console.WriteLine("Sorted array desc");
		print(arr, n);
  }
}
```

