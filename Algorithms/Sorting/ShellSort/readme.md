# Shell Sort
Shell sort is mainly a variation of Insertion Sort. In insertion sort, we move elements only one position ahead. When an element has to be moved far ahead, many movements are involved. The idea of ShellSort is to allow the exchange of far items. In Shell sort, we make the array h-sorted for a large value of h. We keep reducing the value of h until it becomes 1. An array is said to be h-sorted if all sublists of every h’th element are sorted.

## Complexity
| Best         | Average | Worst | Memory | Stable |
|-------------|----------|-------|--------|--------|
| Ω(n log(n)) |θ(nlog(n)2)|O(n2)|1| No    |

## Sudo Code
```Caculate gap size ($gap)
 
    WHILE $gap is greater than 0
 
        FOR each element of the list, that is $gap apart
 
            Extract the current item
 
            Locate the position to insert
 
            Insert the item to the position
 
        END FOR
 
        Calculate gap size ($gap)
 
    END WHILE

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
# Python3 program for implementation of Shell Sort
# Python3 program for implementation of Shell Sort

def shellSort(arr, n):
	# code here
	gap=n//2
	
	
	while gap>0:
		j=gap
		# Check the array in from left to right
		# Till the last possible index of j
		while j<n:
			i=j-gap # This will keep help in maintain gap value
			
			while i>=0:
				# If value on right side is already greater than left side value
				# We don't do swap else we swap
				if arr[i+gap]>arr[i]:

					break
				else:
					arr[i+gap],arr[i]=arr[i],arr[i+gap]

				i=i-gap # To check left side also
							# If the element present is greater than current element
			j+=1
		gap=gap//2





# driver to check the code
arr2 = [12, 34, 54, 2, 3]
print("input array:",arr2)

shellSort(arr2,len(arr2))
print("sorted array",arr2)
```

### CPP
```cpp
// C++ implementation of Shell Sort
#include <iostream>
using namespace std;

/* function to sort arr using shellSort */
int shellSort(int arr[], int n)
{
	// Start with a big gap, then reduce the gap
	for (int gap = n/2; gap > 0; gap /= 2)
	{
		// Do a gapped insertion sort for this gap size.
		// The first gap elements a[0..gap-1] are already in gapped order
		// keep adding one more element until the entire array is
		// gap sorted
		for (int i = gap; i < n; i += 1)
		{
			// add a[i] to the elements that have been gap sorted
			// save a[i] in temp and make a hole at position i
			int temp = arr[i];

			// shift earlier gap-sorted elements up until the correct
			// location for a[i] is found
			int j;			
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];
			
			// put temp (the original a[i]) in its correct location
			arr[j] = temp;
		}
	}
	return 0;
}

void printArray(int arr[], int n)
{
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = {12, 34, 54, 2, 3}, i;
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Array before sorting: \n";
	printArray(arr, n);

	shellSort(arr, n);

	cout << "\nArray after sorting: \n";
	printArray(arr, n);

	return 0;
}

```

### Java
```java
// Java implementation of ShellSort
class ShellSort
{
	/* An utility function to print array of size n*/
	static void printArray(int arr[])
	{
		int n = arr.length;
		for (int i=0; i<n; ++i)
			System.out.print(arr[i] + " ");
		System.out.println();
	}

	/* function to sort arr using shellSort */
	int sort(int arr[])
	{
		int n = arr.length;

		// Start with a big gap, then reduce the gap
		for (int gap = n/2; gap > 0; gap /= 2)
		{
			// Do a gapped insertion sort for this gap size.
			// The first gap elements a[0..gap-1] are already
			// in gapped order keep adding one more element
			// until the entire array is gap sorted
			for (int i = gap; i < n; i += 1)
			{
				// add a[i] to the elements that have been gap
				// sorted save a[i] in temp and make a hole at
				// position i
				int temp = arr[i];

				// shift earlier gap-sorted elements up until
				// the correct location for a[i] is found
				int j;
				for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
					arr[j] = arr[j - gap];

				// put temp (the original a[i]) in its correct
				// location
				arr[j] = temp;
			}
		}
		return 0;
	}

	// Driver method
	public static void main(String args[])
	{
		int arr[] = {12, 34, 54, 2, 3};
		System.out.println("Array before sorting");
		printArray(arr);

		ShellSort ob = new ShellSort();
		ob.sort(arr);

		System.out.println("Array after sorting");
		printArray(arr);
	}
}

```



### JavaScript
```javascript
// JavaScript implementation of ShellSort

/* function to sort arr using shellSort */
function sort(arr) {
	let n = arr.length

	// Start with a big gap, then reduce the gap
	for (let gap = Math.floor(n / 2); gap > 0; gap = Math.floor(gap / 2)) {
		// Do a gapped insertion sort for this gap size.
		// The first gap elements a[0..gap-1] are already
		// in gapped order keep adding one more element
		// until the entire array is gap sorted
		for (let i = gap; i < n; i += 1) {
			// add a[i] to the elements that have been gap
			// sorted save a[i] in temp and make a hole at
			// position i
			let temp = arr[i]

			// shift earlier gap-sorted elements up until
			// the correct location for a[i] is found
			let j
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap]

			// put temp (the original a[i]) in its correct
			// location
			arr[j] = temp
		}
	}
	return 0
}

const arr = [12, 11, 13, 5, 6, 7]
sort(arr)
console.log(arr)

```

### Go
```go
// Go program for implementation of Shell Sort
package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {

	slice := generateSlice(20)
	fmt.Println("\n--- Unsorted --- \n\n", slice)
	shellsort(slice)
	fmt.Println("\n--- Sorted ---\n\n", slice, "\n")
}

// Generates a slice of size, size filled with random numbers
func generateSlice(size int) []int {

	slice := make([]int, size, size)
	rand.Seed(time.Now().UnixNano())
	for i := 0; i < size; i++ {
		slice[i] = rand.Intn(999) - rand.Intn(999)
	}
	return slice
}
 
func shellsort(items []int) {
    var (
        n = len(items)
        gaps = []int{1}
        k = 1
     
    )
     
    for {
        gap := element(2, k) + 1
        if gap > n-1 {
            break
        }
        gaps = append([]int{gap}, gaps...)
        k++
    }
     
    for _, gap := range gaps {
        for i := gap; i < n; i += gap {
            j := i
            for j > 0 {
                if items[j-gap] > items[j] {
                    items[j-gap], items[j] = items[j], items[j-gap]
                }
                j = j - gap
            }
        }
    }
}
 
func element(a, b int) int {
    e := 1
    for b > 0 {
        if b&1 != 0 {
            e *= a
        }
        b >>= 1
        a *= a
    }
    return e
}
```

### Ruby
```ruby implementation

# Ruby program for implementation of Shell Sort

class ShellSorter

  def self.sort(a = [3, 1, 2])
    numComp = 0
    len = a.length
    k = len/2
    while(k > 0.0)
      # Increment = k. We sort all k-sequences (sequences of elements
      # k-apart) using insertion sort over all k-sequences concurrently.
      for i in k..len-1 do
        t = a[i]
        j = i
        while( (j >= k) && (a[j-k] > t) ) do
          numComp += 1
          a[j] = a[j-k]
          j -= k
        end
        ++numComp
        a[j] = t;
      end
      k = (k/(k == 2 ? 2 : 2.2)).floor # "divide by 2.2" increment sequence
    end
    return numComp
  end

  def self.randomArray(len = 10)
    a = []
    if(len<0) then len = 0 end
    for i in 0..len-1 do
      a[i] = (rand*len).floor
    end
    return a;
  end

  def self.test(len = 10, show = false)
    a = randomArray(len)
    if(show) then puts "  In: " + a.join(" ") end
    c = sort(a)
    if(show) 
      puts " Out: " + a.join(" ") 
      puts "comp: #{c}"
    end
  end

end

if __FILE__ == $0
  ShellSorter.test(20, true)
end
```
