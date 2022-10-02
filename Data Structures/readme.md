# Data Structures
In computer science, a data structure is a data organization, management, and storage format that enables efficient access and modification. More precisely, a data structure is a collection of data values, the relationships among them, and the functions or operations that can be applied to the data.

## Types of Data Structures
- [Array](Array.md)
- [Linked List](LinkedList.md)
- [Stack](Stack.md)
- [Queue](Queue.md)
- [Hash Table](HashTable.md)
- [Heap](#heap)
- [Tree](#tree)
- [Graph](#graph)

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

#### Time complexities of some basic array operations

| Operation | Time Complexity |
|-----------------|-------|
| Accessing an element             | O(1)     |
| Searching an element           | O(N)     |
| Inserting an element             | O(N)     |
| Deleting an element             | O(N)     |

[More on Array](Array.md)


## LinkedList
A linked list is a data structure that consists of a group of nodes where each node contains a data value and a reference (or link) to the next node in the list.

### Example
```
let list = [4,3,1,0,14,6];
```

| Memory Location | Value |
|-----------------|-------|
| 1000             | 4     |
| 1001             | 1008  |
| 1002             | 1     |
| 1003             | 1004  |
| 1004             | 0     |
| 1005             | 1006  |
| 1006             | 14    |
| 1007             | 1010  |
| 1008             | 3     |
| 1009             | 1002  |
| 1010             | 6     |
| 1011             | 1000  |

Accessing an element in a linked list is done by traversing the list and finding the element at the correct index.
```
index 0 value is 4 with memory location 1000 and pointer to next node 1008
index 1 value is 3 with memory location 1008 and pointer to next node 1002
index 2 value is 1 with memory location 1002 and pointer to next node 1004
index 3 value is 0 with memory location 1004 and pointer to next node 1006
index 4 value is 14 with memory location 1006 and pointer to next node 1010
index 5 value is 6 with memory location 1010 and pointer to first node 1000
```

#### Time complexities of some basic Linked List operations

| Operation | Time Complexity |
|-----------------|-------|
| Accesing an element             | O(N)     |
| Searching an element           | O(N)     |
| Inserting an element             | O(1)     |
| Deleting an element             | O(1)     |


[More on Linked List](LinkedList.md)


## Stack
A stack is a data structure that stores a collection of data values in a LIFO (last in, first out) order.\
A stack operations can only occur through one of its end, referred as the _top_ of the stack.\
The implementation could be an array-like (static and contiguous) or a linked-list-like (dynamic and dis-contiguous).
### Stack's Common Operations
#### Push
Add item to the top of the stack.
##### Example
```
let stack = [4, 1, 0, 2];
stack.push(5);
// stack is now [5, 4, 1, 0, 2]
```
#### Pop
Remove item from the top of the stack.
##### Example
```
let stack = [4, 1, 0, 2];
let top = stack.pop();
// top is 4
// stack is now [1, 0, 2]
```
#### Peek
Some programming languages provides `peek` method to allow checking the value of the current top without removing the value from the stack.
##### Example
```
let stack = [4, 1, 0, 2];
let currentHead = stack.peek();
// currentHead is 4
// stack remains [4, 1, 0, 2]
```

## Queue
A queue stores a collection of data values in a FIFO (First In, First Out) order. The first element added to the queue will be the first to be processed (removed).\
A queue can only be accessed through its ends, referred as _head_ for its rear and _tail_ for its back.\
The implementation could be an array-like (static and contiguous) or a linked-list-like (dynamic and dis-contiguous).
### Queue's Common Operations
#### Enqueue
Add item to the rear of the queue
##### Example
```
let queue = [4, 1, 0, 2];
queue.enqueue(5);
// queue is now [4, 1, 0, 2, 5]
```
#### Dequeue
Remove the item from the front of the queue
##### Example

```
let queue = [4, 1, 0, 2];
let head = queue.dequeue();
// head is 4
// queue is now [1, 0, 2]
```
#### Peek
Some programming languages provides `peek` method to allow checking the value of the current head without removing the value from the queue.
##### Example

```
let queue = [4, 1, 0, 2];
let currentHead = queue.peek();
// currentHead is 4
// queue remains [4, 1, 0, 2]
```

## Hash Table

Hash Table is a data structure which stores data in an associative manner. In a hash table, data is stored in an array format, where each data value has its own unique index value. Access of data becomes very fast if we know the index of the desired data.

### Example 

```
Let hash function H(x) = [11,12,13,14,15]
// it will be stored at positions {1,2,3,4,5}
// in the array or Hash table respectively.
```