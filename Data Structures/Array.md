# Array

* An array is a collection of items of same data type stored at contiguous memory locations.

* This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array). The base value is index 0 and the difference between the two indexes is the offset.

## Example

```javascript
let array = [4,3,8,1,0,14,6];
```

| Memory Location | Value |
|-----------------|-------|
| 1000             | 4     |
| 1001             | 3     |
| 1002             | 8     |
| 1003             | 1     |
| 1004             | 0     |
| 1005             | 14    |
| 1006             | 6     |

Accessing an element in an array is done by indexing into it.

```javascript
array[0] // 4 (index 0 is the first element) (1000)
array[1] // 3 (index 1 is the second element) (1001)
array[2] // 8 (index 2 is the third element) (1002)
array[3] // 1 (index 3 is the fourth element) (1003)
array[4] // 0 (index 4 is the fifth element) (1004)
array[5] // 14 (index 5 is the sixth element) (1005)
array[6] // 6 (index 6 is the seventh element) (1006)
```

<p align="center">
  <img src="images/Array.png?raw=true" alt="Array Image"/>
</p>

## Initiation of Array

* To initiate of Arrays it is necessary to specify size of an Array:

In C++:
for example to initate an array of 5 elements:

 ```c++
<datatype> arr_name[size]
int arr[5];
```

this will initialise an array with 0 elements.
  
## Time complexities of some basic array operations

| Operation | Time Complexity |
|-----------------|-------|
| Accessing an element             | O(1)     |
| Searching an element           | O(N)     |
| Inserting an element             | O(N)     |
| Deleting an element             | O(N)     |

* Inserting an deleting elements take O(n) time complexities because we need to shift the remaining data points either right or left after inserting or deleting them, in order to preserve the memory indexing.

## Algorithms on Arrays

### Searching

### 1. Linear Search

Algorithm :

1. Iterate the array using the loop.

2. Check whether the given key present in the array i.e. arr[i] == key.

3. If yes,

     print "Element Found".

4. Else

     print "Element Not Found".

### 2. Binary Search

Algorithm :

Binary_Search(a, lower_bound, upper_bound, val)

// 'a' is the given array, 'lower_bound' is the index of the first array element, 'upper_bound' is the index of the last array element, 'val' is the value to search  

Step 1: set beg = lower_bound, end = upper_bound, pos = - 1  

Step 2: repeat steps 3 and 4 while beg <=end  

Step 3: set mid = (beg + end)/2  

Step 4: if a[mid] = val  
set pos = mid  
print pos  
go to step 6  
else if a[mid] > val  
set end = mid - 1  
else  
set beg = mid + 1  
[end of if]  
[end of loop]  

Step 5: if pos = -1  

print "value is not present in the array"  
[end of if]  
Step 6: exit  

## Insertion

It basically means inserting an element inside an array.
There are following types of Insertions in Arrays:

* Insertion at the beginning of an array
* Insertion at the given index of an array
* Insertion at the end of the Array


### Insertion at the beginning of an Array

```C
#include <stdio.h>

void main() {
   int MAX=5;
   int array[MAX] = {2, 3, 4, 5};
   int N = 4;        // number of elements in array
   int i = 0;        // loop variable
   int value = 1;    // new data element to be stored in array

   // print array before insertion
   printf("Printing array before insertion −\n");
   
   for(i = 0; i < N; i++) {
      printf("array[%d] = %d \n", i, array[i]);
   }

   // now shift rest of the elements downwards   
   for(i = N; i >= 0; i--) {
      array[i+1] = array[i];
   }

   // add new element at first position
   array[0] = value;

   // increase N to reflect number of elements
   N++;

   // print to confirm
   printf("Printing array after insertion −\n");
   
   for(i = 0; i < N; i++) {
      printf("array[%d] = %d\n", i, array[i]);
   }
}
```

**Output**

```C
Printing array before insertion −
array[0] = 2
array[1] = 3
array[2] = 4
array[3] = 5
Printing array after insertion −
array[0] = 0
array[1] = 2
array[2] = 3
array[3] = 4
array[4] = 5
```

### Insertion at the Given Index of an Array

```C
#include<stdio.h>

int main()
{
     int size=5;
    int arr[size] = {1, 20, 5, 78, 30};
    int element, pos, i;

    printf("Enter position and element\n");
    scanf("%d%d",&pos,&element);

    if(pos <= size && pos >= 0)
    {
        //shift all the elements from the last index to pos by 1 position to right
        for(i = size; i > pos; i--)
            arr[i] = arr[i-1];

        //insert element at the given position
        arr[pos] = element;

        /*
         * print the new array
         * the new array size will be size+1(actual size+new element)
         * so, use i <= size in for loop
         */
        for(i = 0; i <= size; i++)
            printf("%d ", arr[i]);
    }
    else
        printf("Invalid Position\n");

    return 0;
  }

```

**Output**

```C
Enter position and element
5 
5
1 20 5 78 30 5
```

### Insertion at the end of the Array

```C
#include <stdio.h>
void main()
{
    int position, i, n, value,ch, arr[100];
    printf("C Program to insert element at end of Array\n");
    printf("First enter number of elements you want in Array\n");
    scanf("%d", &n);
    arr[n];
   for(i = 0; i < n; i++)
    {
        printf("Please give value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Let's Insert Element at end \n ");
    printf("Please give a number to insert at end \n");
    scanf("%d", &value);
    arr[n] = value;
    printf("Element %d is inserted at %d index \n",value,n);
    printf("New Array is \n ");
    
    for(i = 0; i < n+1; i++)
    {
       printf("%d \t",arr[i]);
    }
}
```

**Output** <br>

<img src="https://quescol.com/wp-content/uploads/2021/11/image-35.png?ezimgfmt=ng:webp/ngcb1" alt="output">
<br>

## Deletion

* Deletion refers to removing an existing/given element from the array using indexes and re-organizing all elements of an array.

* In the delete operation, the element to be deleted is searched using the **linear search**, and then the delete operation is performed followed by shifting the elements.

### Delete Operation in an Unsorted Array

```C++

#include <iostream>
using namespace std;
 
// To search a key to be deleted
int findElement(int arr[], int n, int key);
 
// Function to delete an element
int deleteElement(int arr[], int n, int key)
{
    // Find position of element to be deleted
    int pos = findElement(arr, n, key);
 
    if (pos == -1) {
        cout << "Element not found";
        return n;
    }
 
    // Deleting element
    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    return n - 1;
}
 
// Function to implement search operation
int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
 
    return -1;
}
 

int main()
{
    int i;
    int arr[] = { 10, 50, 30, 40, 20 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
 
    cout << "Array before deletion\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
     
    n = deleteElement(arr, n, key);
 
    cout << "Array after deletion"<<endl;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}
```
