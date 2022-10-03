## Array
An array is a data structure that stores a collection of data values in contiguous memory locations.

### Example
```
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
```
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


#### Time complexities of some basic array operations

| Operation | Time Complexity |
|-----------------|-------|
| Accessing an element             | O(1)     |
| Searching an element           | O(N)     |
| Inserting an element             | O(N)     |
| Deleting an element             | O(N)     |


### Algorithms on Array

#### Searching :
 
# 1. Linear Search :

Algorithm :


1. Iterate the array using the loop.

2. Check whether the given key present in the array i.e. arr[i] == key.

3. If yes,

     print "Element Found".

4. Else

     print "Element Not Found".
     

# 2. Binary Search

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
