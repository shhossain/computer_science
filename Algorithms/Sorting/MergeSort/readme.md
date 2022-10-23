# Merge Sort
Merge sort is a sorting technique based on divide and conquer technique. With worst-case time complexity being Ο(n log n), it is one of the most respected algorithms.

## Complexity
| Best | Average | Worst | Memory | Stable |
|------|---------|-------|--------|--------|
| n log(n)  | n log(n)     | n log(n)   | n      | Yes     |

## Sudo Code
```
procedure merge( var a as array, var b as array )
   var c as array

   while ( a and b have elements )
      if ( a[0] > b[0] )
         add b[0] to the end of c
         remove b[0] from b
      else
         add a[0] to the end of c
         remove a[0] from a
      end if
   end while

   while ( a has elements )
      add a[0] to the end of c
      remove a[0] from a
   end while

   while ( b has elements )
      add b[0] to the end of c
      remove b[0] from b
   end while

   return c
end procedure

procedure mergeDesc( var a as array, var b as array )
   var c as array

   while ( a and b have elements )
      if ( a[0] < b[0] )
         add b[0] to the end of c
         remove b[0] from b
      else
         add a[0] to the end of c
         remove a[0] from a
      end if
   end while

   while ( a has elements )
      add a[0] to the end of c
      remove a[0] from a
   end while

   while ( b has elements )
      add b[0] to the end of c
      remove b[0] from b
   end while

   return c
end procedure

procedure mergeSort( var a as array )
   if ( n == 1 ) return a

   var l1 as array = a[0] ... a[n/2]
   var l2 as array = a[n/2+1] ... a[n]

   l1 = mergeSort( l1 )
   l2 = mergeSort( l2 )

   return merge( l1, l2 )
end procedure

procedure mergeSortDesc( var a as array )
   if ( n == 1 ) return a

   var l1 as array = a[0] ... a[n/2]
   var l2 as array = a[n/2+1] ... a[n]

   l1 = mergeSortDesc( l1 )
   l2 = mergeSortDesc( l2 )

   return mergeDesc( l1, l2 )
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
# Python program for implementation of MergeSort Acsending and Descending

def mergeSort(arr):
    if len(arr) >1:
        mid = len(arr)//2 #Finding the mid of the array
        L = arr[:mid] # Dividing the array elements
        R = arr[mid:] # into 2 halves

        mergeSort(L) # Sorting the first half
        mergeSort(R) # Sorting the second half

        i = j = k = 0

        # Copy data to temp arrays L[] and R[]
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i+=1
            else:
                arr[k] = R[j]
                j+=1
            k+=1

        # Checking if any element was left
        while i < len(L):
            arr[k] = L[i]
            i+=1
            k+=1

        while j < len(R):
            arr[k] = R[j]
            j+=1
            k+=1
        
def mergeSortDesc(arr):
    if len(arr) >1:
        mid = len(arr)//2 #Finding the mid of the array
        L = arr[:mid] # Dividing the array elements
        R = arr[mid:] # into 2 halves

        mergeSortDesc(L) # Sorting the first half
        mergeSortDesc(R) # Sorting the second half

        i = j = k = 0

        # Copy data to temp arrays L[] and R[]
        while i < len(L) and j < len(R):
            if L[i] > R[j]:
                arr[k] = L[i]
                i+=1
            else:
                arr[k] = R[j]
                j+=1
            k+=1

        # Checking if any element was left
        while i < len(L):
            arr[k] = L[i]
            i+=1
            k+=1

        while j < len(R):
            arr[k] = R[j]
            j+=1
            k+=1

arr = [12, 11, 13, 5, 6, 7]
print ("Given array is", end="\n")
print(arr)
mergeSort(arr)
print("Sorted array is: ", end="\n")
print(arr)

arr = [12, 11, 13, 5, 6, 7]
print ("Given array is", end="\n")
print(arr)
mergeSortDesc(arr)
print("Sorted array is: ", end="\n")
print(arr)
```

### CPP
```cpp
// C++ program for Merge Sort
#include <iostream>
using namespace std;

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

// l is for left index and r is right index of the
// sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
	if (l < r) {
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l + (r - l) / 2;

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

/* UTILITY FUNCTIONS
Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << A[i] << " ";
}

// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}
```

### C
```c
// C program for Merge Sort
#include <stdio.h>

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf(" ");
}

// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is ");
    printArray(arr, arr_size);
    
    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is ");
    printArray(arr, arr_size);
    return 0;
}

```

### Java
```java
// Java program for implementation of MergeSort
class MergeSort
{
    void merge(int arr[], int l, int m, int r)
    {
        // Find sizes of two subarrays to be merged
        int n1 = m - l + 1;
        int n2 = r - m;

        /* Create temp arrays */
        int L[] = new int [n1];
        int R[] = new int [n2];

        /*Copy data to temp arrays*/
        for (int i=0; i<n1; ++i)
            L[i] = arr[l + i];
        for (int j=0; j<n2; ++j)
            R[j] = arr[m + 1+ j];


        /* Merge the temp arrays */

        // Initial indexes of first and second subarrays
        int i = 0, j = 0;

        // Initial index of merged subarry array
        int k = l;

        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        /* Copy remaining elements of L[] if any */
        while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }

        /* Copy remaining elements of R[] if any */
        while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }

    }

    // Main function that sorts arr[l..r] using
    // merge()
    void sort(int arr[], int l, int r)
    {
        if (l < r)
        {
            // Find the middle point
            int m = (l+r)/2;

            // Sort first and second halves
            sort(arr, l, m);
            sort(arr , m+1, r);

            // Merge the sorted halves
            merge(arr, l, m, r);
        }
    }

    /* A utility function to print array of size n */
    static void printArray(int arr[])
    {
        int n = arr.length;
        for (int i=0; i<n; ++i)
            System.out.print(arr[i] + " ");
        System.out.println();
    }

    // Driver method
    public static void main(String args[])
    {
        int arr[] = {12, 11, 13, 5, 6, 7};

        System.out.println("Given Array");
        printArray(arr);

        MergeSort ob = new MergeSort();
        ob.sort(arr, 0, arr.length-1);

        System.out.println("\nSorted array");
        printArray(arr);
    }

}
```

### JavaScript
```javascript
// JavaScript program for implementation of MergeSort

function merge(arr, left, middle, right) {
	// Find sizes of two subarrays to be merged
	const n1 = middle - left + 1
	const n2 = right - middle

	/* Create temp arrays */
	const L = Array(n1)
	const R = Array(n2)

	/*Copy data to temp arrays*/
	for (let i = 0; i < n1; ++i) L[i] = arr[left + i]
	for (let j = 0; j < n2; ++j) R[j] = arr[middle + 1 + j]

	/* Merge the temp arrays */

	// Initial indexes of first and second subarrays
	let i = 0,
		j = 0

	// Initial index of merged subarray array
	let k = left

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i]
			i++
		} else {
			arr[k] = R[j]
			j++
		}
		k++
	}

	/* Copy remaining elements of L[] if any */
	while (i < n1) {
		arr[k] = L[i]
		i++
		k++
	}

	/* Copy remaining elements of R[] if any */
	while (j < n2) {
		arr[k] = R[j]
		j++
		k++
	}
}

// Main function that sorts arr[l..r] using
// merge()
function sort(arr, left, right) {
	if (left < right) {
		// Find the middle poconst
		const middle = Math.floor((left + right) / 2)

		// Sort first and second halves
		sort(arr, left, middle)
		sort(arr, middle + 1, right)

		// Merge the sorted halves
		merge(arr, left, middle, right)
	}

	return arr
}

const arr = [12, 11, 13, 5, 6, 7]
console.log(sort(arr, 0, arr.length - 1))

```

### Go
```go
// Go program for implementation of MergeSort
package main

import "fmt"

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
func merge(arr []int, l int, m int, r int) {
    n1 := m - l + 1
    n2 := r - m

    // create temp arrays
    L := make([]int, n1)
    R := make([]int, n2)

    // Copy data to temp arrays L[] and R[]
    for i := 0; i < n1; i++ {
        L[i] = arr[l+i]
    }
    for j := 0; j < n2; j++ {
        R[j] = arr[m+1+j]
    }

    // Merge the temp arrays back into arr[l..r]

    // Initial index of first subarray
    i := 0

    // Initial index of second subarray
    j := 0

    // Initial index of merged subarray
    k := l
    for i < n1 && j < n2 {
        if L[i] <= R[j] {
            arr[k] = L[i]
            i++
        } else {
            arr[k] = R[j]
            j++
        }
        k++
    }

    // Copy the remaining elements of L[], if there
    // are any
    for i < n1 {
        arr[k] = L[i]
        i++
        k++
    }

    // Copy the remaining elements of R[], if there
    // are any
    for j < n2 {
        arr[k] = R[j]
        j++
        k++
    }
}

// l is for left index and r is right index of the
// sub-array of arr to be sorted
func mergeSort(arr []int, l int, r int) {
    if l < r {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        m := l + (r-l)/2

        // Sort first and second halves
        mergeSort(arr, l, m)
        mergeSort(arr, m+1, r)

        merge(arr, l, m, r)
    }
}

// Driver code
func main() {
    arr := []int{12, 11, 13, 5, 6, 7}

    fmt.Println("Given array is")
    fmt.Println(arr)

    mergeSort(arr, 0, len(arr)-1)

    fmt.Println("\nSorted array is")
    fmt.Println(arr)
}
```

### Ruby
```ruby
# Ruby program for implementation of MergeSort
def merge_sort(arr)
  return arr if arr.length <= 1

  mid = arr.length / 2
  left = merge_sort(arr[0...mid])
  right = merge_sort(arr[mid..arr.length])

  merge(left, right)
end

def merge(left, right)
  if left.empty?
    right
  elsif right.empty?
    left
  elsif left.first < right.first
    [left.first] + merge(left[1..left.length], right)
  else
    [right.first] + merge(left, right[1..right.length])
  end
end

arr = [12, 11, 13, 5, 6, 7]
p merge_sort(arr)
```


### Merge Sort Time and Space Complexity

1. Space Complexity
Auxiliary Space: O(n) Sorting In Place: No Algorithm : Divide and Conquer

2. Time Complexity
Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation. T(n) = 2T(n/2) + O(n) The solution of the above recurrence is O(nLogn). The list of size N is divided into a max of Logn parts, and the merging of all sublists into a single list takes O(N) time, the worst-case run time of this algorithm is O(nLogn) Best Case Time Complexity: O(n*log n) Worst Case Time Complexity: O(n*log n) Average Time Complexity: O(n*log n) The time complexity of MergeSort is O(n*Log n) in all the 3 cases (worst, average and best) as the mergesort always divides the array into two halves and takes linear time to merge two halves.



        
        
        
