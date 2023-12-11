# [Queue](#queue)
A queue stores a collection of data values in a FIFO (First In, First Out) order. The first element added to the queue will be the first to be processed (removed).\
A queue can only be accessed through its ends, referred as _head_ for its rear and _tail_ for its back.\
The implementation could be an array-like (static and contiguous) or a linked-list-like (dynamic and dis-contiguous).

## [Table of Contents](#table-of-contents)
[Queue](#queue)
- [Table of Contents](#table-of-contents)
- [Common operations on Queue](#common-operations-on-queue)
  - [Enqueue](#enqueue)
    - [Enqueue Example](#enqueue-example)
  - [Dequeue](#dequeue)
    - [Dequeue Example](#dequeue-example)
  - [Peek](#peek)
    - [Peek Example](#peek-example)
  - [Circular Queue](#circular-queue)
    - [Circular Queue Example](#circular-queue-example)
  - [Double Ended Queue](#double-ended-queue)
    - [Double Ended Queue Example](#double-ended-queue-example)

## [Common operations on Queue](#common-operations-on-queue)
### [Enqueue](#enqueue)
Add item to the rear of the queue
#### [Enqueue Example](#enqueue-example)
``
let queue = [4, 1, 0, 2];
queue.enqueue(5);
// queue is now [4, 1, 0, 2, 5]
``
### [Dequeue](#dequeue)
Remove the item from the front of the queue
#### [Dequeue Example](#dequeue-example)

``
let queue = [4, 1, 0, 2];
let head = queue.dequeue();
// head is 4
// queue is now [1, 0, 2]
``
### [Peek](#peek)
Some programming languages provides `peek` method to allow checking the value of the current head without removing the value from the queue.
#### [Peek Example](#peek-example)

``
let queue = [4, 1, 0, 2];
let currentHead = queue.peek();
// currentHead is 4
// queue remains [4, 1, 0, 2]
``

The above shows the implementation of a simple Queue.

There are more types of Queues: 
- Circular Queue
- Double Ended Queue

### [Circular Queue](#circular-queue)

If the last position is full and the first position is empty, we can not insert an element in the first position in a Simple Queue. However this is possible if we use circular Queue, where the last element is connected to the first element forming a circle-like structure.

#### [Circular Queue Example](#circular-queue-example)

##### Dequeue and then enqueue
``
let size = 4
let queue = [4, 1, 0, 2];
let head = queue.dequeue();
// head is 4
// queue is now [ 1, 0, 2]

enqueue(8);
/* queue is now [8, 1, 0, 2]. This operation could not be done in a simple queue since the last position of the queue is still occupied. According to simple Queue the queue is full. */

``

### [Double Ended Queue](#double-ended-queue)

Double Ended Queue or Deque is a type of queue where insertion and deletions can be done from both ends (front and rear).it does not follow FIFO rule (First In First Out).

#### [Double Ended Queue Example](#double-ended-queue-example)

##### Insert from front

``
let queue = [4, 1, 0, 2];
queue.InsertFront(9);
//The queue is now [9, 4, 1, 0, 2]
``
##### Insert from end

``
let queue = [4, 1, 0, 2];
queue.InsertEnd(9);
//The queue is now [4, 1, 0, 2, 9]
``
##### Delete from front

``
let queue = [4, 1, 0, 2];
queue.DeleteFront();
//The queue is now [1, 0, 2]. 4 has been deleted
``
##### Delete from end

``
let queue = [4, 1, 0, 2];
queue.DeleteEnd();
//The queue is now [4, 1, 0]. 2 has been deleted
``

There are 2 types of Deque:

* Input restricted:  
In this Input is restricted to one end only whereas deletion is possible from both ends.

* Output restricted:  
In this Input is deletion from one end only whereas insertion(input) is possible to both ends.

