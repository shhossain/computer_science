# Binary Search
Binary search is a 'divide and conquer' algorithm which requires the initial array to be sorted before searching.

It is called binary because it splits the array into two halves as part of the algorithm. Initially, a binary search will look at the item in the middle of the array and compare it to the search terms.

## Complexity
| Best | Average | Worst | Worst-case space complexity |
|------|---------|-------|-----------------------------|
| O(1) |  O(log n)    | O(log n)  |      O(1) iterative         |


# Pseudo Code
```OUTPUT "
Which customer do you want to find?"

INPUT user inputs John Smith
STORE the user's input in the customer_name variable
customer_found = False
(a flag that identifies if the customer is found)

WHILE customer_found = False:
  Find midpoint of list
  IF customer_name = record at midpoint of list THEN
    customer_found = True
  ELSE IF customer comes before the midpoint THEN
    throw away the second half of the list
  ELSE 
    throw away the first part of the list
    OUTPUT customer details
array = [3, 14, 15, 29, 31, 35, 40, 66, 68, 98]
length = list.length                                     
number = input("What number would you like to find?")
lowerBoundry = 0
upperBoundry = length – 1
match = false
while match == false AND lowerBoundry != upperBoundry
  midPoint = round((lowerBoundry + upperBoundry)/2)
  if array[midPoint] == number then
    print("We have found your number!")
    match = true
  elseif array[midPoint] - < number then
    lowerBoundry = midPoint + 1
  else
    upperBoundry = midPoint – 1
  endif
endwhile
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
# Python3 Program for recursive binary search.

# Returns index of x in arr if present, else -1


def binarySearch(arr, l, r, x):

	# Check base case
	if r >= l:

		mid = l + (r - l) // 2

		# If element is present at the middle itself
		if arr[mid] == x:
			return mid

		# If element is smaller than mid, then it
		# can only be present in left subarray
		elif arr[mid] > x:
			return binarySearch(arr, l, mid-1, x)

		# Else the element can only be present
		# in right subarray
		else:
			return binarySearch(arr, mid + 1, r, x)

	else:
		# Element is not present in the array
		return -1


# Driver Code
arr = [2, 3, 4, 10, 40]
x = 10

# Function call
result = binarySearch(arr, 0, len(arr)-1, x)

if result != -1:
	print("Element is present at index % d" % result)
else:
	print("Element is not present in array")

```

### CPP
```cpp// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle
		// itself
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not
	// present in array
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}

}
```

### C
```c
// C program to implement recursive Binary Search
#include <stdio.h>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle
		// itself
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not
	// present in array
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
```

### Java
```Java
// Java implementation of recursive Binary Search
class BinarySearch {
	// Returns index of x if it is present in arr[l..
	// r], else return -1
	int binarySearch(int arr[], int l, int r, int x)
	{
		if (r >= l) {
			int mid = l + (r - l) / 2;

			// If the element is present at the
			// middle itself
			if (arr[mid] == x)
				return mid;

			// If element is smaller than mid, then
			// it can only be present in left subarray
			if (arr[mid] > x)
				return binarySearch(arr, l, mid - 1, x);

			// Else the element can only be present
			// in right subarray
			return binarySearch(arr, mid + 1, r, x);
		}

		// We reach here when element is not present
		// in array
		return -1;
	}

	// Driver method to test above
	public static void main(String args[])
	{
		BinarySearch ob = new BinarySearch();
		int arr[] = { 2, 3, 4, 10, 40 };
		int n = arr.length;
		int x = 10;
		int result = ob.binarySearch(arr, 0, n - 1, x);
		if (result == -1)
			System.out.println("Element not present");
		else
			System.out.println("Element found at index "
							+ result);
	}
}

```

### JavaScript
```Java Script
<script>
// JavaScript program to implement recursive Binary Search

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
function binarySearch(arr, l, r, x){
	if (r >= l) {
		let mid = l + Math.floor((r - l) / 2);

		// If the element is present at the middle
		// itself
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not
	// present in array
	return -1;
}

let arr = [ 2, 3, 4, 10, 40 ];
let x = 10;
let n = arr.length
let result = binarySearch(arr, 0, n - 1, x);
(result == -1) ? document.write( "Element is not present in array") : document.write("Element is present at index " +result);
</script>

```

### GO
```GO
package main
import "fmt"

func binarySearch(needle int, haystack []int) bool {

	low := 0
	high := len(haystack) - 1

	for low <= high{
		median := (low + high) / 2

		if haystack[median] < needle {
			low = median + 1
		}else{
			high = median - 1
		}
	}

	if low == len(haystack) || haystack[low] != needle {
		return false
	}

	return true
}


func main(){
	items := []int{1,2, 9, 20, 31, 45, 63, 70, 100}
	fmt.Println(binarySearch(63, items))
}
```


### Ruby
```Ruby
# Ruby program to search an item into the array 
# using Binary search
def binary_search(n, arr)
  middle = arr[arr.length / 2]
  i = 0
  j = arr.length - 1

  while i < j
    if middle == n
      return true
    elsif middle < n
      i = middle
      middle = i + j / 2
    else
      p "Middle is greater than n"
      j = middle
      p "j: #{j}"
      middle = i + j / 2
      p "middle: #{middle}"
    end
  end
  false
end 
```
Binary Search is used when we have sorted Array or numbers in Ascending or descending order
1 2 3 4 5 6 7... 
or 
....7 6 5 4 3 2 1

Binary search is a searching technique to lower the searching space from O(n) to O(log n)


Binary search is used when we have Array or elements arranged in monotonic form


The following is the method to use binary search. 



## Method  (Standard Binary Search) 

```java
//Binary search in Ascending order array
int binarySearch(int arr, int target){


    
    //int arr[] = {1,2,3,4,5,6,7,8,9,10}, target ==9
    
    int start=0, end=arr.length-1;//start and end pointers
    
    while(start<=end){
        int mid = start + (end-start)/2;//mid of the array

        if(arr[mid]>target){
            end = mid-1;              //reducing our search space to left of array
        }else if(arr[mid]<target){
            start = mid+1;            //reducing our search space to right of array
        }else{
            return mid;  //we found the target index
        }
    }
    
    return -1;          //we couldn't find the element
}
 
```

**Output:**

```
8
```

***Time Complexity: Log n***, 

```
                     Target 9

             1  2  3  4  5  6  7  8  9  10                      
start =0                                        end = 10

            1  2  3  4  5  6  7  8  9  10                       
start =0             mid=5 |                    end = 10

                     7  8  9  10                                
start =6            mid=8  |                    end = 10

            target found at index 8 
```

## Method 2 (Rotated Binary Search) 


```java
//Binary search in Rotated Array
//Finding peak element in an array
int binarySearch(int arr){


    //int arr[] = {5,6,7,8,9,10,1,2,3,4}, peak == 10

    int start=0, end=arr.length-1;//start and end pointers

        while(start<end){
            int mid = start + (end-start)/2 ;//mid of the array

            if(arr[mid]>arr[mid+1]){
                // you are in descending part of the array
               //this may be the answer but we need to look at the left part
                end = mid;
            }else{
                // you are in ascending part of n array
                start = mid +1;
            }
        }    
        // in the end start will be equal to end and pointing to largest element
        return start;
}
 
```

**Output:**

```
5
```

***Time Complexity: Log n***, 

```
                     Peak 10

            5  6  7  8  9  10  1  2  3  4                      
start =0                                        end = 10

            5  6  7  8  9  10  1  2  3  4                       
start =0             mid=5 |                    end = 10
                is(arr[mid]>arr[mid+1])

            peak index found at index 5

```


# Binary Search in 2-D Matrix

When the given two dimensional matrix have numbers sorted in every row and first value
of every row is lesser/greater than first value next row.

Example:

 
|   |   |   |   |   |
|---|---|---|---|---|
| 1 | 3 | 5 | 7 | 9 |
| 2 |4  |8  |10 |12 |
| 6 |14 |16 |18 |20 |




***Time Complexity : O(log(n))***,

***Space Complexity : O(1)***


## Method 


``` java 

// Binary Search in a sorted 2-D Array

int binarySearch2D(int arr,int k){

    //int arr[][] = {{1, 3, 5, 7},{2, 4, 8, 10}, {6, 14, 16, 18}}; target=6
    int n = arr.length, m = arr[0].length;
    int l = 0, h = ( n * m ) - 1;
    
    while (l<=h){
        int mi = l + (l + h ) / 2; // calculating the mid Value
        
        if (arr[mi / m] [mi % m]==k){
            return k
        }

        else if ( arr[mi / m][mi % m]<k){
            l= mi + 1;
        }
        else{
            h = mi - 1;
        }

    }
    return -1;
}

```


```
Output 

6

```

