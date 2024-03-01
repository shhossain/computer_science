# Bucket Sort

Bucket sort is a sorting algorithm that works by distributing the elements of an array into a number of buckets. Each bucket is then sorted individually, either using a different sorting algorithm or by recursively applying the bucket sort algorithm. After all the individual buckets are sorted, the elements are concatenated together to form the sorted array.

## Complexity

| Best | Average | Worst | Memory | Stable |
|------|---------|-------|--------|--------|
| log(n+k)  | log(n+k)     | log(n^2)   | n      | Yes     |

## Pseudo Code

```
BucketSort(arr, n):
    # Find the minimum and maximum values in the array
    min_val = arr[0]
    max_val = arr[0]
    for i from 1 to n-1:
        if arr[i] < min_val:
            min_val = arr[i]
        if arr[i] > max_val:
            max_val = arr[i]
    # Determine the range and the number of buckets
    range = max_val - min_val
    num_buckets = n
    bucket_size = range / num_buckets
    # Create an array of empty buckets
    buckets = array of empty lists, one for each bucket
    # Place each element in the appropriate bucket
    for i from 0 to n-1:
        index = (arr[i] - min_val) / bucket_size
        insert arr[i] into buckets[index]
    # Sort each bucket and concatenate them to get the sorted array
    index = 0
    for i from 0 to num_buckets-1:
        sort(buckets[i])  # You can use any sorting algorithm, e.g., insertion sort
        for each element in buckets[i]:
            arr[index] = element
            index = index + 1
```

## Implementations

* [Python](#python)
* [C++](#cpp)
* [C](#c)
* [Java](#java)
* [JavaScript](#javascript)
* [Go](#go)

### Python

```python
def bucket_sort(arr):
    # Find the minimum and maximum values in the input array
    min_val, max_val = min(arr), max(arr)

    # Determine the range of each bucket
    bucket_range = (max_val - min_val) / len(arr)

    # Create empty buckets
    num_buckets = len(arr)
    buckets = [[] for _ in range(num_buckets)]

    # Place each element in the appropriate bucket
    for num in arr:
        index = int((num - min_val) / bucket_range)
        if index == num_buckets:
            index -= 1  # Adjust for values equal to max_val
        buckets[index].append(num)

    # Sort each bucket and concatenate them to get the sorted array
    sorted_arr = []
    for bucket in buckets:
        sorted_arr.extend(sorted(bucket))

    return sorted_arr

# Example usage:
arr = [3.2, 0.4, 2.8, 4.5, 1.1, 0.9]
sorted_arr = bucket_sort(arr)
print(sorted_arr)
```

### CPP

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<double> bucketSort(std::vector<double> arr) {
    // Find the minimum and maximum values in the input vector
    double minVal = *min_element(arr.begin(), arr.end());
    double maxVal = *max_element(arr.begin(), arr.end());

    // Create empty buckets
    int numBuckets = arr.size();
    double bucketRange = (maxVal - minVal) / numBuckets;
    std::vector<std::vector<double>> buckets(numBuckets);

    // Place each element in the appropriate bucket
    for (double num : arr) {
        int index = static_cast<int>((num - minVal) / bucketRange);
        if (index == numBuckets) {
            index--;  // Adjust for values equal to maxVal
        }
        buckets[index].push_back(num);
    }

    // Sort each bucket and concatenate them to get the sorted vector
    std::vector<double> sortedArr;
    for (auto& bucket : buckets) {
        std::sort(bucket.begin(), bucket.end());
        sortedArr.insert(sortedArr.end(), bucket.begin(), bucket.end());
    }

    return sortedArr;
}

int main() {
    std::vector<double> arr = {3.2, 0.4, 2.8, 4.5, 1.1, 0.9};
    std::vector<double> sortedArr = bucketSort(arr);

    for (double num : sortedArr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

```

### C

```c
#include <stdio.h>
#include <stdlib.h>
// Define a structure for a linked list node
struct Node {
    double data;
    struct Node* next;
};
// Function to insert a value into a bucket (linked list)
void insert(struct Node** bucket, double value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    // Insert the new node at the beginning of the bucket
    if (*bucket == NULL) {
        *bucket = newNode;
    } else {
        newNode->next = *bucket;
        *bucket = newNode;
    }
}
// Function to sort a bucket (linked list)
void sortBucket(struct Node** bucket) {
    if (*bucket == NULL) return;  // Empty bucket
    // Perform an insertion sort on the bucket
    struct Node* sorted = NULL;
    struct Node* current = *bucket;
    while (current != NULL) {
        struct Node* next = current->next;
        // Insert current node into the sorted list
        if (sorted == NULL || current->data <= sorted->data) {
            current->next = sorted;
            sorted = current;
        } else {
            struct Node* search = sorted;
            while (search->next != NULL && search->next->data < current->data) {
                search = search->next;
            }
            current->next = search->next;
            search->next = current;
        }
        current = next;
    }
    *bucket = sorted;
}
// Function to perform bucket sort
void bucketSort(double arr[], int size) {
    // Find the minimum and maximum values in the input array
    double minVal = arr[0];
    double maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    // Determine the range of values and the number of buckets
    double range = maxVal - minVal;
    int numBuckets = size;
    double bucketSize = range / numBuckets;
    // Create an array of linked lists (buckets)
    struct Node* buckets[numBuckets];
    for (int i = 0; i < numBuckets; i++) {
        buckets[i] = NULL;
    }
    // Place each element in the appropriate bucket
    for (int i = 0; i < numBuckets + 1; i++) {
        int index = (int)((arr[i] - minVal) / bucketSize);
        insert(&buckets[index], arr[i]);
    }
    // Sort each bucket and concatenate them to get the sorted array
    int index = 0;
    for (int i = 0; i < numBuckets; i++) {
        sortBucket(&buckets[i]);
        struct Node* current = buckets[i];
        while (current != NULL) {
            arr[index++] = current->data;
            current = current->next;
        }
    }
}
int main() {
    double arr[] = {3.2, 0.4, 2.8, 4.5, 1.1, 0.9};
    int size = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%.1lf ", arr[i]);
    }
    printf("\n");
    return 0;
}
```

### Java

```java
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class BucketSort {
    public static List<Double> bucketSort(List<Double> arr) {
        // Find the minimum and maximum values in the input list
        double minVal = Collections.min(arr);
        double maxVal = Collections.max(arr);

        // Determine the number of buckets based on the range of values
        int numBuckets = arr.size(); // Or choose an appropriate number of buckets
        List<List<Double> > buckets = new ArrayList<>(numBuckets);

        for (int i = 0; i < numBuckets; i++) {
            buckets.add(new ArrayList<>());
        }

        // Place each element in the appropriate bucket
        double bucketRange = (maxVal - minVal) / numBuckets;
        for (Double num : arr) {
            int index = (int) ((num - minVal) / bucketRange);
            if (index == numBuckets) {
                index--;  // Adjust for values equal to maxVal
            }
            buckets.get(index).add(num);
        }

        // Sort each bucket and concatenate them to get the sorted list
        List<Double> sortedArr = new ArrayList<>();
        for (List<Double> bucket : buckets) {
            Collections.sort(bucket);
            sortedArr.addAll(bucket);
        }

        return sortedArr;
    }

    public static void main(String[] args) {
        List<Double> arr = new ArrayList<>(List.of(3.2, 0.4, 2.8, 4.5, 1.1, 0.9));
        List<Double> sortedArr = bucketSort(arr);
        System.out.println(sortedArr);
    }
}

```

### JavaScript

```javascript
function bucketSort(arr) {
    // Find the minimum and maximum values in the array
    let minVal = arr[0];
    let maxVal = arr[0];
    for (let i = 1; i < arr.length; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // Determine the range and the number of buckets
    const range = maxVal - minVal;
    const numBuckets = arr.length;
    const bucketSize = range / numBuckets;

    // Create an array of empty buckets
    const buckets = [];
    for (let i = 0; i < numBuckets; i++) {
        buckets.push([]);
    }

    // Place each element in the appropriate bucket
    for (let i = 0; i < arr.length; i++) {
        let index = Math.floor((arr[i] - minVal) / bucketSize);

        // Ensure that the index is within the valid range of bucket indices
        if (index === numBuckets) {
            index = numBuckets - 1;
        }
        buckets[index].push(arr[i]);
    }

    // Sort each bucket and concatenate them to get the sorted array
    let sortedArr = [];
    for (let i = 0; i < numBuckets; i++) {
        sortBucket(buckets[i]);
        sortedArr = sortedArr.concat(buckets[i]);
    }

    return sortedArr;
}

function sortBucket(bucket) {
    // Use any sorting algorithm for the bucket, e.g., insertion sort
    for (let i = 1; i < bucket.length; i++) {
        const key = bucket[i];
        let j = i - 1;
        while (j >= 0 && bucket[j] > key) {
            bucket[j + 1] = bucket[j];
            j--;
        }
        bucket[j + 1] = key;
    }
}

// Example usage:
const array = [3.2, 0.4, 2.8, 4.5, 1.1, 0.9];
const sortedArray = bucketSort(array);
console.log(sortedArray);

```

### Go

```go
package main

import (
    "fmt"
    "sort"
)

func bucketSort(arr []float64) []float64 {
    if len(arr) == 0 {
        return arr
    }

    // Find the minimum and maximum values in the array
    minVal, maxVal := arr[0], arr[0]
    for _, num := range arr {
        if num < minVal {
            minVal = num
        }
        if num > maxVal {
            maxVal = num
        }
    }

    // Determine the range and the number of buckets
    rangeVal := maxVal - minVal
    numBuckets := len(arr)
    bucketSize := rangeVal / float64(numBuckets)

    // Create an array of empty buckets
    buckets := make([][]float64, numBuckets)
    for i := range buckets {
        buckets[i] = make([]float64, 0)
    }

    // Place each element in the appropriate bucket
    for _, num := range arr {
        index := int((num - minVal) / bucketSize)

        // Ensure that the index remains within a valid range
        if index == numBuckets {
            index--
        }
        buckets[index] = append(buckets[index], num)
    }

    // Sort each bucket and concatenate them to get the sorted array
    sortedArr := make([]float64, 0, len(arr))
    for _, bucket := range buckets {
        sort.Float64s(bucket)
        sortedArr = append(sortedArr, bucket...)
    }

    return sortedArr
}

func main() {
    arr := []float64{3.2, 0.4, 2.8, 4.5, 1.1, 0.9}
    sortedArr := bucketSort(arr)
    fmt.Println(sortedArr)
}

```
