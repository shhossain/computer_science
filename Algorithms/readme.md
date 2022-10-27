# Algorithms
Algorithms are the sets of steps necessary to complete computation - they are at the heart of what our devices actually do. And this isn’t a new concept. Since the development of math itself algorithms have been needed to help us complete tasks more efficiently, but today we’re going to take a look a couple modern computing problems like sorting and graph search, and show how we’ve made them more efficient so you can more easily find cheap airfare or map directions to Winterfell... or like a restaurant or something.  

Put simply, Algorithm is a step-by-step procedure, which defines a set of instructions to be executed in a certain order to get the desired output.

## [Sorting](Sorting/readme.md)
Sorting is the process of arranging a list of items in a particular order. For example, if you had a list of names, you might want to sort them alphabetically. Or if you had a list of numbers, you might want to put them in order from smallest to largest. Sorting is a common task, and it’s one that we can do in many different ways.
### Popular Sorting Algorithms
* [Bubble Sort](Sorting/BubbleSort/readme.md)
* [Insertion Sort](Sorting/InsertionSort/readme.md)
* [Selection Sort](Sorting/SelectionSort/readme.md)
* [Merge Sort](Sorting/MergeSort/readme.md)
* [Quick Sort](Sorting/QuickSort/readme.md)
* [Heap Sort](Sorting/HeapSort/readme.md)
* [Swap Sort](Sorting/SwapSort/readme.md)
* [Radix Sort](Sorting/RadixSort/readme.md)
* [Shell Sort](Sorting/ShellSort/readme.md)
* [Count Sort](Sorting/CountSort/readme.md)

### Popular Searching Algorithms
* [Sequential/Linear Search](Searching/SequentialSearch/readme.md)
* [Binary Search](Searching/BinarySearch/readme.md)


## [Graph Search](Graph%20Search/readme.md)
Graph search is the process of searching through a graph to find a particular node. A graph is a data structure that consists of a finite (and possibly mutable) set of vertices or nodes or points, together with a set of unordered pairs of these vertices for an undirected graph or a set of ordered pairs for a directed graph. These pairs are known as edges, arcs, or lines for an undirected graph and as arrows, directed edges, directed arcs, or directed lines for a directed graph. The vertices may be part of the graph structure, or may be external entities represented by integer indices or references. Graphs are one of the most useful data structures for many real-world applications. Graphs are used to model pairwise relations between objects. For example, the airline route network is a graph in which the cities are the vertices and the flight routes are the edges. Graphs are also used to represent networks. The Internet can be modeled as a graph in which the computers are the vertices and the links between computers are the edges. Graphs are also used in social networks like linkedIn, Facebook. In fact, graphs are used to represent many real-world applications: computer networks, circuit design, and aeronautical scheduling to name just a few.
### Popular Graph Search Algorithms
* [Breadth First Search](Graph%20Search/BreadthFirstSearch/readme.md)
* [Depth First Search](Graph%20Search/DepthFirstSearch/readme.md)
* [Dijkstra's Algorithm](Graph%20Search/Dijkstra'sAlgorithm/readme.md)
* [A* Search](Graph%20Search/A*Search/readme.md)

## [Dynamic Programming](Dynamic%20Programming/README.md)
Dynamic programming is both a mathematical optimization method and a computer programming method. The method was developed by Richard Bellman in the 1950s and has found applications in numerous fields, from aerospace engineering to economics. In both contexts it refers to simplifying a complicated problem by breaking it down into simpler sub-problems in a recursive manner. While some decision problems cannot be taken apart this way, decisions that span several points in time do often break apart recursively. Likewise, in computer science, if a problem can be solved optimally by breaking it into sub-problems and then recursively finding the optimal solutions to the sub-problems, then it is said to have optimal substructure. Dynamic programming is one way to solve problems with these properties. The process of breaking a complicated problem down into simpler sub-problems is called "divide and conquer".
### Popular Dynamic Programming Algorithms
* [Fibonacci Sequence](Dynamic%20Programming/Fibonacci%20Sequence/README.md)
* [Longest Common Subsequence](Dynamic%20Programming/Longest%20Common%20Subsequence/README.md)
* [Longest Increasing Subsequence](Dynamic%20Programming/Longest%20Increasing%20Subsequence/README.md)
* [Knapsack Problem](Dynamic%20Programming/Knapsack%20Problem/README.md)
* [Edit Distance](Not-Added)
* [Coin Change](Dynamic%20Programming/Coin%20Change/README.md)
* [Matrix Chain Multiplication](Dynamic%20Programming/Matrix%20Chain%20Multiplication/README.md)

## [Greedy Algorithms](Greedy%20Algorithm)
Greedy algorithms are a simple, intuitive class of algorithms that can be used to find the optimal solution to some optimization problems. They are called greedy because at each step they make the choice that seems best at that moment. This means that greedy algorithms do not guarantee to return the globally optimal solution, but instead make locally optimal choices in the hope of finding a global optimum. Greedy algorithms are used for optimization problems. An optimization problem can be solved using Greedy if the problem has the following property: at every step, we can make a choice that looks best at the moment, and we get the optimal solution of the complete problem.
### Popular Greedy Algorithms
* [Activity Selection](notadded)
* [Huffman Coding](Greedy%20Algorithm/Huffman%20Coding%20Algorithm/readme.md)
* [Prim's Algorithm](Greedy%20Algorithm/Prim%27s%20Algorithm/readme.md)
* [Kruskal's Algorithm](Greedy%20Algorithm/Krushkal%27s%20Algorithm/readme.md)
* [Dijkstra's Algorithm](notadded)
* [Job Sequencing](notadded)
* [Fractional Knapsack](notadded)
* [Huffman Decoding](notadded)
* [Ford-Fulkerson Algorithm](Greedy%20Algorithm/Ford-Fulkerson/readme.md)

## Backtracking
Backtracking is an algorithmic-technique for solving problems recursively by trying to build a solution incrementally, one piece at a time, removing those solutions that fail to satisfy the constraints of the problem at any point of time (by time, here, is referred to the time elapsed till reaching any level of the search tree).
### Popular Backtracking Algorithms
* [N-Queens](Backtracking/N-Queens/readme.md)
* [Sudoku](Backtracking/Sudoku/readme.md)
* [M Coloring](Backtracking/M%20Colouring%20Problem/readme.md)
* [Hamiltonian Cycle](Backtracking/HamiltonianCycle/readme.md)
* [Word Break](Backtracking/WordBreak/readme.md)
* [Rat in a Maze](Backtracking/RatinMaze/readme.md)
* [N Queen Problem](Backtracking/NQueenProblem/readme.md)
* [Sum of Subset](Backtracking/Subset%20Sum/README.md)
* [Solve Sudoku](Backtracking/SolveSudoku/readme.md)
* [Knight's Tour](Backtracking/The%20Knight’s%20tour%20problem/README.md)

## Branch and Bound
Branch and bound is a general technique for solving combinatorial optimization problems. It is a systematic enumeration technique that reduces the number of candidate solutions by using the problem's structure to eliminate candidate solutions that cannot possibly be optimal. It is a divide and conquer algorithm that is used to solve optimization problems. It is a systematic enumeration technique that reduces the number of candidate solutions by using the problem's structure to eliminate candidate solutions that cannot possibly be optimal. It is a divide and conquer algorithm that is used to solve optimization problems. It is a systematic enumeration technique that reduces the number of candidate solutions by using the problem's structure to eliminate candidate solutions that cannot possibly be optimal. It is a divide and conquer algorithm that is used to solve optimization problems.
### Popular Branch and Bound Algorithms
* [0-1 Knapsack](BranchandBound/0-1Knapsack/readme.md)
* [Travelling Salesman Problem](BranchandBound/TravellingSalesmanProblem/readme.md)

## [Searching](Searching/README.md)
Searching is algorithm for finding a certain target element inside a container. Searching Algorithms are designed to check for an element or retrieve an element from any data structure where it is stored.

### Popular Searching Algorithms revert-67-add-Vovka1759 
* [Linear Search](Searching/LinearSearch/readme.md)
* [Binary Search](Searching/BinarySearch/readme.md)
* [Jump Search](Not-Added)
* [Interpolation Search](Not-Added)
* [Exponential Search](Not-Added)

## [Spanning Tree](Algorithms/Spanning%20Tree%20Algorithm/readme.md)

A spanning tree is a sub-graph of an undirected connected graph, which includes all the vertices of the graph with a minimum possible number of edges. If a vertex is missed, then it is not a spanning tree.

The edges may or may not have weights assigned to them.

The total number of spanning trees with n vertices that can be created from a complete graph is equal to n(n-2).

If we have n = 4, the maximum number of possible spanning trees is equal to 44-2 = 16. Thus, 16 spanning trees can be formed from a complete graph with 4 vertices.

### Popular Minimum Spanning tree Algorithms
* [KruskalsAlgorithm](Algorithms/Spanning%20Tree%20Algorithm\KruskalsAlgorithm/readme.md)
* [PrimsAlgorithm](Algorithms/Spanning%20Tree%20Algorithm\PrimsAlgorithm/readme.md)]    
