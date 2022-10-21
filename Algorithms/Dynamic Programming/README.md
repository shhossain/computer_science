# Dynamic Programming

Dynamic programming is both a mathematical optimization method and a computer programming method. The method was developed by Richard Bellman in the 1950s and has found applications in numerous fields, from aerospace engineering to economics. In both contexts it refers to simplifying a complicated problem by breaking it down into simpler sub-problems in a recursive manner. While some decision problems cannot be taken apart this way, decisions that span several points in time do often break apart recursively. Likewise, in computer science, if a problem can be solved optimally by breaking it into sub-problems and then recursively finding the optimal solutions to the sub-problems, then it is said to have optimal substructure. Dynamic programming is one way to solve problems with these properties. The process of breaking a complicated problem down into simpler sub-problems is called "divide and conquer".

Dynamic Programming is mainly an optimization over plain recursion. Wherever we see a recursive solution that has repeated calls for same inputs, we can optimize it using Dynamic Programming. The idea is to simply store the results of subproblems, so that we do not have to re-compute them when needed later. This simple optimization reduces time complexities from exponential to polynomial.


## Steps of Dynamic Programming Approach
Dynamic Programming algorithm is designed using the following four steps −

1. Characterize the structure of an optimal solution.
2. Recursively define the value of an optimal solution.
3. Compute the value of an optimal solution, typically in a bottom-up fashion.
4. Construct an optimal solution from the computed information.


## Applications of Dynamic Programming Approach
- Matrix Chain Multiplication
- Longest Common Subsequence
- Travelling Salesman Problem


### Popular Dynamic Programming Algorithms
* [Fibonacci Sequence](Fibonacci%20Sequence/README.md)
* [Longest Common Subsequence](Longest%20Common%20Subsequence/README.md)
* [Longest Increasing Subsequence](Longest%20Increasing%20Subsequence/README.md)
* [Knapsack Problem](Knapsack%20Problem/README.md)
* [Edit Distance](Edit%20Distance/README.md)
* [Coin Change](Coin%20Change/README.md)
* [Matrix Chain Multiplication](Matrix%20Chain%20Multiplication/README.md)
* [Floyd Warshall Algorithm](Floyd%20Warshall%20Algorithm/readme.md)
* [Subset Sum Problem](Subset%20Sum%20Problem/readme.md)
* [Painting Fence Algorithm](Painting%20Fence%20Algorithm/readme.md)
* [Coin Change](Coin%20Change/readme.md)
* [Longest Common Substring](Longest%20Common%20Substring/readme.md)
