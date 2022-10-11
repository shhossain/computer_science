# Linear Search

Linear search is a sequential searching algorithm where we start from one end and check every element of the list until the desired element is found. It is the simplest searching algorithm.
[Refer](https://www.programiz.com/dsa/linear-search)for better undeerstanding.

## Complexity
| Best | Worst | Memory |
|------|-------|--------|
|  1   |   n   | 1      |

## Pseudo Code
```
LinearSearch( A : Array of items, Target : item to be searched)
    for each i item in the array:
        if item == target
            return index i     // Returns the index at wich the element is present
    
    else return -1             // Denotes element is not present in that array.

```

## Implementation

* [C++](#cpp)
* [Python](#py)
* [C](#c)
* [Java](#java)
* [Javascript](#js)
* [Go](#go)
* [Ruby](#ruby)

## C++
```cpp

    int linearSearch(vector<int> v , int target){
        
        for(int i = 0; i < v.size(); i++){
            if(v[i] == target){
                return i;
            }
        }

        return -1;
    }

```

## Python
```py

    def linearSearch(Array,target):
        for i in range(0,len(Array)):
            if Array[i] == target:
                return i
        
        return -1

```

## C
```c

    int linearSearch(int array[],int target){

        int size = sizeof(array)/sizeof(int);

        for(int i = 0; i < size; i++){
            if(array[i] == target) {
                return i;
            }
        }

        return -1;
    }

```

## Java
```java

    public static int linearSearch(int array [], int target){
        int size = array.length;

        for(int i = 0; i < size;i++){

            if(array[i] == target){
                return i;
            }
        }

        return -1;
    }

```

## Javascript
```js

    const linearSearch = (list, item) => {
        for (const [i, element] of list.entries()) {
            if (element === item) {
            return i
            }
        }
        return -1
    }

```

## Go
```go

    func linearSearch(array []int, target int){
        size := len(array)

        for i := 0; i < size; i++{
            if array[i] == target {
                return i
            }
        }

        return -1
    }

```

## Ruby
```r

    def linear_search(array, element)
  i = 0
  while i < array.length
      if array[i] == element
        return "#{element} at index #{array.index(element)}"
      end
      i+=1
    end
    return -1
end

```