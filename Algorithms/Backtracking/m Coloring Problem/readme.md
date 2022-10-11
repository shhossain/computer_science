## m Coloring Problem

Given an undirected graph and a number m, determine if the graph can be colored with at most m colors such that no two adjacent vertices of the graph are colored with the same color

![mcolor-removebg-preview](https://user-images.githubusercontent.com/78929050/194987076-16a08a90-c617-4662-9c14-5ec659045ac0.png)


Examples: 

```
Input:  graph = {0, 1, 1, 1},
                         {1, 0, 1, 0},
                         {1, 1, 0, 1},
                         {1, 0, 1, 0}
Output: Solution Exists: Following are the assigned colors: 1  2  3  2
Explanation: By coloring the vertices 
                      with following colors, adjacent 
                      vertices does not have same colors

Input: graph = {1, 1, 1, 1},
                         {1, 1, 1, 1},
                         {1, 1, 1, 1},
                         {1, 1, 1, 1}

Output: Solution does not exist
Explanation: No solution exits 
```
