# Priority Queue

A priority queue is a data structure that allows you to store elements with associated priorities and provides efficient access to the element with the highest priority. Priority queues are often used in scenarios where elements must be processed in order of their priority, such as scheduling tasks in operating systems or finding the shortest path in graph algorithms.

### Example 
![](https://cdn.programiz.com/sites/tutorial2program/files/Introduction.png)

In this figure

The element with the highest value is considered the highest priority element. However, in other cases, we can assume the element with the lowest value as the highest priority element.

We can also set priorities according to our needs.


## Key Characteristics

- **Priority:** Each element in the priority queue has an associated priority value.
- **Ordering:** Elements are organized in the queue based on their priority, with the element of highest priority at the front.
- **Operations:** Common operations on a priority queue include insertion, deletion (removing the highest priority element), and peek (viewing the highest priority element).


## Example Use Cases

1. **Task Scheduling:** In an operating system, processes with higher priority are scheduled to run before processes with lower priority.
2. **Dijkstra's Algorithm:** Finding the shortest path in a weighted graph using a priority queue to explore nodes with the least path cost first.
3. **Huffman Coding:** Building efficient variable-length codes for data compression based on the frequency of characters.


## Implementation

Priority queues can be implemented using various data structures, such as:

1. **Binary Heap:** A common choice for implementing priority queues due to its efficient insertion and deletion operations.
2. **Fibonacci Heap:** Offers amortized constant time for most operations, making it suitable for certain algorithms.
3. **Pairing Heap:** A type of self-balancing heap with good performance characteristics for various operations.
4. **Standard Library (STL) Priority Queue:** Many programming languages, including C++ and Python, provide built-in priority queue data structures.


## Operations

A priority queue typically supports the following operations:

### 1. Insertion
   - **Description:** Add an element to the priority queue with an associated priority.
   - **Method:** `push` (C++), `insert` (Python), `offer` (Java).

### 2. Deletion (Peek/Pop)
   - **Description:** Remove and return the element with the highest priority from the priority queue.
   - **Methods:** `pop` (C++), `get` and `pop` (Python), `poll` (Java).

### 3. Peek (Top)
   - **Description:** Return the element with the highest priority without removing it from the priority queue.
   - **Methods:** `top` (C++), `peek` (Python), `peek` (Java).


## Implementing a Priority Queue (C++ Example)

Below is an example of implementing a min-priority queue using C++'s Standard Template Library (STL):



> Code for Insertion, Deletion, Peek :
```cpp
#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> minPriorityQueue;

    // Insert elements with their priorities
    minPriorityQueue.push(5);
    minPriorityQueue.push(3);
    minPriorityQueue.push(8);

    // Peek (Top) operation
    int topElement = minPriorityQueue.top();
    std::cout << "Peek (Top) operation: Top element is " << topElement << std::endl;

    // Dequeue (Delete) elements with the lowest priority
    while (!minPriorityQueue.empty()) {
        int priority = minPriorityQueue.top();
        minPriorityQueue.pop();
        std::cout << "Dequeued element with priority " << priority << std::endl;
    }

    return 0;
}
```
## Conclusion
Priority queues are versatile data structures that find applications in various domains, including algorithms, operating systems, and more. They allow efficient management of elements with associated priorities, making it possible to process tasks in order of their importance or urgency.


Here are the time and space complexities for the Priority Queue operations described in the C++ example provided:

Time Complexities:
Insertion (push):

Time Complexity: O(log N)
Explanation: Inserting an element into a binary heap-based priority queue has a time complexity of O(log N), where N is the number of elements in the priority queue. This complexity arises from the need to maintain the heap's structure.
Deletion (pop):

Time Complexity: O(log N)
Explanation: Removing the element with the highest priority from a binary heap-based priority queue also has a time complexity of O(log N) due to the need to reorganize the heap.
Peek (top):

Time Complexity: O(1)
Explanation: Accessing the element with the highest priority without removing it is an efficient O(1) operation in a binary heap.


Space Complexity:
The space complexity for a priority queue is typically O(N), where N is the number of elements in the priority queue.
