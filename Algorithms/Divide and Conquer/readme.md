# Divide and Conquer
Divide and Conquer is an algorithmic paradigm in which the problem is solved using the Divide, Conquer, and Combine strategy.

A typical Divide and Conquer algorithm solves a problem using following three steps:

1. Divide: This involves dividing the problem into smaller sub-problems.
2. Conquer: Solve sub-problems by calling recursively until solved.
3. Combine: Combine the sub-problems to get the final solution of the whole problem.



## Standard algorithms that follow Divide and Conquer algorithm

1. [Quicksort](../Sorting/QuickSort/readme.md)
2. [Merge Sort](../Sorting/MergeSort/readme.md)
3. Closest Pair of Points
4. [Strassen’s Algorithm](Strassen's%20Algorithm/readme.md)
5. Cooley–Tukey Fast Fourier Transform (FFT) algorithm
6. Karatsuba algorithm for fast multiplication 
7. Maximum sub array sum
8. [Maximum and minimum element of an array](Maximum%20and%20minium%20of%20an%20array/readme.md)
9. [Convex Hull Problem](Convex%20Hull%20PRoblem/Readme.md)
10. [Inversion Problem](Inversion%20Problem/readme.md)

## Time Complexity of Divide and Conquer Algorithm:
```
 T(n) = aT(n/b) + f(n)
    
    where,
        n = size of input
        a = number of subproblems in the recursion
        n/b = size of each subproblem. All subproblems are assumed to have the same size.
        f(n) = cost of the work done outside the recursive call, which includes the cost of dividing the problem and cost of merging the solutions
```

## Advantages of Divide and Conquer

- Divide and Conquer tend to successfully solve one of the biggest problems, such as the Tower of Hanoi, a mathematical puzzle. It is challenging to solve complicated problems for which you have no basic idea, but with the help of the divide and conquer approach, it has lessened the effort as it works on dividing the main problem into two halves and then solving them recursively.

- This algorithm is much faster than other algorithms.

- It efficiently uses cache memory without occupying much space because it solves simple subproblems within the cache memory instead of accessing the slower main memory.

- It is more proficient than that of its counterpart Brute Force technique.

- Since these algorithms inhibit parallelism, it does not involve any modification and is handled by systems incorporating parallel processing.

## Disadvantages of Divide and Conquer

- Since most of its algorithms are designed by incorporating recursion, it necessitates high memory management.

- An explicit stack may overuse the space.

- It may even crash the system if the recursion is performed rigorously greater than the stack present in the CPU.

## The Inversion Problem as an Example of a Divide and Conquer Algorithm
The Inversion Problem is defined as counting how many swaps or inversions are needed in order to sort an array. We can calculate the number of inversions by using a modified merge sort. Counting the number of times, we have to sort one number before another. A full explanation of the Inversion problem can be found at [Inversion Problem](Inversion%20Problem/readme.md).

Here we will show how the inversion problem fits into the Divide and Conquer method.

### Example problem
Given the array { 1, 20, 6, 4, 5 }, determine how many swaps it will take to sort it.

1. Divide:
Here we recursively divide both arrays into the smallest possible subproblem.
For our example problem we recurse 4 levels down until we have lists of just one number.
```
Level 0)			{ 1, 20, 6, 4, 5 }
Level 1)		{ 1, 20, 6 } 	{ 4, 5 }
Level 2)	{ 1, 20 }	{ 6 } { 4 }  { 5 }
Level 3) { 1 }	{ 20 }
```

2. Conquer:
We sort each sub array and return it as we recurse back up the tree.
```
Level 3) { 1 }	{ 20 }
Level 2)	{ 1, 20 }	{ 6 } { 4 }  { 5 }
Level 1)		{ 1, 6, 20 } 	{ 4, 5 }
Level 0)			{ 1, 4, 5, 6, 20 }
```

3. Combine:
Combine sub arrays back together, counting the total number of inversions.
```
Level 3) { 1 }	{ 20 }
Level 2)	{ 1, 20 }	{ 6 } { 4 }  { 5 } // 1 inversions
Level 1)		{ 1, 6, 20 } 	{ 4, 5 }  // 2 inversions
Level 0)			{ 1, 4, 5, 6, 20 }  // 4 inversions
```

Sorted array: { 1, 4, 5, 6, 20 } with 5 inversions, (6, 20), (20, 4), (6, 4), (20, 5), (6, 5)


In this example you can see that the conquer and combine steps are very similar and happen almost at the same time. This is not always the case, in [Strassen's Matrix Multiplication algorithm](Strassen's%20Algorithm/readme.md) the combine and conquer steps are very different.