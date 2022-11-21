## Floyd Warshall Algorithm 

The Floyd Warshall Algorithm is for solving all pairs shortest path problems. The problem is to find the shortest distances between every pair of vertices in a given edge-weighted directed Graph. 

**Example:**
```
Input:  graph[][] = { {0,   5,  INF, 10},
                               {INF,  0,  3,  INF},
                               {INF, INF, 0,   1},
                               {INF, INF, INF, 0} }
which represents the following graph
             10
      (0)——->(3)
        |              /|\
     5 |               |  1
        |               |  
       \|/             |
      (1)——->(2)
              3 
Output:

Shortest distance matrix
    0        5      8       9
 INF       0      3       4
 INF     INF    0       1 
 INF     INF    INF    0
 ```
 - Initialize the solution matrix same as the input graph matrix as a first step. 
 - Then update the solution matrix by considering all vertices as an intermediate vertex. 
 - The idea is to one by one pick all vertices and updates all shortest paths which include the picked vertex as an intermediate vertex in the shortest path. 
 - When we pick vertex number k as an intermediate vertex, we already have considered vertices {0, 1, 2, .. k-1} as intermediate vertices. 
 - For every pair (i, j) of the source and destination vertices respectively, there are two possible cases. 
 - k is not an intermediate vertex in shortest path from i to j. We keep the value of dist[i][j] as it is. 
 - k is an intermediate vertex in shortest path from i to j. We update the value of dist[i][j] as dist[i][k] + dist[k][j] if dist[i][j] > dist[i][k] + dist[k][j]

## Implementation In C++

```
// C++ Program for Floyd Warshall Algorithm
#include <bits/stdc++.h>
using namespace std;

// Number of vertices in the graph
#define V 4

/* Define Infinite as a large enough
value.This value will be used for
vertices not connected to each other */
#define INF 99999

// A function to print the solution matrix
void printSolution(int dist[][V]);

// Solves the all-pairs shortest path
// problem using Floyd Warshall algorithm
void floydWarshall(int graph[][V])
{
	/* dist[][] will be the output matrix
	that will finally have the shortest
	distances between every pair of vertices */
	int dist[V][V], i, j, k;

	/* Initialize the solution matrix same
	as input graph matrix. Or we can say
	the initial values of shortest distances
	are based on shortest paths considering
	no intermediate vertex. */
	for (i = 0; i < V; i++)
		for (j = 0; j < V; j++)
			dist[i][j] = graph[i][j];

	/* Add all vertices one by one to
	the set of intermediate vertices.
	---> Before start of an iteration,
	we have shortest distances between all
	pairs of vertices such that the
	shortest distances consider only the
	vertices in set {0, 1, 2, .. k-1} as
	intermediate vertices.
	----> After the end of an iteration,
	vertex no. k is added to the set of
	intermediate vertices and the set becomes {0, 1, 2, ..
	k} */
	for (k = 0; k < V; k++) {
		// Pick all vertices as source one by one
		for (i = 0; i < V; i++) {
			// Pick all vertices as destination for the
			// above picked source
			for (j = 0; j < V; j++) {
				// If vertex k is on the shortest path from
				// i to j, then update the value of
				// dist[i][j]
				if (dist[i][j] > (dist[i][k] + dist[k][j])
					&& (dist[k][j] != INF
						&& dist[i][k] != INF))
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}

	// Print the shortest distance matrix
	printSolution(dist);
}

/* A utility function to print solution */
void printSolution(int dist[][V])
{
	cout << "The following matrix shows the shortest "
			"distances"
			" between every pair of vertices \n";
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dist[i][j] == INF)
				cout << "INF"
					<< "	 ";
			else
				cout << dist[i][j] << "	 ";
		}
		cout << endl;
	}
}

// Driver's code
int main()
{
	int graph[V][V] = { { 0, 5, INF, 10 },
						{ INF, 0, 3, INF },
						{ INF, INF, 0, 1 },
						{ INF, INF, INF, 0 } };

	// Function call
	floydWarshall(graph);
	return 0;
}


```

## Implementation In JAVA

```
// Java program for Floyd Warshall All Pairs Shortest
// Path algorithm.
import java.io.*;
import java.lang.*;
import java.util.*;

class AllPairShortestPath {
	final static int INF = 99999, V = 4;

	void floydWarshall(int graph[][])
	{
		int dist[][] = new int[V][V];
		int i, j, k;

		/* Initialize the solution matrix
		same as input graph matrix.
		Or we can say the initial values
		of shortest distances
		are based on shortest paths
		considering no intermediate
		vertex. */
		for (i = 0; i < V; i++)
			for (j = 0; j < V; j++)
				dist[i][j] = graph[i][j];

		/* Add all vertices one by one
		to the set of intermediate
		vertices.
		---> Before start of an iteration,
			we have shortest
			distances between all pairs
			of vertices such that
			the shortest distances consider
			only the vertices in
			set {0, 1, 2, .. k-1} as
			intermediate vertices.
		----> After the end of an iteration,
				vertex no. k is added
				to the set of intermediate
				vertices and the set
				becomes {0, 1, 2, .. k} */
		for (k = 0; k < V; k++) {
			// Pick all vertices as source one by one
			for (i = 0; i < V; i++) {
				// Pick all vertices as destination for the
				// above picked source
				for (j = 0; j < V; j++) {
					// If vertex k is on the shortest path
					// from i to j, then update the value of
					// dist[i][j]
					if (dist[i][k] + dist[k][j]
						< dist[i][j])
						dist[i][j]
							= dist[i][k] + dist[k][j];
				}
			}
		}

		// Print the shortest distance matrix
		printSolution(dist);
	}

	void printSolution(int dist[][])
	{
		System.out.println(
			"The following matrix shows the shortest "
			+ "distances between every pair of vertices");
		for (int i = 0; i < V; ++i) {
			for (int j = 0; j < V; ++j) {
				if (dist[i][j] == INF)
					System.out.print("INF ");
				else
					System.out.print(dist[i][j] + " ");
			}
			System.out.println();
		}
	}

	// Driver's code
	public static void main(String[] args)
	{
		/* Let us create the following weighted graph
		10
		(0)------->(3)
		|		 /|\
		5 |		 |
		|		 | 1
		\|/		 |
		(1)------->(2)
		3		 */
		int graph[][] = { { 0, 5, INF, 10 },
						{ INF, 0, 3, INF },
						{ INF, INF, 0, 1 },
						{ INF, INF, INF, 0 } };
		AllPairShortestPath a = new AllPairShortestPath();

		// Function call
		a.floydWarshall(graph);
	}
}




```

**OUTPUT:**
```
The following matrix shows the shortest distances between every pair of vertices 
      0      5      8      9
    INF      0      3      4
    INF    INF      0      1
    INF    INF    INF      0
   ```
## Implementation in C

```
// C Program for Floyd Warshall Algorithm
#include <stdio.h>

// Number of vertices in the graph
#define V 4

/* Define Infinite as a large enough
value. This value will be used
for vertices not connected to each other */
#define INF 99999

// A function to print the solution matrix
void printSolution(int dist[][V]);

// Solves the all-pairs shortest path
// problem using Floyd Warshall algorithm
void floydWarshall(int graph[][V])
{
	/* dist[][] will be the output matrix
	that will finally have the shortest
	distances between every pair of vertices */
	int dist[V][V], i, j, k;

	/* Initialize the solution matrix
	same as input graph matrix. Or
	we can say the initial values of
	shortest distances are based
	on shortest paths considering no
	intermediate vertex. */
	for (i = 0; i < V; i++)
		for (j = 0; j < V; j++)
			dist[i][j] = graph[i][j];

	/* Add all vertices one by one to
	the set of intermediate vertices.
	---> Before start of an iteration, we
	have shortest distances between all
	pairs of vertices such that the shortest
	distances consider only the
	vertices in set {0, 1, 2, .. k-1} as
	intermediate vertices.
	----> After the end of an iteration,
	vertex no. k is added to the set of
	intermediate vertices and the set
	becomes {0, 1, 2, .. k} */
	for (k = 0; k < V; k++) {
		// Pick all vertices as source one by one
		for (i = 0; i < V; i++) {
			// Pick all vertices as destination for the
			// above picked source
			for (j = 0; j < V; j++) {
				// If vertex k is on the shortest path from
				// i to j, then update the value of
				// dist[i][j]
				if (dist[i][k] + dist[k][j] < dist[i][j])
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}

	// Print the shortest distance matrix
	printSolution(dist);
}

/* A utility function to print solution */
void printSolution(int dist[][V])
{
	printf(
		"The following matrix shows the shortest distances"
		" between every pair of vertices \n");
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dist[i][j] == INF)
				printf("%7s", "INF");
			else
				printf("%7d", dist[i][j]);
		}
		printf("\n");
	}
}

// driver's code
int main()
{
	/* Let us create the following weighted graph
			10
	(0)------->(3)
		|		 /|\
	5 |		 |
		|		 | 1
	\|/		 |
	(1)------->(2)
			3		 */
	int graph[V][V] = { { 0, 5, INF, 10 },
						{ INF, 0, 3, INF },
						{ INF, INF, 0, 1 },
						{ INF, INF, INF, 0 } };

	// Function call
	floydWarshall(graph);
	return 0;
}
```
**OUTPUT:**
```
The following matrix shows the shortest distances between every pair of vertices 
      0      5      8      9
    INF      0      3      4
    INF    INF      0      1
    INF    INF    INF      0
   ```
   
## Implementation in Python

```
# Python3 Program for Floyd Warshall Algorithm

# Number of vertices in the graph
V = 4

# Define infinity as the large
# enough value. This value will be
# used for vertices not connected to each other
INF = 99999

# Solves all pair shortest path
# via Floyd Warshall Algorithm


def floydWarshall(graph):
	""" dist[][] will be the output
	matrix that will finally
		have the shortest distances
		between every pair of vertices """
	""" initializing the solution matrix
	same as input graph matrix
	OR we can say that the initial
	values of shortest distances
	are based on shortest paths considering no
	intermediate vertices """

	dist = list(map(lambda i: list(map(lambda j: j, i)), graph))

	""" Add all vertices one by one
	to the set of intermediate
	vertices.
	---> Before start of an iteration,
	we have shortest distances
	between all pairs of vertices
	such that the shortest
	distances consider only the
	vertices in the set
	{0, 1, 2, .. k-1} as intermediate vertices.
	----> After the end of a
	iteration, vertex no. k is
	added to the set of intermediate
	vertices and the
	set becomes {0, 1, 2, .. k}
	"""
	for k in range(V):

		# pick all vertices as source one by one
		for i in range(V):

			# Pick all vertices as destination for the
			# above picked source
			for j in range(V):

				# If vertex k is on the shortest path from
				# i to j, then update the value of dist[i][j]
				dist[i][j] = min(dist[i][j],
								dist[i][k] + dist[k][j]
								)
	printSolution(dist)


# A utility function to print the solution
def printSolution(dist):
	print("Following matrix shows the shortest distances\
between every pair of vertices")
	for i in range(V):
		for j in range(V):
			if(dist[i][j] == INF):
				print("%7s" % ("INF"), end=" ")
			else:
				print("%7d" % (dist[i][j]), end=' ')
			if j == V-1:
				print()


# Driver's code
if __name__ == "__main__":
    """
			10
		(0)------->(3)
		|		 /|\
		5 |		 |
		|		 | 1
		\|/		 |
		(1)------->(2)
			3		 """
    graph = [[0, 5, INF, 10],
		[INF, 0, 3, INF],
		[INF, INF, 0, 1],
		[INF, INF, INF, 0]
		]
# Function call
    floydWarshall(graph)
```

**OUTPUT:**
```
The following matrix shows the shortest distances between every pair of vertices 
      0      5      8      9
    INF      0      3      4
    INF    INF      0      1
    INF    INF    INF      0
   ```
## Implementation in C#

```
// C# program for Floyd Warshall All
// Pairs Shortest Path algorithm.

using System;

public class AllPairShortestPath {
	readonly static int INF = 99999, V = 4;

	void floydWarshall(int[, ] graph)
	{
		int[, ] dist = new int[V, V];
		int i, j, k;

		// Initialize the solution matrix
		// same as input graph matrix
		// Or we can say the initial
		// values of shortest distances
		// are based on shortest paths
		// considering no intermediate
		// vertex
		for (i = 0; i < V; i++) {
			for (j = 0; j < V; j++) {
				dist[i, j] = graph[i, j];
			}
		}

		/* Add all vertices one by one to
		the set of intermediate vertices.
		---> Before start of a iteration,
			we have shortest distances
			between all pairs of vertices
			such that the shortest distances
			consider only the vertices in
			set {0, 1, 2, .. k-1} as
			intermediate vertices.
		---> After the end of a iteration,
			vertex no. k is added
			to the set of intermediate
			vertices and the set
			becomes {0, 1, 2, .. k} */
		for (k = 0; k < V; k++) {
			// Pick all vertices as source
			// one by one
			for (i = 0; i < V; i++) {
				// Pick all vertices as destination
				// for the above picked source
				for (j = 0; j < V; j++) {
					// If vertex k is on the shortest
					// path from i to j, then update
					// the value of dist[i][j]
					if (dist[i, k] + dist[k, j]
						< dist[i, j]) {
						dist[i, j]
							= dist[i, k] + dist[k, j];
					}
				}
			}
		}

		// Print the shortest distance matrix
		printSolution(dist);
	}

	void printSolution(int[, ] dist)
	{
		Console.WriteLine(
			"Following matrix shows the shortest "
			+ "distances between every pair of vertices");
		for (int i = 0; i < V; ++i) {
			for (int j = 0; j < V; ++j) {
				if (dist[i, j] == INF) {
					Console.Write("INF ");
				}
				else {
					Console.Write(dist[i, j] + " ");
				}
			}

			Console.WriteLine();
		}
	}

	// Driver's Code
	public static void Main(string[] args)
	{
		/* Let us create the following
		weighted graph
			10
		(0)------->(3)
		|		 /|\
		5 |		 |
		|		 | 1
		\|/		 |
		(1)------->(2)
			3			 */
		int[, ] graph = { { 0, 5, INF, 10 },
						{ INF, 0, 3, INF },
						{ INF, INF, 0, 1 },
						{ INF, INF, INF, 0 } };

		AllPairShortestPath a = new AllPairShortestPath();

		// Function call
		a.floydWarshall(graph);
	}
}

```

**OUTPUT:**
```
The following matrix shows the shortest distances between every pair of vertices 
      0      5      8      9
    INF      0      3      4
    INF    INF      0      1
    INF    INF    INF      0
   ```
