# Sequential Search

Sequential/Linear Search is defined as a sequential search algorithm that starts at one end and goes through each element of a list until the desired element is found, otherwise the search continues till the end of the data set. It is the easiest searching algorithm.

## Complexity

| Best | Average | Worst | Worst-case space complexity |
| ---- | ------- | ----- | --------------------------- |
| O(1) | O(n)    | O(n)  | O(1) iterative              |

# Pseudo Code

```
Begin
for i = 0 to (n - 1) by 1 do
if (a[i] = item) then
set loc = i
Exit
endif
endfor
set loc = -1
End
```

## Implementations

- [Python](#python)
- [C++](#cpp)
- [C](#c)
- [Java](#java)
- [JavaScript](#javascript)
- [Go](#go)
- [Ruby](#ruby)

### Python

```python
# Searching an element in a list/array in python
# can be simply done using \'in\' operator
# Example:
# if x in arr:
# print arr.index(x)

# If you want to implement Linear Search in python

# Linearly search x in arr[]
# If x is present then return its location
# else return -1

def search(arr, x):

	for i in range(len(arr)):

		if arr[i] == x:
			return i

	return -1
```

### CPP

```cpp
#include < iostream >
  using namespace std;

void linearSearch(int a[], int n) {
  int temp = -1;

  for (int i = 0; i < 5; i++) {
    if (a[i] == n) {
      cout << "Element found at position: " << i + 1 << endl;
      temp = 0;
      break;
    }
  }

  if (temp == -1) {
    cout << "No Element Found" << endl;
  }

}

int main() {
  int arr[5];
  cout << "Please enter 5 elements of the Array" << endl;
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }
  cout << "Please enter an element to search" << endl;
  int num;
  cin >> num;
   linearSearch(arr, num);

  return 0;
}
```

### C
```c
#include <stdio.h>
int linearSearch(int a[], int n, int val) {
  // Going through array sequencially
  for (int i = 0; i < n; i++)
    {
        if (a[i] == val)
        return i+1;
    }
  return -1;
}
int main() {
  int a[] = {70, 40, 30, 11, 57, 41, 25, 14, 52}; // given array
  int val = 41; // value to be searched
  int n = sizeof(a) / sizeof(a[0]); // size of array
  int res = linearSearch(a, n, val); // Store result
  printf("The elements of the array are - ");
  for (int i = 0; i < n; i++)
  printf("%d ", a[i]);
  printf("\nElement to be searched is - %d", val);
  if (res == -1)
  printf("\nElement is not present in the array");
  else
  printf("\nElement is present at %d position of array", res);
  return 0;
}  
```

### Java
```Java
public class LinearSearchExample{
public static int linearSearch(int[] arr, int key){
        for(int i=0;i<arr.length;i++){
            if(arr[i] == key){
                return i;
            }
        }
        return -1;
    }
    public static void main(String a[]){
        int[] a1= {10,20,30,50,70,90};
        int key = 50;
        System.out.println(key+" is found at index: "+linearSearch(a1, key));
    }
}
```

### JavaScript

```Java Script
function linearSearch(arr, key){
    for(let i = 0; i < arr.length; i++){
        if(arr[i] === key){
            return i
        }
    }
    return -1
}
```

### GO

```GO
package main
import "fmt"

func linearSearch(A []int, n int, x int) {
 for i := 0; i < n; i++ {
  if A[i] == x {
   fmt.Println("Number found at position : ", i+1)
   return
  }
 }

 fmt.Println("Number not found")
 return

}

func main() {
 fmt.Println("Enter the size of the array")
 var n int
 fmt.Scan(&n)

 var x int
 A := make([]int, n, 100)
fmt.Println("Enter elements of the array : ")

 for i := 0; i < n; i++ {
  fmt.Scan(&A[i])
 }

 fmt.Println("Enter the number to be searched")
 fmt.Scan(&x)

 linearSearch(A, n, x)

}
```


### Ruby
```Ruby
# Ruby program to search an item into the array
# using linear search

arr = [12,45,23,39,37];

i    =   0;
item =   0;
flag =   0;

print "Enter item: ";
item = gets.chomp.to_i;  

flag = -1
while(i<arr.size)
    if(arr[i]==item)
        flag = i;
        break;
    end
    i = i + 1;
end

        
if(flag>=0)
    print "Item found at index: ",flag,"\n"; 
else
    print "Item not found\n"; 
end
# Ruby program to search an item into the array 
# using linear search

arr = [12,45,23,39,37];

i    =   0;
item =   0;
flag =   0;

print "Enter item: ";
item = gets.chomp.to_i;  

flag = -1
while(i<arr.size)
    if(arr[i]==item)
        flag = i;
        break;
    end
    i = i + 1;
end

        
if(flag>=0)
    print "Item found at index: ",flag,"\n"; 
else
    print "Item not found\n"; 
end
```
