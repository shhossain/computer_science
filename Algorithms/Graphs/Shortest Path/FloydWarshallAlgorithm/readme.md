# Floyd Warshall Algorithm
Floyd–Warshall algorithm (also known as Floyd's algorithm, the Roy–Warshall algorithm, the Roy–Floyd algorithm, or the WFI algorithm) is an algorithm for finding shortest paths in a directed weighted graph with positive or negative edge weights (but with no negative cycles). A single execution of the algorithm will find the lengths (summed weights) of shortest paths between all pairs of vertices. Although it does not return details of the paths themselves, it is possible to reconstruct the paths with simple modifications to the algorithm.

## Complexity
### Time Complexity
There are three loops. Each loop has constant complexities. So, the time complexity of the Floyd-Warshall algorithm is O(n^3)

### Space Complexity
The space complexity of the Floyd-Warshall algorithm is O(n^2)

## Pseudocode
```
Create a |V| x |V| matrix, M, that will describe the distances between vertices
For each cell (i, j) in M:
    if i == j:
        M[i][j] = 0
    if (i, j) is an edge in E:
        M[i][j] = weight(i, j)
    else:
        M[i][j] = infinity
for k from 1 to |V|:
    for i from 1 to |V|:
        for j from 1 to |V|:
            if M[i][j] > M[i][k] + M[k][j]:
                M[i][j] = M[i][k] + M[k][j]
```

## Implementation
* [C++](#cpp)
* [C](#c)
* [C#](#csharp)
* [Java](#java)
* [Javascript](#javascript)
* [PHP](#php)
* [Python3](#python3)

(Credit for the code - www.geeksforgeeks.org/floyd-warshall-algorithm-dp-16/)
### CPP
```cpp
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
	/* Let us create the following weighted graph
			10
	(0)------->(3)
		|	 /|\
	5 |	 |
		|	 | 1
	\|/	 |
	(1)------->(2)
			3	 */
	int graph[V][V] = { { 0, 5, INF, 10 },
						{ INF, 0, 3, INF },
						{ INF, INF, 0, 1 },
						{ INF, INF, INF, 0 } };

	// Function call
	floydWarshall(graph);
	return 0;
}
```

### C
```c
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

### CSHARP
```csharp
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

### Java
```java
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

### Javascript
```javascript
// A JavaScript program for Floyd Warshall All
// Pairs Shortest Path algorithm.

var INF = 99999;
class AllPairShortestPath {
constructor() {
	this.V = 4;
}

floydWarshall(graph) {
	var dist = Array.from(Array(this.V), () => new Array(this.V).fill(0));
	var i, j, k;

	// Initialize the solution matrix
	// same as input graph matrix
	// Or we can say the initial
	// values of shortest distances
	// are based on shortest paths
	// considering no intermediate
	// vertex
	for (i = 0; i < this.V; i++) {
	for (j = 0; j < this.V; j++) {
		dist[i][j] = graph[i][j];
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
	for (k = 0; k < this.V; k++) {
	// Pick all vertices as source
	// one by one
	for (i = 0; i < this.V; i++) {
		// Pick all vertices as destination
		// for the above picked source
		for (j = 0; j < this.V; j++) {
		// If vertex k is on the shortest
		// path from i to j, then update
		// the value of dist[i][j]
		if (dist[i][k] + dist[k][j] < dist[i][j]) {
			dist[i][j] = dist[i][k] + dist[k][j];
		}
		}
	}
	}

	// Print the shortest distance matrix
	this.printSolution(dist);
}

printSolution(dist) {
	document.write(
	"Following matrix shows the shortest " +
		"distances between every pair of vertices<br>"
	);
	for (var i = 0; i < this.V; ++i) {
	for (var j = 0; j < this.V; ++j) {
		if (dist[i][j] == INF) {
		document.write(" INF ");
		} else {
		document.write("  " + dist[i][j] + " ");
		}
	}

	document.write("<br>");
	}
}
}
// Driver Code
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
var graph = [
[0, 5, INF, 10],
[INF, 0, 3, INF],
[INF, INF, 0, 1],
[INF, INF, INF, 0],
];

var a = new AllPairShortestPath();

// Print the solution
a.floydWarshall(graph);
```

### PHP
```php
<?php
// PHP Program for Floyd Warshall Algorithm

// Solves the all-pairs shortest path problem
// using Floyd Warshall algorithm
function floydWarshall ($graph, $V, $INF)
{
	/* dist[][] will be the output matrix
	that will finally have the shortest
	distances between every pair of vertices */
	$dist = array(array(0,0,0,0),
				array(0,0,0,0),
				array(0,0,0,0),
				array(0,0,0,0));

	/* Initialize the solution matrix same
	as input graph matrix. Or we can say the
	initial values of shortest distances are
	based on shortest paths considering no
	intermediate vertex. */
	for ($i = 0; $i < $V; $i++)
		for ($j = 0; $j < $V; $j++)
			$dist[$i][$j] = $graph[$i][$j];

	/* Add all vertices one by one to the set
	of intermediate vertices.
	---> Before start of an iteration, we have
	shortest distances between all pairs of
	vertices such that the shortest distances
	consider only the vertices in set
	{0, 1, 2, .. k-1} as intermediate vertices.
	----> After the end of an iteration, vertex
	no. k is added to the set of intermediate
	vertices and the set becomes {0, 1, 2, .. k} */
	for ($k = 0; $k < $V; $k++)
	{
		// Pick all vertices as source one by one
		for ($i = 0; $i < $V; $i++)
		{
			// Pick all vertices as destination
			// for the above picked source
			for ($j = 0; $j < $V; $j++)
			{
				// If vertex k is on the shortest path from
				// i to j, then update the value of dist[i][j]
				if ($dist[$i][$k] + $dist[$k][$j] <
									$dist[$i][$j])
					$dist[$i][$j] = $dist[$i][$k] +
									$dist[$k][$j];
			}
		}
	}

	// Print the shortest distance matrix
	printSolution($dist, $V, $INF);
}

/* A utility function to print solution */
function printSolution($dist, $V, $INF)
{
	echo "The following matrix shows the " .
			"shortest distances between " .
				"every pair of vertices \n";
	for ($i = 0; $i < $V; $i++)
	{
		for ($j = 0; $j < $V; $j++)
		{
			if ($dist[$i][$j] == $INF)
				echo "INF " ;
			else
				echo $dist[$i][$j], " ";
		}
		echo "\n";
	}
}

// Drivers' Code

// Number of vertices in the graph
$V = 4 ;

/* Define Infinite as a large enough
value. This value will be used for
vertices not connected to each other */
$INF = 99999 ;

/* Let us create the following weighted graph
		10
(0)------->(3)
	|	 /|\
5 |	 |
	|	 | 1
\|/	 |
(1)------->(2)
		3	 */
$graph = array(array(0, 5, $INF, 10),
			array($INF, 0, 3, $INF),
			array($INF, $INF, 0, 1),
			array($INF, $INF, $INF, 0));

// Function call
floydWarshall($graph, $V, $INF);
```

### Python3
```python3
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
				print("%7d\t" % (dist[i][j]), end=' ')
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
