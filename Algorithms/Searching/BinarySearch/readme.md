# Binary Search

Binary Search is used when we have sorted Array or numbers in Ascending or descending order
1 2 3 4 5 6 7... 
or 
....7 6 5 4 3 2 1

Binary search is a searching technique to lower the searching space from O(n) to O(log n)


Binary search is used when we have Array or elements arranged in monotonic form


The following is the method to use binary search. 



## Method  (Standard Binary Search) 

```c
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

```c
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
