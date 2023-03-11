# Data Structures
In computer science, a data structure is a data organization, management, and storage format that enables efficient access and modification. More precisely, a data structure is a collection of data values, the relationships among them, and the functions or operations that can be applied to the data.

## Types of Data Structures
- [Array](#array)
- [Linked List](#linkedlist)
- [Stack](#stack)
- [Queue](#queue)
- [Hash Table](#hash-table)
- [Heap](#heap)
- [Tree](#tree)
- [Graph](#graph)
- [Trie](Trie.md)
- [Pointers](Pointers.md)

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

Accessing an element in an array is done by indexing it.
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
index 0 value is 4 with memory location 1000 and a pointer to the next node 1008
index 1 value is 3 with memory location 1008 and a pointer to the next node 1002
index 2 value is 1 with memory location 1002 and a pointer to the next node 1004
index 3 value is 0 with memory location 1004 and a pointer to the next node 1006
index 4 value is 14 with memory location 1006 and a pointer to the next node 1010
index 5 value is 6 with memory location 1010 and a pointer to the first node 1000
```

#### Time complexities of some basic Linked List operations

| Operation | Time Complexity |
|-----------------|-------|
| Accesing an element             | O(N)     |
| Searching an element           | O(N)     |
| Inserting an element             | O(1)     |
| Deleting an element             | O(1)     |


#### There can be different types of Linked lists:

### Singly Linked List
A singly linked list is a type of linked list that is unidirectional, that is, it can be traversed in only one direction from the head to the last node (tail).

### Circular Linked List
Here, the last node of the list contains a pointer to the first node of the list. We traverse the circular singly linked list until we reach the same node where we started. It has no beginning or end. All nodes cannot be null.

### Doubly Linked List
In a doubly linked list, a node consists of three parts: node data, a pointer to the next node in sequence (next pointer), and a pointer to the previous node (previous pointer). We can traverse in any direction.



[More on Linked List](LinkedList.md)


## Stack
A stack is a data structure that stores a collection of data values in a LIFO (last in, first out) order.\
Stack operations can only occur through one of its ends, referred to as the _top_ of the stack.\
The implementation could be an array-like (static and contiguous) or a linked-list-like (dynamic and dis-contiguous).

[More on Stack](Stack.md)

## Queue
A queue stores a collection of data values in a FIFO (First In, First Out) order. The first element added to the queue will be the first to be processed (removed).\
A queue can only be accessed through its ends, referred to as _head_ for its rear and _tail_ for its back.\
The implementation could be an array-like (static and contiguous) or a linked-list-like (dynamic and dis-contiguous).

[More on Queue](Queue.md)


## Graph

The graph is a data structure that consists of vertices (to store the data) and edges (to connect the vertices) to create a network-like structure. In the graph, every relationship is an edge from one vertex to another. 

#### Types of Graph

**1. Directed Graph**: Those graphs in which the direction of edge from one vertex to another is given is called a directed graph.\
**2. Undirected Graph**: Those graphs in which the direction of edge from one vertex to another is not given are called an undirected graph. It has bidirectional relation.\
**3. Cyclic Graph**: A graph in which the cycle is present (able to traverse back the same vertex) is called a cyclic graph.\
**4. Acyclic Graph**: Those graph in which the cycle is not present (unable to traverse back the same vertex) is called an acyclic graph.\
**5. Weighted Graph**: If there is weight present on the edge of the graph then we call such graph a weighted graph.\

### Basic Terminologies Regarding Graph

**Degree**: In an Undirected Graph, the number of edges connected to a vertex is called the degree of the vertex.\
**Indegree**: In a Directed Graph, the number of edges entering into the vertex is called the Indegree of the vertex.\
**Outdegree**: In a Directed Graph, the number of edges emerging from the vertex is called the Outdegree of the vertex.\

### Representation of Graph

We can represent the graph using two ways: 
                            
**1. Adjacency Matrix**: In this representation, if there is an edge between the ith and jth vertices then we assign INT_MAX value at that place and otherwise Zero.
      
|  | 0 | 1 | 2 | 3 |
|--|---|---------|---|---------|
| **0** | 0 | INT_MAX | 0 | INT_MAX |
| **1** | INT_MAX | 0 | 0 | INT_MAX |
| **2** | 0 | INT_MAX | 0 | INT_MAX |
| **3** | 0 | INT_MAX | 0 | 0 |
      
**2. Adjacency List**: In this representation, we create a list of neighbors with the vertex.
      
| vertex | neighbours |
|--------|------------|
0 -> | 1 , 3 |
1 -> | 0 , 3 |
2 -> | 1 , 3 |
3 -> | 1 |

[More on Graph](graph.md)


## Heap

A heap is a data structure that is a complete binary tree in which the parent node is either greater than both child nodes or less than child nodes.

### Implementation of Heap 
  ```
    priority_queue<int, vector<int>,greater<int>> (heap_name); //min heap
    priority_queue<int, vector<int>> (heap_name);  //max heap
    
  ```

### Types of Heap

**1. Max Heap:** In Max Heap, the root node contains the greatest value among all its child nodes value.
**2. Min Heap:** In Max Heap, the root node contains the smallest value among all its child nodes value.

### Advantages of Heap 

**1.** Using heap we can access the greatest or smallest data in the constant time.\
**2.** The traversing time of a heap using the graph's Algorithm( BFS, DFS) is reduced to polynomial order.\
**3.** As the heap is a complete binary tree, for N nodes the maximum height of a heap is log(N) so the time complexity for accessing the maximum and minimum number is reduced to constant time and for the Kth element it is reduced to linear complexity.\

[More on Heap](Heap.md)


#### Hash Table

Hash Table is a data structure that stores data in an associative manner. In a hash table, data is stored in an array format, where each data value has its unique index value. Access to data becomes very fast if we know the index of the desired data.

### Example 

```
Let hash function H(x) = [11,12,13,14,15]
// it will be stored at positions {1,2,3,4,5}
// in the array or Hash table respectively.
```
[More on Hash Table](HashTable.md)

## Heap

A heap is a specialized tree-based data structure which is an almost complete tree that satisfies the heap property. The heap property means that the element with the greatest key is always in the root node such a heap is sometimes called a max-heap.

### Example

```
Let the array of numbers be [100, 7, 2, 17, 3, 25, 1, 36, 19]
// It will be in a tree-like form where the largest number will point to a smaller number and the smaller number points to an even smaller number and so on

A heap representation of the array would look like this:
                    100
                  /     \
                 19      36
                /  \    /  \
               17   3  25   1
              /  \    
             2    7
```
[More on Heap](Heap.md)

## Tree

A tree is non-linear and has a hierarchical data structure consisting of a collection of nodes such that each node of the tree stores a value and a list of references to other nodes (the “children”).

### Example

```
Let the array of numbers be [100, 7, 2, 17, 3, 25, 1, 36, 19]
// The tree is a specialized method to organize and store data in the computer to be used more effectively
A tree representation of the array would look like this:
                    100
                  /     \
                 19      36
                /  \    /  \
               17   3  25   1
              /  \    
             2    7
```
[More on Trees](Tree.md)

## Graph
A Graph is a non-linear data structure consisting of vertices and edges. The vertices are sometimes also referred to as nodes and the edges are lines or arcs that connect any two nodes in the graph. More formally a Graph is composed of a set of vertices( V ) and a set of edges( E ). The graph is denoted by G(E, V).

[More on Graph](Graph.md)

