# Count Sort
Counting sort is a sorting algorithm that sorts the elements of an array by counting the number of occurrences of each unique element in the array. The count is stored in an auxiliary array and the sorting is done by mapping the count as an index of the auxiliary array.

## Complexity
| Best   | Average | Worst  | Memory | Stable |
|--------|---------|--------|--------|--------|
| O(n+k) | O(n+k)  | O(n+k) | O(max) | Yes    |


## Sudo Code
```
procedure countingSort(array, size)
  max <- find largest element in array
  initialize count array with all zeros
  for j <- 0 to size
    find the total count of each unique element and 
    store the count at jth index in count array
  for i <- 1 to max
    find the cumulative sum and store it in count array itself
  for j <- size down to 1
    restore the elements to array
    decrease count of each element restored by 1
end procedure
```


## Implementations
* [Python](#python)
* [C++](#cpp)
* [C](#c)
* [Javascript](#javascript)
* [PHP](#php)
* [Java](#java)

### Python
```python

# Counting sort in Python programming

def countingSort(array):
    size = len(array)
    output = [0] * size

    # Initialize count array
    count = [0] * 10

    # Store the count of each elements in count array
    for i in range(0, size):
        count[array[i]] += 1

    # Store the cummulative count
    for i in range(1, 10):
        count[i] += count[i - 1]

    # Find the index of each element of the original array in count array
    # place the elements in output array
    i = size - 1
    while i >= 0:
        output[count[array[i]] - 1] = array[i]
        count[array[i]] -= 1
        i -= 1

    # Copy the sorted elements into original array
    for i in range(0, size):
        array[i] = output[i]


data = [4, 2, 2, 8, 3, 3, 1]
countingSort(data)
print("Sorted Array in Ascending Order: ")
print(data)
```

### CPP
```cpp

// Counting sort in C++ programming

#include <iostream>
using namespace std;

void countSort(int array[], int size) {
  // The size of count must be at least the (max+1) but
  // we cannot assign declare it as int count(max+1) in C++ as
  // it does not support dynamic memory allocation.
  // So, its size is provided statically.
  int output[10];
  int count[10];
  int max = array[0];

  // Find the largest element of the array
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  // Initialize count array with all zeros.
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  // Store the count of each element
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  // Store the cummulative count of each array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  // Find the index of each element of the original array in count array, and
  // place the elements in output array
  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  // Copy the sorted elements into original array
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int main() {
  int array[] = {4, 2, 2, 8, 3, 3, 1};
  int n = sizeof(array) / sizeof(array[0]);
  countSort(array, n);
  printArray(array, n);
}
```


### C
```c

// Counting sort in C programming
#include <stdio.h>

void countingSort(int array[], int size) {
  int output[10];

  // Find the largest element of the array
  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  // The size of count must be at least (max+1) but
  // we cannot declare it as int count(max+1) in C as
  // it does not support dynamic memory allocation.
  // So, its size is provided statically.
  int count[10];

  // Initialize count array with all zeros.
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  // Store the count of each element
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  // Store the cummulative count of each array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }

  // Find the index of each element of the original array in count array, and
  // place the elements in output array
  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  // Copy the sorted elements into original array
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int array[] = {4, 2, 2, 8, 3, 3, 1};
  int n = sizeof(array) / sizeof(array[0]);
  countingSort(array, n);
  printArray(array, n);
}
```

### Javascript
```js
// Counting sort in Javascript programming
function countingSort(arr) {
    let max = -Infinity;

    //   max <- find largest element in array
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    //   initialize count array with all zeros
    let count = new Array(max + 1).fill(0);

    //   for j <- 0 to size
    //     find the total count of each unique element and
    //     store the count at jth index in count array
    for (let j = 0; j < arr.length; j++) {
        count[arr[j]]++;
    }

    //   for i <- 1 to max
    //     find the cumulative sum and store it in count array itself
    for (let i = 1; i < count.length; i++) {
        count[i] += count[i - 1];
    }

    let output = new Array(arr.length);

    //   for j <- size down to 1
    //     restore the elements to array
    //     decrease count of each element restored by 1
    for (let j = arr.length - 1; j >= 0; j--) {
        output[count[arr[j]] - 1] = arr[j];
        count[arr[j]]--;
    }

    return output;
}

console.log(countingSort([6,4,5,1,2,3,9,8,7])); // [1,2,3,4,5,6,7,8,9]
```


### PHP
```php
// Counting sort in Javascript programming
function countingSort($arr) {
  
  $count = array();
  foreach ($arr as $v) {
    $count[$v] = isset($count[$v]) ? $count[$v] + 1 : 1;
  }
  $sorted = array();
  $min = min($arr);
  $max = max($arr);
  for ($i=$min; $i<=$max; $i++) {
    if (isset($count[$i])) {
      for ($j=0; $j<$count[$i]; $j++) {
        $sorted[] = $i;
      }
	}
  }
  return $sorted;
}
$arr = array(6,4,5,1,2,3,9,8,7);
var_dump(countingSort($arr));
```

### Java

```java
import java.util.Arrays; 
class CountingSort {
    int[] countingSort(int a[]){
      // Find the largest element of the array
        int max = a[0];
        for(int i =0 ; i<a.length ; i++){
            if(a[i]>max){
                max = a[i];
            }
        }

        //   initialize count array with all zeros
        int countArray[] = new int[max + 1];
        Arrays.fill(countArray,0);
        
        // Store the count of each element
         for (int i = 0; i < a.length; i++)
        {  
             countArray[a[i]]++;  
        }  
        
        // Store the cummulative count of each array
         for(int i = 1; i<countArray.length; i++)   
            countArray[i] += countArray[i-1];

        int outputArray[] = new int[a.length];

        // Find the index of each element of the original array in count array, and
        // place the elements in output array
        for(int j = a.length -1 ; j>=0;j--){
            outputArray[countArray[a[j]] - 1] = a[j];
            countArray[a[j]]--;
        }
        
        // returining output array
        return outputArray;
    }
   
    public static void main(String[] args) {
        CountingSort obj = new CountingSort(); 
        int a[] = { 3,4,6,2,7,8,9,1,1,1,0 ,10 }; 
        
        //priniting sorted array
        System.out.println("Sorted array:" + Arrays.toString(obj.countingSort(a)) );
    
    }
}
```

