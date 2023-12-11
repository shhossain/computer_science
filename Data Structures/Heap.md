## Heap

A heap is a specialized tree-based data structure which is an almost complete tree that satisfies the heap property. The heap property means that the element with the greatest key is always in the root node such a heap is sometimes called a max-heap. There are two general heaps, min-heap and max-heap

### Heap Operations
- Heapify: a process of creating a heap from an array.
- Insertion: process to insert an element in existing heap time complexity O(log N).
- Deletion: deleting the top element of the heap or the highest priority element, and then organizing the heap and returning the element with time complexity O(log N).
- Peek: to check or find the most prior element in the heap, (max or min element for max and min heap).

### Max-Heap

```
Let array of numbers be [100, 7, 2, 17, 3, 25, 1, 36, 19]
// It will be in a tree-like form where the largest number will point to a smaller number and the smaller number points to an even smaller number and so on

A max-heap representation of the array would look like this:
                    100
                  /     \
                 19      36
                /  \    /  \
               17   3  25   1
              /  \    
             2    7
```

### Min-Heap
```
Given an array of numbers [10, 30, 40, 100, 50, 40, 15]
// Min-heap will be a tree-like form where the smallest number acts as a root and points to a larger number and that larger number points to an even larger number and so on

A min-heap representation of the array would look like this:
                     10
                    /   \
                  15     30
                 /  \   /  \
               40   50 100  40
```

### Common Use Cases

Heaps are commonly used in various scenarios where you need efficient access to the minimum or maximum element in a collection of data. Here are some situations where heaps are particularly useful:

- Priority Queues:
  - Heaps are widely used to implement priority queues, where elements are assigned priorities, and the element with the highest (or lowest) priority can be efficiently retrieved.

- Dijkstra's Shortest Path Algorithm:
  - The min-heap is often employed in algorithms like Dijkstra's algorithm for finding the shortest path in a graph. It allows for quick extraction of the vertex with the minimum distance.

- Heap Sort:
  - Heaps are used in the heap sort algorithm, a comparison-based sorting algorithm that operates by building a max-heap or min-heap.

- Job Scheduling:
  - Heaps can be used in job scheduling algorithms where tasks with the highest (or lowest) priority need to be processed first.

- Graph Algorithms:
  - Algorithms like Prim's and Kruskal's for minimum spanning trees use heaps to efficiently select and process edges with the minimum weights.

- Task Scheduling in Operating Systems:
  - Heaps can be employed in operating systems for managing tasks with different priorities and scheduling them for execution.

- Median Maintenance:
  - Heaps can be used to efficiently maintain the median of a set of numbers, where you need quick access to both the smaller and larger halves of the dataset.

In general, heaps are chosen when you need fast access to the extreme values (minimum or maximum) in a dataset or when you need to efficiently maintain a dynamically changing priority queue. They offer logarithmic time complexity for both insertion and extraction of the extremal values, making them suitable for various algorithmic applications.

[Read more about Heaps here](https://en.wikipedia.org/wiki/Heap_(data_structure))
