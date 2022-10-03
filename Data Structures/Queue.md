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
#### isEmpty
It is used to return whether the queue is empty or not.It does not take any parameters.
##### Example

```
let queue = [4, 1, 0, 2];
Input :  myqueue = 1, 2, 3
         myqueue.empty();
Output : False
```

#### isFull
Checks if the queue is full.It does not take any parameters.
##### Example

```
let queue = [4, 1, 0, 2];
//max size of queue is 4
Input :  myqueue = 1, 2, 3
         myqueue.full();
Output : True
```

