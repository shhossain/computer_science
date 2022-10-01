# Data Structures
In computer science, a data structure is a data organization, management, and storage format that enables efficient access and modification. More precisely, a data structure is a collection of data values, the relationships among them, and the functions or operations that can be applied to the data.

## Types of Data Structures
- [Array](https://github.com/AnjumanHasan/computer_science/blob/main/BlobAccess/Array.md)
- [Linked List](https://github.com/AnjumanHasan/computer_science/blob/main/BlobAccess/LinkedList.md)
- [Stack](#stack)
- [Queue](#queue)
- [Hash Table](#hashtable)
- [Heap](#heap)
- [Tree](#tree)
- [Graph](#graph)



## Stack
A stack is a data structure that stores a collection of data values in a LIFO (last in, first out) order.

## Queue
A queue stores a collection of data values in a FIFO (First In, First Out) order. The first element added to the queue will be the first to be processed (removed).\
The implementation could use be an array-like (static and contiguous) or a linked-list-like (dynamic and dis-contiguous).
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

#### Hash Table

Hash Table is a data structure which stores data in an associative manner. In a hash table, data is stored in an array format, where each data value has its own unique index value. Access of data becomes very fast if we know the index of the desired data.

##### Example 

```
Let hash function H(x) = [11,12,13,14,15]
// it will be stored at positions {1,2,3,4,5}
// in the array or Hash table respectively.

```
