# Heap Sort
Heap Sort is a comparison based sorting technique based on Binary Heap data structure. It is similar to selection sort where we first find the maximum element and place the maximum element at the end. We repeat the same process for remaining element.

## Complexity
| Best | Average | Worst | Memory | Stable |
|------|---------|-------|--------|--------|
| nlogn | nlogn     | nlogn   | 1      | No    |

## Sudo Code
```
procedure heapSort( A : list of sortable items )
    n = length(A)
    for i = 1 to n-1 inclusive do
        /* if this pair is out of order */
        if A[i-1] > A[i] then
            /* swap them and remember something changed */
            swap( A[i-1], A[i] )
            swapped = true
        end if
    end for
end procedure

procedure heapSortDesc( A : list of sortable items )
    n = length(A)
    for i = 1 to n-1 inclusive do
        /* if this pair is out of order */
        if A[i-1] < A[i] then
            /* swap them and remember something changed */
            swap( A[i-1], A[i] )
            swapped = true
        end if
    end for
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
def heapify(arr, n, i):
    largest = i  # Initialize largest as root
    l = 2 * i + 1     # left = 2*i + 1
    r = 2 * i + 2     # right = 2*i + 2

    # See if left child of root exists and is
    # greater than root
    if l < n and arr[i] < arr[l]:
        largest = l

    # See if right child of root exists and is
    # greater than root
    if r < n and arr[largest] < arr[r]:
        largest = r

    # Change root, if needed
    if largest != i:
        arr[i],arr[largest] = arr[largest],arr[i]  # swap

        # Heapify the root.
        heapify(arr, n, largest)

# The main function to sort an array of given size
def heapSort(arr):
    n = len(arr)

    # Build a maxheap.
    for i in range(n, -1, -1):
        heapify(arr, n, i)

    # One by one extract elements
    for i in range(n-1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]   # swap
        heapify(arr, i, 0)

# Driver code to test above
arr = [ 12, 11, 13, 5, 6, 7]
heapSort(arr)
n = len(arr)
print ("Sorted array is")
print(arr)
```

### CPP
```cpp
#include <iostream>
using namespace std;

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << " ";
}

// Driver program
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    heapSort(arr, n);

    cout << "Sorted array is " << endl;
    printArray(arr, n);
}
```

### C
```c
#include <stdio.h>

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i)
        printf("%d ", arr[i]);
    printf(" ");
}

// Driver program
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    heapSort(arr, n);

    printf("Sorted array is \n");
    printArray(arr, n);
}
```

### Java
```java
// Java program for implementation of Heap Sort
public class HeapSort
{
    public void sort(int arr[])
    {
        int n = arr.length;

        // Build heap (rearrange array)
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(arr, n, i);

        // One by one extract an element from heap
        for (int i=n-1; i>=0; i--)
        {
            // Move current root to end
            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;

            // call max heapify on the reduced heap
            heapify(arr, i, 0);
        }
    }

    // To heapify a subtree rooted with node i which is
    // an index in arr[]. n is size of heap
    void heapify(int arr[], int n, int i)
    {
        int largest = i;  // Initialize largest as root
        int l = 2*i + 1;  // left = 2*i + 1
        int r = 2*i + 2;  // right = 2*i + 2

        // If left child is larger than root
        if (l < n && arr[l] > arr[largest])
            largest = l;

        // If right child is larger than largest so far
        if (r < n && arr[r] > arr[largest])
            largest = r;

        // If largest is not root
        if (largest != i)
        {
            int swap = arr[i];
            arr[i] = arr[largest];
            arr[largest] = swap;

            // Recursively heapify the affected sub-tree
            heapify(arr, n, largest);
        }
    }

    /* A utility function to print array of size n */
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
        int arr[] = {12, 11, 13, 5, 6, 7};
        int n = arr.length;

        HeapSort ob = new HeapSort();
        ob.sort(arr);

        System.out.println("Sorted array is ");
        printArray(arr);
    }
}
```

### JavaScript
```javascript
// JavaScript program for implementation of Heap Sort

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
function heapify(arr, n, i)
{
    let largest = i // Initialize largest as root
    let l = 2 * i + 1 // left = 2*i + 1
    let r = 2 * i + 2 // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest]) largest = l

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest]) largest = r

    // If largest is not root
    if (largest != i) {
        let swap = arr[i]
        arr[i] = arr[largest]
        arr[largest] = swap

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest)
    }
}

function sort(arr) {
    const n = arr.length

    // Build heap (rearrange array)
    for (let i = n / 2 - 1; i >= 0; i--) heapify(arr, n, i)

    // One by one extract an element from heap
    for (let i = n - 1; i >= 0; i--) {
        // Move current root to end
        let temp = arr[0]
        arr[0] = arr[i]
        arr[i] = temp

        // call max heapify on the reduced heap
        heapify(arr, i, 0)
  }

  return arr
}

const arr = [12, 11, 13, 5, 6, 7]
console.log(sort(arr))

```

### Go
```go
// Go program for implementation of Heap Sort
package main

import "fmt"

// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
func heapify(arr []int, n int, i int) {
    largest := i  // Initialize largest as root
    l := 2*i + 1  // left = 2*i + 1
    r := 2*i + 2  // right = 2*i + 2

    // If left child is larger than root
    if l < n && arr[l] > arr[largest] {
        largest = l
    }

    // If right child is larger than largest so far
    if r < n && arr[r] > arr[largest] {
        largest = r
    }

    // If largest is not root
    if largest != i {
        arr[i], arr[largest] = arr[largest], arr[i]

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest)
    }
}

// main function to do heap sort
func heapSort(arr []int, n int) {
    // Build heap (rearrange array)
    for i := n/2 - 1; i >= 0; i-- {
        heapify(arr, n, i)
    }

    // One by one extract an element from heap
    for i := n-1; i >= 0; i-- {
        // Move current root to end
        arr[0], arr[i] = arr[i], arr[0]

        // call max heapify on the reduced heap
        heapify(arr, i, 0)
    }
}

// A utility function to print array of size n
func printArray(arr []int, n int) {
    for i := 0; i < n; i++ {
        fmt.Printf("%d ", arr[i])
    }
    fmt.Println()
}

// Driver program
func main() {
    arr := []int{12, 11, 13, 5, 6, 7}
    n := len(arr)

    heapSort(arr, n)

    fmt.Println("Sorted array is")
    printArray(arr, n)
}
```

### Ruby
```ruby
# Ruby program for implementation of Heap Sort
def heapify(arr, n, i)
    largest = i  # Initialize largest as root
    l = 2*i + 1  # left = 2*i + 1
    r = 2*i + 2  # right = 2*i + 2

    # If left child is larger than root
    if l < n and arr[l] > arr[largest]
        largest = l
    end

    # If right child is larger than largest so far
    if r < n and arr[r] > arr[largest]
        largest = r
    end

    # If largest is not root
    if largest != i
        arr[i], arr[largest] = arr[largest], arr[i]

        # Recursively heapify the affected sub-tree
        heapify(arr, n, largest)
    end
end

# main function to do heap sort
def heap_sort(arr)
    n = arr.length

    # Build heap (rearrange array)
    (n/2 - 1).downto(0) do |i|
        heapify(arr, n, i)
    end

    # One by one extract an element from heap
    (n-1).downto(0) do |i|
        # Move current root to end
        arr[0], arr[i] = arr[i], arr[0]

        # call max heapify on the reduced heap
        heapify(arr, i, 0)
    end
end

# Driver code
arr = [12, 11, 13, 5, 6, 7]
heap_sort(arr)
n = arr.length
puts "Sorted array is"
for i in 0..n-1
    print arr[i], " "
end
puts
```
