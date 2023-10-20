# Stack
A stack is a fundamental data structure that stores a collection of data values in a Last-In, First-Out (LIFO) order. Stacks are often used in computer science and programming for various applications, including managing function calls, tracking state, and parsing expressions.

## Stack Implementations
Stacks can be implemented using different underlying data structures. The two most common implementations are:

1. Array-like (Static and Contiguous)
In this implementation, a stack is represented as an array with a fixed size. The elements are stored in contiguous memory locations. As elements are pushed and popped from the stack, the array's size remains constant.

2. Linked-list-like (Dynamic and Dis-contiguous)
In this implementation, a stack is represented using a linked list. Each element of the stack is a node that points to the previous element. This dynamic structure allows for a variable number of elements, making it more memory-efficient but less cache-friendly than the array-like implementation.

## Stack's Common Operations
Stacks support three primary operations:

1. Push
The push operation adds an item to the top of the stack. It increments the stack size and stores the item at 
the newly created top position.

Example:

```
let stack = [4, 1, 0, 2];
stack.push(5);
// stack is now [5, 4, 1, 0, 2]
```
2. Pop
The pop operation removes the item from the top of the stack. It decrements the stack size and returns the removed item.

Example:

```
let stack = [4, 1, 0, 2];
let top = stack.pop();
// top is 4
// stack is now [1, 0, 2]
```
3. Peek
Some programming languages provide a peek method to allow checking the value of the current top without removing the value from the stack.

Example:

```
let stack = [4, 1, 0, 2];
let currentHead = stack.peek();
// current head is 4
// stack remains [4, 1, 0, 2]
```
## Common Use Cases
- Function Call Stack: Stacks are used to keep track of function calls and their local variables. When a function is called, a new frame is pushed onto the stack, and when the function returns, its frame is popped.

- Expression Evaluation: Stacks are helpful in evaluating expressions, such as arithmetic expressions or parsing expressions in programming languages.

- Undo/Redo Functionality: Stacks can be used to implement undo and redo functionality in applications by maintaining a history of states or actions.

- Backtracking Algorithms: Stacks are utilized in backtracking algorithms to explore various paths and return to previous states when necessary.

- Memory Management: Stacks are used in computer memory management to keep track of allocated and deallocated memory blocks.

Stacks are a simple yet versatile data structure with various practical applications in computer science and software development. They provide an efficient way to manage data in a last-in, first-out manner.
