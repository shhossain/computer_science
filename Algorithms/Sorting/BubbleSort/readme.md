# Bubble Sort
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

## Complexity
| Best | Average | Worst | Memory | Stable |
|------|---------|-------|--------|--------|
| n    | n^2     | n^2   | 1      | Yes    |

## Sudo Code
```
procedure bubbleSort( A : list of sortable items )
    n = length(A)
    repeat
        swapped = false
        for i = 1 to n-1 inclusive do
            /* if this pair is out of order */
            if A[i-1] > A[i] then
                /* swap them and remember something changed */
                swap( A[i-1], A[i] )
                swapped = true
            end if
        end for
    until not swapped
end procedure

procedure bubbleSortDesc( A : list of sortable items )
    n = length(A)
    repeat
        swapped = false
        for i = 1 to n-1 inclusive do
            /* if this pair is out of order */
            if A[i-1] < A[i] then
                /* swap them and remember something changed */
                swap( A[i-1], A[i] )
                swapped = true
            end if
        end for
    until not swapped
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
* [PHP](#php)

### Python
```python
def bubbleSort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1] :
                arr[j], arr[j+1] = arr[j+1], arr[j]

def bubbleSortDesc(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] < arr[j+1] :
                arr[j], arr[j+1] = arr[j+1], arr[j]

arr = [64, 34, 25, 12, 22, 11, 90]
bubbleSort(arr)
print ("Sorted array is:")
print(arr)

arr = [64, 34, 25, 12, 22, 11, 90]
bubbleSortDesc(arr)
print ("Sorted array is:")
print(arr)
```

### CPP
```cpp
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

void bubbleSortDesc(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] < arr[j+1])
                swap(arr[j], arr[j+1]);
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout<<"Sorted array: \n";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    bubbleSortDesc(arr, n);
    cout<<"Sorted array: \n";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
```

### C
```c
#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

void bubbleSortDesc(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    bubbleSortDesc(arr, n);
    printf("Sorted array: \n");
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
```

### Java
```java

import java.util.Arrays;

public class BubbleSort {

    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        int temp = 0;
        for(int i=0; i < n; i++){
            for(int j=1; j < (n-i); j++){
                if(arr[j-1] > arr[j]){
                    //swap elements
                    temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    public static void bubbleSortDesc(int[] arr) {
        int n = arr.length;
        int temp = 0;
        for(int i=0; i < n; i++){
            for(int j=1; j < (n-i); j++){
                if(arr[j-1] < arr[j]){
                    //swap elements
                    temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int arr[] ={3,60,35,2,45,320,5};

        System.out.println("Array Before Bubble Sort");
        System.out.println(Arrays.toString(arr));

        bubbleSort(arr);//sorting array elements using bubble sort

        System.out.println("Array After Bubble Sort");
        System.out.println(Arrays.toString(arr));

        bubbleSortDesc(arr);//sorting array elements using bubble sort

        System.out.println("Array After Bubble Sort");
        System.out.println(Arrays.toString(arr));
    }
}
```

### JavaScript
```js
function bubbleSort(arr) {
    var len = arr.length;
    for (var i = len-1; i>=0; i--){
        for(var j = 1; j<=i; j++){
            if(arr[j-1]>arr[j]){
                var temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

function bubbleSortDesc(arr) {
    var len = arr.length;
    for (var i = len-1; i>=0; i--){
        for(var j = 1; j<=i; j++){
            if(arr[j-1]<arr[j]){
                var temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

var arr = [64, 34, 25, 12, 22, 11, 90];
console.log(bubbleSort(arr));
console.log(bubbleSortDesc(arr));
```

### Go
```go
package main

import "fmt"

func bubbleSort(arr []int) []int {
    n := len(arr)
    for i := 0; i < n; i++ {
        for j := 0; j < n-i-1; j++ {
            if arr[j] > arr[j+1] {
                arr[j], arr[j+1] = arr[j+1], arr[j]
            }
        }
    }
    return arr
}

func bubbleSortDesc(arr []int) []int {
    n := len(arr)
    for i := 0; i < n; i++ {
        for j := 0; j < n-i-1; j++ {
            if arr[j] < arr[j+1] {
                arr[j], arr[j+1] = arr[j+1], arr[j]
            }
        }
    }
    return arr
}

func main() {
    arr := []int{64, 34, 25, 12, 22, 11, 90}
    fmt.Println(bubbleSort(arr))
    fmt.Println(bubbleSortDesc(arr))
}
```

### Ruby
```ruby
def bubble_sort(arr)
  n = arr.length
  loop do
    swapped = false
    (n-1).times do |i|
      if arr[i] > arr[i+1]
        arr[i], arr[i+1] = arr[i+1], arr[i]
        swapped = true
      end
    end
    break if not swapped
  end
  arr
end

def bubble_sort_desc(arr)
  n = arr.length
  loop do
    swapped = false
    (n-1).times do |i|
      if arr[i] < arr[i+1]
        arr[i], arr[i+1] = arr[i+1], arr[i]
        swapped = true
      end
    end
    break if not swapped
  end
  arr
end

arr = [64, 34, 25, 12, 22, 11, 90]
p bubble_sort(arr)
p bubble_sort_desc(arr)
```


### PHP
```php

function bubbleSort($arr){
	$len = count($arr);
	for($i = $len-1; $i>=0; $i--){
		for($j = 1; $j<=$i; $j++){
			if($arr[$j-1]>$arr[$j]){
				$temp = $arr[$j-1];
				$arr[$j-1] = $arr[$j];
				$arr[$j] = $temp;
			}
		}
	}
	return $arr;
}

function bubbleSortDesc($arr){
	$len = count($arr);
	for($i = $len-1; $i>=0; $i--){
		for($j = 1; $j<=$i; $j++){
			if($arr[$j-1]<$arr[$j]){
				$temp = $arr[$j-1];
				$arr[$j-1] = $arr[$j];
				$arr[$j] = $temp;
			}
		}
	}
	return $arr;
}


$arr = [64, 34, 25, 12, 22, 11, 90];
var_dump(bubbleSort($arr));
var_dump(bubbleSortDesc($arr));
```
