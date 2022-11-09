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
```
Explanation: By coloring the vertices with following colors, adjacent vertices does not have same colors
```
Input: graph = {1, 1, 1, 1},
                         {1, 1, 1, 1},
                         {1, 1, 1, 1},
                         {1, 1, 1, 1}
Output: Solution does not exist
```
Explanation: No solution exits

Follow the given steps to solve the problem:

Create a recursive function that takes the current index, number of vertices and output color array
If the current index is equal to number of vertices. Check if the output color configuration is safe, i.e check if the adjacent vertices do not have same color. If the conditions are met, print the configuration and break
Assign a color to a vertex (1 to m)
For every assigned color recursively call the function with next index and number of vertices
If any recursive function returns true break the loop and returns true.
Below is the implementation of the above approach:

```c
// C program for the above approach

#include <stdbool.h>
#include <stdio.h>

// Number of vertices in the graph
#define V 4

void printSolution(int color[]);

// check if the colored
// graph is safe or not
bool isSafe(bool graph[V][V], int color[])
{
	// check for every edge
	for (int i = 0; i < V; i++)
		for (int j = i + 1; j < V; j++)
			if (graph[i][j] && color[j] == color[i])
				return false;
	return true;
}

/* This function solves the m Coloring
problem using recursion. It returns
false if the m colours cannot be assigned,
otherwise, return true and prints
assignments of colours to all vertices.
Please note that there may be more than
one solutions, this function prints one
of the feasible solutions.*/
bool graphColoring(bool graph[V][V], int m, int i,
				int color[V])
{
	// if current index reached end
	if (i == V) {
		// if coloring is safe
		if (isSafe(graph, color)) {
			// Print the solution
			printSolution(color);
			return true;
		}
		return false;
	}

	// Assign each color from 1 to m
	for (int j = 1; j <= m; j++) {
		color[i] = j;

		// Recur of the rest vertices
		if (graphColoring(graph, m, i + 1, color))
			return true;

		color[i] = 0;
	}

	return false;
}

/* A utility function to print solution */
void printSolution(int color[])
{
	printf("Solution Exists:"
		" Following are the assigned colors \n");
	for (int i = 0; i < V; i++)
		printf(" %d ", color[i]);
	printf("\n");
}

// Driver code
int main()
{
	/* Create following graph and
	test whether it is 3 colorable
	(3)---(2)
	| / |
	| / |
	| / |
	(0)---(1)
	*/
	bool graph[V][V] = {
		{ 0, 1, 1, 1 },
		{ 1, 0, 1, 0 },
		{ 1, 1, 0, 1 },
		{ 1, 0, 1, 0 },
	};
	int m = 3; // Number of colors

	// Initialize all color values as 0.
	// This initialization is needed
	// correct functioning of isSafe()
	int color[V];
	for (int i = 0; i < V; i++)
		color[i] = 0;

	// Function call
	if (!graphColoring(graph, m, 0, color))
		printf("Solution does not exist");

	return 0;
}

```


Output : 

```
Solution Exists: Following are the assigned colors 
  1  2  3  2
```
