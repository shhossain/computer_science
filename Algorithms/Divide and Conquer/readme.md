# Divide and Conquer
Divide and Conquer is an algorithmic paradigm in which the problem is solved using the Divide, Conquer, and Combine strategy.

A typical Divide and Conquer algorithm solves a problem using following three steps:

1. Divide: This involves dividing the problem into smaller sub-problems.
2. Conquer: Solve sub-problems by calling recursively until solved.
3. Combine: Combine the sub-problems to get the final solution of the whole problem.



## Standard algorithms that follow Divide and Conquer algorithm

1. Quicksort
2. Merge Sort
3. Closest Pair of Points
4. Strassen’s Algorithm
5. Cooley–Tukey Fast Fourier Transform (FFT) algorithm
6. Karatsuba algorithm for fast multiplication 
7. Maximum sub array sum
8. [Maximum and minimum element of an array](Maximum%20and%20minium%20of%20an%20array/readme.md)
9. [Convex Hull Problem](Convex%20Hull%20PRoblem#readme)

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

- Divide and Conquer tend to successfully solve one of the biggest problems, such as the Tower of Hanoi, a mathematical puzzle. It is challenging to solve complicated problems for which you have no basic idea, but with the help of the divide and conquer approach, it has lessened the effort as it works on dividing the main problem into two halves and then solve them recursively. 

- This algorithm is much faster than other algorithms.

- It efficiently uses cache memory without occupying much space because it solves simple subproblems within the cache memory instead of accessing the slower main memory.

- It is more proficient than that of its counterpart Brute Force technique.

- Since these algorithms inhibit parallelism, it does not involve any modification and is handled by systems incorporating parallel processing.

## Disadvantages of Divide and Conquer

- Since most of its algorithms are designed by incorporating recursion, so it necessitates high memory management.

- An explicit stack may overuse the space.

- It may even crash the system if the recursion is performed rigorously greater than the stack present in the CPU.
