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