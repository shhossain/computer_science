# Binary Search

Binary Search is used when we have sorted Array or numbers in Ascending or descending order
1 2 3 4 5 6 7... 
or 
....7 6 5 4 3 2 1

Binary search is a searching technique to lower the searching space from O(n) to O(log n)


Binary search is used when we have Array or elements arranged in monotonic form


The following are different methods to use binary search. 



## Method 1 (Standard Binary Search) 
A simple method that is a direct recursive implementation mathematical recurrence relation is given above.

```JAVA
//Binary search in Ascending order array
int binarySearch(int[] arr, int target){
        //int arr[] = {1,2,3,4,5,6,7,8,9,10}, target ==6
    int start=0, end=arr.length-1;//start and end pointers
    while(start<=end){
        int mid = start + (end-start)/2 //mid of the array

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
5
```

***Time Complexity: Log n***, 

```
                     Target 9

             1  2  3  4  5  6  7  8  9  10                      
start =0                                        end = 10

            1  2  3  4  5  6  7  8  9  10                       
start =0             mid=5 |                    end = 10

                     7  8  9  10                                
start =0            mid=8  |                    end = 10

            target found at index 8 
```
