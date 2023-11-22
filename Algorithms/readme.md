# Algorithms
Algorithms are the sets of steps necessary to complete computation - they are at the heart of what our devices do. And this isn’t a new concept. Since the development of math itself algorithms have been needed to help us complete tasks more efficiently, but today we’re going to look a couple modern computing problems like sorting and graph search and show how we’ve made them more efficient so you can more easily find cheap airfare or map directions to Winterfell... or like a restaurant or something.

Basically, an Algorithm is a step-by-step procedure, which defines a set of instructions to be executed in a certain order to get the desired output.

## [Time Complexity](Time%20Complexity/readme.md)
The time complexity of an algorithm is an estimate of how much time it will take for an algorithm to run for a selected input. In other words, it describes how the run time of an algorithm grows as the input size grows. By calculating the time complexity, we can find out whether the algorithm is fast enough without implementing it. Normally written as O Notation but Ω and Θ Notation are also used. An algorithm's time complexity can range from constant to factorial.

## [Space Complexity](Space%20Complexity/readme.md)
The space complexity of an algorithm refers to the total amount of memory space used by the algorithm. It’s the space of the input values and the space used while it is executed. Normally written as O Notation but Ω and Θ Notation are also used. An algorithm's space complexity can range from constant to factorial but is normally closer to the input size.

## Algorithm Design Techniques
When creating algorithms there are a few techniques that can be used to reduce the time complexity of an algorithm.  This allows for larger inputs to be calculated at faster times. 
* [Sliding Window](Sliding%20Window%20Algorithm/readme.md)

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
* [Tim Sort](Sorting/TimSort/readme.md)


## [Searching](Searching/readme.md)
Searching is the process of finding a certain target element inside a container. Searching Algorithms are designed to check for an element or retrieve an element from any data structure where it is stored.
### Popular Searching Algorithms 
* [Sequential](Searching/SequentialSearch/readme.md)
* [Linear Search](Searching/LinearSearch/readme.md)
* [Binary Search](Searching/BinarySearch/readme.md)
* [Hashing](Searching/Hashing/readme.md)
* Jump Search
* Interpolation Search
* Exponential Search


## [Graph Algorithms](Graphs/readme.md)
A graph is a data structure that consists of a finite (and possibly changeable) set of vertices, which are also called nodes or points, e.g. V=(A, B, C, ..). To represent relations between vertices we have a set of unordered pairs called edges e.g. E= ((A,B), (A,C), ..).  These edges are known as arcs, lines, and arrows.  More formally a Graph is defined as a set of vertices( V ), a set of edges( E ) and is denoted by G(E, V).
Graphs are used to model pairwise relations between objects and are the most useful data structures for many real-world applications. For example, the airline route network is a graph in which the cities are the vertices, and the flight routes are the edges. Graphs are also used to represent networks. The Internet can be modeled as a graph in which the computers are the vertices and the links between computers are the edges. Graphs are also used in social networks like linkedIn and Facebook. In fact, graphs are used to represent circuit design, aeronautical scheduling, and many other things. 


### Graph Components
- Edges - An edge is a connection between two nodes.
- Weight - A weight is a value associated with an edge.
- Vertices - A vertex is a node of the graph. This node also has a degree, or the number of edges connected to it. A vertex’s in-degree is defined as the number of edges that point to a vertex and the vertex’s out-degree is the number of edges that point to other vertices. There can be many different types of vertices such as:
    - Isolated vertex - Has no edges pointing to the vertex, and it has no outgoing edges. Its in-degree and out-degree is zero.
    - Source vertex - Has no edges point to the vertex, its in-degree is zero.
    - Sink vertex - Has no outgoing edges, it’s out-degree is zero.
    - [Articulation Points](Graphs/Articulation%20Points/readme.md) - A vertex that creates an undirected graph if it is removed from the graph..

### Types of Graphs
- Undirected Graph - A graph where edges of the graph are two-way paths or relations. 
- Directed Graph - A graph where edges of the graph go only one way, usually marked with arrows. 
- Weighted Graph - A graph where edges of the graph have costs or weights associated with them.
- [Tree Graphs](Graphs/Tree%20Based%20Algorithms/readme.md) - A graph with n vertices and n-1 edges where there exists only one path between vertices.  

### Graph Topics and Algorithms  
1. [Graph Traversal](Graphs/Traversal%20Algorithms/readme.md)
    - [Breadth First Search (BFS)](Graphs/Traversal%20Algorithms/BreadthFirstSearch/readme.md)
    - [A* Search](Graphs/Traversal%20Algorithms/AstarSearch/readme.md)
    - [Depth First Search (DFS)](Graphs/Traversal%20Algorithms/DepthFirstSearch/readme.md)
2. [Topological Sorts](Graphs/Topological%20Sort/readme.md)
3. [Cycle Detection](Graphs/Cycle%20Detection/readme.md)
    - Undirected Graph
        - [Using DFS](Graphs/Cycle%20Detection/Undirected%20Graph/DFS/readme.md)
        - [Using BFS](Graphs/Cycle%20Detection/Undirected%20Graph/BFS/readme.md)
    - [Directed Graph](Graphs/Cycle%20Detection/Directed%20Graph/readme.md)
4. [Shortest Path](Graphs/Shortest%20Path/readme.md)
    - [Dijkstra's Algorithm](Graphs/Traversal%20Algorithms/Dijkstra'sAlgorithm/readme.md)
    - [Bellman Ford Algorithm](Graphs/Shortest%20Path/BellmanFordAlgorithm/readme.md)
    - [Bellman-Ford Algorithm](Graphs/Bellman-Ford%20Algorithm/readme.md)
    - [Floyd Warshall Algorithm](Graphs/Shortest%20Path/FloydWarshallAlgorithm/readme.md)
5. [Spanning Tree Algorithm](Graphs/Spanning%20Tree%20Algorithm/readme.md)
    - [Kruskals Algorithm](Graphs/Spanning%20Tree%20Algorithm/KruskalsAlgorithm/readme.md)
    - [Prims Algorithm](Graphs/Spanning%20Tree%20Algorithm/PrimsAlgorithm/readme.md)  
    - [Disjoint Set Union / Union find](Graphs/DSU/readme.md)
6. Strongly Connected Components
    - [Kosaraju's Algorithm](Graphs/Kosaraju%20Algorithm/readme.md)


## [Greedy Algorithms](Greedy%20Algorithm/readme.md)
Greedy algorithms are a simple, intuitive class of algorithms that can be used to find the optimal solution to some optimization problems. An optimization problem can be solved using Greedy if the problem has the following property: at every step, we can make a choice that looks best at the moment, and we get the optimal solution of the complete problem. They are called greedy because at each step they make the choice that seems best at that moment. This means that greedy algorithms do not guarantee to return the globally optimal solution, but instead make locally optimal choices in the hope of finding a global optimum. 

### Greedy Algorithms
* Activity Selection
* [Huffman Coding](Greedy%20Algorithm/Huffman%20Coding%20Algorithm/readme.md)
* [Prim's Algorithm](Greedy%20Algorithm/Prim%27s%20Algorithm/readme.md)
* [Kruskal's Algorithm](Greedy%20Algorithm/Krushkal%27s%20Algorithm/readme.md)
* [Dijkstra's Algorithm](Greedy%20Algorithm/Dijkstra's%20Algorithm/readme.md)
* Job Sequencing
* Fractional Knapsack
* [Ford-Fulkerson Algorithm](Greedy%20Algorithm/Ford-Fulkerson/readme.md)


## [String Based Algorithms](String%20Based%20Algorithms/readme.md)
String-based algorithms are algorithms limited to strings. They are used for operations like searching for a specific substring, pattern matching, and other text processing.

### Popular String Algorithms
* [Knuth-Morris-Pratt(KMP)](String%20Based%20Algorithms/KMP/readme.md)
* [Rabin Karp](String%20Based%20Algorithms/RabinKarp/readme.md)
* [Suffix Trie](String%20Based%20Algorithms/SuffixTrie/readme.md)
* Boyer-Moore Algorithm
* String Hashing


## [Dynamic Programming](Dynamic%20Programming/README.md)
Dynamic programming is both a mathematical optimization method and a computer programming method. It was developed by Richard Bellman in the 1950s and has found applications in numerous fields, from aerospace engineering to economics. In both contexts it refers to simplifying a complicated problem by breaking it down into simpler sub-problems in a recursive manner. While some decision problems cannot be taken apart this way, decisions that span several points in time do often break apart recursively. Likewise, in computer science, if a problem can be solved optimally by breaking it into sub-problems and then recursively finding the optimal solutions to the sub-problems, then it is said to have optimal substructure. Dynamic programming is one way to solve problems with these properties. The process of breaking a complicated problem down into simpler sub-problems is called "divide and conquer".

### Dynamic Programming Algorithms
* [Fibonacci Sequence](Dynamic%20Programming/Fibonacci%20Sequence/README.md)
* [Nth Fibonacci](Dynamic%20Programming/Nth%20Fibonnaci/README.md)
* [Nth Catalan Number/Sequence](Dynamic%20Programming/Nth%20Catalan%20Number/README.md)
* [Longest Common Subsequence](Dynamic%20Programming/Longest%20Common%20Subsequence/README.md)
* [Longest Increasing Subsequence](Dynamic%20Programming/Longest%20Increasing%20Subsequence/README.md)
* [Longest Common Substring](Dynamic%20Programming/Longest%20Common%20Substring/readme.md)
* [Longest Palindromic Substring](Dynamic%20Programming/Longest%20Palindromic%20Substring/README.md)
* [Knapsack Problem](Dynamic%20Programming/Knapsack%20Problem/README.md)
* [Edit Distance](Dynamic%20Programming/Edit%20Distance/README.md)
* Coin Change
* [Matrix Chain Multiplication](Dynamic%20Programming/Matrix%20Chain%20Multiplication/README.md)
* [Balanced Tree Count](Dynamic%20Programming/Count%20Balanced%20Binary%20Trees%20of%20Height%20h/readme.md)
* [Counting Hops](Dynamic%20Programming/Count%20Number%20Of%20Hops/README.md)
* [Floyd Warshall Algorithm](Dynamic%20Programming/Floyd%20Warshall%20Algorithm/readme.md)
* [Gold Mine Problem](Dynamic%20Programming/Gold%20Mine%20Problem/README.md)
* [Least Common Multiple (LCM)](Dynamic%20Programming/LCM/LCM.md)
* [Painting Fence Algorithm](Dynamic%20Programming/Painting%20Fence%20Algorithm/readme.md)
* [Staircase](Dynamic%20Programming/Staircase/README.md)
* [Subset Sum Problem](Dynamic%20Programming/Subset%20Sum%20Problem/readme.md)

## [Divide and Conquer](Divide%20and%20Conquer/readme.md)
Divide and conquer is an algorithmic paradigm in which the problem is recursively solved using the Divide, Conquer, and Combine strategy.
A problem is broken down into two or more similar sub-problems until they can be easily solved. Those solutions are then combined to solve the larger sub-problems until the original problem is solved. Divide and Conquer algorithms differ from Dynamic Programming algorithms in that Divide and Conquer algorithms do not have overlapping sub-problems. Meaning that all Divide and Conquer algorithms are also Dynamic Programming algorithms, but not all Dynamic Programming algorithms are Divide and Conquer algorithms.

### Popular Divide and Conquer Algorithms
* [Convex Hull Problem](Divide%20and%20Conquer/Convex%20Hull%20PRoblem/Readme.md)
* [The Inversion Problem](Divide%20and%20Conquer/Inversion%20Problem/readme.md)
* [Maximum and minimum of an array](Divide%20and%20Conquer/Maximum%20and%20minium%20of%20an%20array/readme.md)
* [Strassen's Matrix Multiplication](Divide%20and%20Conquer/Strassen's%20Algorithm/readme.md)


## [Branch and Bound](Branch%20and%20Bound/README.md)
Branch and bound is an algorithm technique for solving optimization problems.  The problem is broken down by exploring potential solutions.  Those solutions which cannot be the optimal solution are eliminated.  When the entire tree of potential solutions has been explored the optimized solution is found. The branching of the solutions and the eliminating of non-optimal solutions is where the name branch and bound comes from.

### Popular Branch and Bound Algorithms
* [Knapsack Problem](Branch%20and%20Bound/Knapsack%20Problem/README.md)
* [Traveling Salesman Problem](Traveling%20Salesman%20Problem/readme.md)
* [Job Assignment Problem](Branch%20and%20Bound/Job%20Assignment%20Problem/README.md)


## [Backtracking Algorithms](Backtracking/README.md)
Backtracking is defined as searching every possible combination in order to solve a computational problem. This technique solves problems by building up solution candidates and when the algorithm determines that the candidate cannot possibly be part of a valid solution it abandons the candidate or “backtracks" to try another candidate.

### Backtracking Algorithms
* [Sudoku](Backtracking/Sudoku/readme.md)
* [M Coloring](Backtracking/M%20Colouring%20Problem/readme.md)
* [Sum of Subset](Backtracking/Subset%20Sum/README.md)
* [Knight's Tour](Backtracking/The%20Knight’s%20tour%20problem/README.md)
* [Word Boggle](Backtracking/Word%20Boggle/README.md)
* [Rat in a Maze](Backtracking/Rat%20in%20a%20Maze/README.md)
* [N Queen Problem](Backtracking/N%20Queen%20Problem/README.md)
* [Cryptarithmetic Puzzles](Backtracking/Cryptarithmetic%20Puzzles/README.md)
* [All Possible Paths](Backtracking/Find%20All%20Possible%20Path/README.md)
* [Generate IP Addresses](Backtracking/Generate%20IP%20Adresses/README.md)
* [Remove Invalid Parentheses](Backtracking/Remove%20Invalid%20Parentheses/README.md)
* [Longest Possible Route in a Matrix with Hurdles](Backtracking/Longest%20Possible%20Route%20in%20a%20Matrix%20with%20Hurdles/README.md)
* [Permutation of a Given String](Backtracking/Permutation%20Of%20a%20Given%20String/README.md)
* [Magnet Puzzle](Backtracking/Magnet%20Puzzle/README.md)
* [Tug of War](Backtracking/Tug%20of%20War/README.md)


