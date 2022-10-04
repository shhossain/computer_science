# Quick Sort
Quick Sort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.

## Complexity
| Best | Average | Worst | Memory | Stable |
|------|---------|-------|--------|--------|
| nlog(n) | nlog(n) | n^2   | log(n) | No    |

## Sudo Code
```
procedure quickSort( A : list of sortable items )
    n = length(A)
    if n ≤ 1 then
        return A
    select and remove a pivot element pivot from A
    create empty lists less and greater
    for each x in A do
        if x ≤ pivot then
            append x to less
        else
            append x to greater
        end if
    end for
    return concatenate( quickSort(less), pivot, quickSort(greater) )
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

### Python
```python
def partition(arr,low,high):
    i = ( low-1 )         # index of smaller element
    pivot = arr[high]     # pivot
 
    for j in range(low , high):
 
        # If current element is smaller than or
        # equal to pivot
        if   arr[j] <= pivot:
         
            # increment index of smaller element
            i = i+1
            arr[i],arr[j] = arr[j],arr[i]
 
    arr[i+1],arr[high] = arr[high],arr[i+1]
    return ( i+1 )

# The main function that implements QuickSort
# arr[] --> Array to be sorted,
# low  --> Starting index,
# high  --> Ending index

# Function to do Quick sort
def quickSort(arr,low,high):
    if low < high:
 
        # pi is partitioning index, arr[p] is now
        # at right place
        pi = partition(arr,low,high)
 
        # Separately sort elements before
        # partition and after partition
        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)

# Driver code to test above
arr = [10, 7, 8, 9, 1, 5]
n = len(arr)
quickSort(arr,0,n-1)
print ("Sorted array is:")
print(arr)
```

### CPP
```cpp
#include <iostream>
using namespace std;

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver Code
int main()
{
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
```

### C
```c
#include <stdio.h>

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}

// Driver program to test above functions
int main()
{
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Sorted array: n");
    printArray(arr, n);
    return 0;
}
```

### Java
```java
// Java program for implementation of QuickSort
class QuickSort
{
    /* This function takes last element as pivot, places
    the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
    to left of pivot and all greater elements to right
    of pivot */
    int partition(int arr[], int low, int high)
    {
        int pivot = arr[high];
        int i = (low-1); // index of smaller element
        for (int j=low; j<high; j++)
        {
            // If current element is smaller than or
            // equal to pivot
            if (arr[j] <= pivot)
            {
                i++;

                // swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // swap arr[i+1] and arr[high] (or pivot)
        int temp = arr[i+1];
        arr[i+1] = arr[high];
        arr[high] = temp;

        return i+1;
    }

    /* The main function that implements QuickSort()
    arr[] --> Array to be sorted,
    low --> Starting index,
    high --> Ending index */
    void sort(int arr[], int low, int high)
    {
        if (low < high)
        {
            /* pi is partitioning index, arr[pi] is
            now at right place */
            int pi = partition(arr, low, high);

            // Recursively sort elements before
            // partition and after partition
            sort(arr, low, pi-1);
            sort(arr, pi+1, high);
        }
    }

    // A utility function to print array of size n
    static void printArray(int arr[])
    {
        int n = arr.length;
        for (int i=0; i<n; ++i)
            System.out.print(arr[i]+" ");
        System.out.println();
    }

    // Driver program
    public static void main(String args[])
    {
        int arr[] = {10, 7, 8, 9, 1, 5};
        int n = arr.length;

        QuickSort ob = new QuickSort();
        ob.sort(arr, 0, n-1);

        System.out.println("sorted array");
        printArray(arr);
    }
}
```

### JavaScript
```javascript
// JavaScript program for implementation of QuickSort

/* This function takes last element as pivot, places
    the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
    to left of pivot and all greater elements to right
    of pivot */
function partition(arr, low, high) {
  const pivot = arr[high]
  let i = low - 1 // index of smaller element
  for (let j = low; j < high; j++) {
    // If current element is smaller than or
    // equal to pivot
    if (arr[j] <= pivot) {
      i++

      // swap arr[i] and arr[j]
      let temp = arr[i]
      arr[i] = arr[j]
      arr[j] = temp
    }
  }

  // swap arr[i+1] and arr[high] (or pivot)
  let temp = arr[i + 1]
  arr[i + 1] = arr[high]
  arr[high] = temp

  return i + 1
}

/* The main function that implements QuickSort
    arr --> Array to be sorted,
    low --> Starting index,
    high --> Ending index */
function sort(arr, low, high) {
  if (low < high) {
    /* pi is partitioning index, arr[pi] is
            now at right place */
    let pi = partition(arr, low, high)

    // Recursively sort elements before
    // partition and after partition
    sort(arr, low, pi - 1)
    sort(arr, pi + 1, high)
  }

  return arr
}

const arr = [10, 7, 8, 9, 1, 5]
console.log(sort(arr, 0, arr.length - 1))

```

### Go
```go
package main

import "fmt"

// This function takes last element as pivot, places
// the pivot element at its correct position in sorted
// array, and places all smaller (smaller than pivot)
// to left of pivot and all greater elements to right
// of pivot

func partition(arr []int, low int, high int) int {
    pivot := arr[high] // pivot
    i := low - 1       // Index of smaller element

    for j := low; j <= high-1; j++ {
        // If current element is smaller than or
        // equal to pivot
        if arr[j] <= pivot {
            i++ // increment index of smaller element
            arr[i], arr[j] = arr[j], arr[i]
        }
    }
    arr[i+1], arr[high] = arr[high], arr[i+1]
    return i + 1
}

// The main function that implements QuickSort
// arr[] --> Array to be sorted,
// low  --> Starting index,
// high  --> Ending index
func quickSort(arr []int, low int, high int) {
    if low < high {
        // pi is partitioning index, arr[p] is now
        // at right place
        pi := partition(arr, low, high)

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)
    }
}

// Function to print an array
func printArray(arr []int, size int) {
    for i := 0; i < size; i++ {
        fmt.Printf("%d ", arr[i])
    }
    fmt.Printf("n")
}

// Driver program to test above functions
func main() {
    arr := []int{10, 7, 8, 9, 1, 5}
    n := len(arr)
    quickSort(arr, 0, n-1)
    fmt.Printf("Sorted array: n")
    printArray(arr, n)
}
```

### Ruby
```ruby

# This function takes last element as pivot, places
# the pivot element at its correct position in sorted
# array, and places all smaller (smaller than pivot)
# to left of pivot and all greater elements to right
# of pivot

def partition(arr, low, high)
    i = low - 1
    pivot = arr[high]

    for j in low..high - 1
        if arr[j] <= pivot
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
        end
    end
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1
end

# The main function that implements QuickSort
# arr[] --> Array to be sorted,
# low  --> Starting index,
# high  --> Ending index
def quick_sort(arr, low, high)
    if low < high
        # pi is partitioning index, arr[p] is now
        # at right place
        pi = partition(arr, low, high)

        # Separately sort elements before
        # partition and after partition
        quick_sort(arr, low, pi - 1)
        quick_sort(arr, pi + 1, high)
    end
end

# Function to print an array
def print_array(arr, size)
    for i in 0..size - 1
        print arr[i], " "
    end
    puts
end

# Driver code
arr = [10, 7, 8, 9, 1, 5]
n = arr.length
quick_sort(arr, 0, n - 1)
puts "Sorted array: "
print_array(arr, n)
```




