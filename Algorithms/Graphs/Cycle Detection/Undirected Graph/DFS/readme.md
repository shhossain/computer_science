# Cycle Detection in Un-directed Graph
There is a cycle in a graph only if there is a back edge present in the graph. A back edge is an edge that is indirectly joining a node to itself (self-loop) or one of its ancestors in the tree produced by DFS. 

To find the back edge to any of its ancestors keep a visited array and if there is a back edge to any visited node then there is a loop and return true.


## Complexity:
| Time Complexity | Auxiliary Space |
| --------------- | --------------- |
| O(V+E)          | O(V)            |

## Implementations
* [Python](#python)
* [C++](#cpp)
* [JAVA](#java)
* [C#](#cSharp)


### Python
```python

class Graph:
    def __init__(self, nodes, is_directed=False):
        if (isinstance(nodes, list)):
            self.nodes = nodes
        elif (isinstance(nodes, int) or nodes.isnumeric()):
            self.nodes = [node for node in range(int(nodes))]

        self.adj_list = {}
        self.is_directed = is_directed

        for node in self.nodes:
            self.adj_list[node] = []

    def add_edge(self, u, v):
        self.adj_list[u].append(v)
        if (not self.is_directed):
            self.adj_list[v].append(u)

    def print_graph(self):
        print("Graph - Adjacency List Representation")
        for node in self.adj_list:
            print("node {} -> {}".format(node, self.adj_list[node]))

    def checkForCycleDFS(self, vis, node, parent):
        vis[node] = 1
        # traverse its neighbours
        for neighbour in self.adj_list[node]:
            if (not vis[neighbour]):
                if self.checkForCycleDFS(vis, neighbour, node): return True
            elif parent != neighbour:
              return True
        return False

    def is_cyclic(self, bfs=True):
        vis = [0] * len(self.nodes)
        # for multiple component of the graph
        for node in self.nodes:
            if (not vis[node]):
                if (bfs):
                    if self.checkForCycleBFS(vis, node): return True
                else:
                    if self.checkForCycleDFS(vis, node, -1): return True
        return False
        
nodes = 5
# create graph with the given nodes
graph = Graph(nodes)

# add edges between the nodes
graph.add_edge(1, 2)
graph.add_edge(1, 0)
graph.add_edge(0, 2) # REMOVE THIS EDGE TO MAKE THE GRAPH ACYCLIC
graph.add_edge(0, 3)
graph.add_edge(3, 4)

# print the constructed graph
graph.print_graph()

# check cycle with dfs algo
print("check cycle with dfs algo =>",graph.is_cyclic(False))
```
### C++ CODE
```cpp
#include <iostream>
#include <limits.h>
#include <list>
using namespace std;
 
// Class for an undirected graph
class Graph {
 
    // No. of vertices
    int V;
 
    // Pointer to an array
    // containing adjacency lists
    list<int>* adj;
    bool isCyclicUtil(int v, bool visited[], int parent);
 
public:
    // Constructor
    Graph(int V);
 
    // To add an edge to graph
    void addEdge(int v, int w);
 
    // Returns true if there is a cycle
    bool isCyclic();
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
 
    // Add w to v’s list.
    adj[v].push_back(w);
 
    // Add v to w’s list.
    adj[w].push_back(v);
}
 
// A recursive function that
// uses visited[] and parent to detect
// cycle in subgraph reachable
// from vertex v.
bool Graph::isCyclicUtil(int v, bool visited[], int parent)
{
 
    // Mark the current node as visited
    visited[v] = true;
 
    // Recur for all the vertices
    // adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i) {
 
        // If an adjacent vertex is not visited,
        // then recur for that adjacent
        if (!visited[*i]) {
            if (isCyclicUtil(*i, visited, v))
                return true;
        }
 
        // If an adjacent vertex is visited and
        // is not parent of current vertex,
        // then there exists a cycle in the graph.
        else if (*i != parent)
            return true;
    }
    return false;
}
 
// Returns true if the graph contains
// a cycle, else false.
bool Graph::isCyclic()
{
 
    // Mark all the vertices as not
    // visited and not part of recursion
    // stack
    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    // Call the recursive helper
    // function to detect cycle in different
    // DFS trees
    for (int u = 0; u < V; u++) {
 
        // Don't recur for u if
        // it is already visited
        if (!visited[u])
            if (isCyclicUtil(u, visited, -1))
                return true;
    }
    return false;
}
 
// Driver program to test above functions
int main()
{
    Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 1);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.isCyclic() ? cout << "Graph contains cycle\n"
                  : cout << "Graph doesn't contain cycle\n";
 
    Graph g2(3);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.isCyclic() ? cout << "Graph contains cycle\n"
                  : cout << "Graph doesn't contain cycle\n";
 
    return 0;
}


```
```
OUTPUT:
```
```
Graph contains cycle
Graph doesn't contain cycle
```
### JAVA CODE
```java
// A Java Program to detect cycle in an undirected graph
import java.io.*;
import java.util.*;
@SuppressWarnings("unchecked")
// This class represents a
// directed graph using adjacency list
// representation
class Graph {

	// No. of vertices
	private int V;

	// Adjacency List Representation
	private LinkedList<Integer> adj[];

	// Constructor
	Graph(int v)
	{
		V = v;
		adj = new LinkedList[v];
		for (int i = 0; i < v; ++i)
			adj[i] = new LinkedList();
	}

	// Function to add an edge
	// into the graph
	void addEdge(int v, int w)
	{
		adj[v].add(w);
		adj[w].add(v);
	}

	// A recursive function that
	// uses visited[] and parent to detect
	// cycle in subgraph reachable
	// from vertex v.
	Boolean isCyclicUtil(int v, Boolean visited[],
						int parent)
	{
		// Mark the current node as visited
		visited[v] = true;
		Integer i;

		// Recur for all the vertices
		// adjacent to this vertex
		Iterator<Integer> it = adj[v].iterator();
		while (it.hasNext()) {
			i = it.next();

			// If an adjacent is not
			// visited, then recur for that
			// adjacent
			if (!visited[i]) {
				if (isCyclicUtil(i, visited, v))
					return true;
			}

			// If an adjacent is visited
			// and not parent of current
			// vertex, then there is a cycle.
			else if (i != parent)
				return true;
		}
		return false;
	}

	// Returns true if the graph
	// contains a cycle, else false.
	Boolean isCyclic()
	{

		// Mark all the vertices as
		// not visited and not part of
		// recursion stack
		Boolean visited[] = new Boolean[V];
		for (int i = 0; i < V; i++)
			visited[i] = false;

		// Call the recursive helper
		// function to detect cycle in
		// different DFS trees
		for (int u = 0; u < V; u++) {

			// Don't recur for u if already visited
			if (!visited[u])
				if (isCyclicUtil(u, visited, -1))
					return true;
		}

		return false;
	}

	// Driver method to test above methods
	public static void main(String args[])
	{

		// Create a graph given
		// in the above diagram
		Graph g1 = new Graph(5);
		g1.addEdge(1, 0);
		g1.addEdge(0, 2);
		g1.addEdge(2, 1);
		g1.addEdge(0, 3);
		g1.addEdge(3, 4);
		if (g1.isCyclic())
			System.out.println("Graph contains cycle");
		else
			System.out.println("Graph doesn't contain cycle");

		Graph g2 = new Graph(3);
		g2.addEdge(0, 1);
		g2.addEdge(1, 2);
		if (g2.isCyclic())
			System.out.println("Graph contains cycle");
		else
			System.out.println("Graph doesn't contain cycle");
	}
}


```
### C# CODE
```csharp
// C# Program to detect cycle in an undirected graph
using System;
using System.Collections.Generic;

// This class represents a directed graph
// using adjacency list representation
class Graph {
	private int V; // No. of vertices

	// Adjacency List Representation
	private List<int>[] adj;

	// Constructor
	Graph(int v)
	{
		V = v;
		adj = new List<int>[ v ];
		for (int i = 0; i < v; ++i)
			adj[i] = new List<int>();
	}

	// Function to add an edge into the graph
	void addEdge(int v, int w)
	{
		adj[v].Add(w);
		adj[w].Add(v);
	}

	// A recursive function that uses visited[]
	// and parent to detect cycle in subgraph
	// reachable from vertex v.
	Boolean isCyclicUtil(int v, Boolean[] visited,
						int parent)
	{
		// Mark the current node as visited
		visited[v] = true;

		// Recur for all the vertices
		// adjacent to this vertex
		foreach(int i in adj[v])
		{
			// If an adjacent is not visited,
			// then recur for that adjacent
			if (!visited[i]) {
				if (isCyclicUtil(i, visited, v))
					return true;
			}

			// If an adjacent is visited and
			// not parent of current vertex,
			// then there is a cycle.
			else if (i != parent)
				return true;
		}
		return false;
	}

	// Returns true if the graph contains
	// a cycle, else false.
	Boolean isCyclic()
	{
		// Mark all the vertices as not visited
		// and not part of recursion stack
		Boolean[] visited = new Boolean[V];
		for (int i = 0; i < V; i++)
			visited[i] = false;

		// Call the recursive helper function
		// to detect cycle in different DFS trees
		for (int u = 0; u < V; u++)

			// Don't recur for u if already visited
			if (!visited[u])
				if (isCyclicUtil(u, visited, -1))
					return true;

		return false;
	}

	// Driver Code
	public static void Main(String[] args)
	{
		// Create a graph given in the above diagram
		Graph g1 = new Graph(5);
		g1.addEdge(1, 0);
		g1.addEdge(0, 2);
		g1.addEdge(2, 1);
		g1.addEdge(0, 3);
		g1.addEdge(3, 4);
		if (g1.isCyclic())
			Console.WriteLine("Graph contains cycle");
		else
			Console.WriteLine(
				"Graph doesn't contain cycle");

		Graph g2 = new Graph(3);
		g2.addEdge(0, 1);
		g2.addEdge(1, 2);
		if (g2.isCyclic())
			Console.WriteLine("Graph contains cycle");
		else
			Console.WriteLine(
				"Graph doesn't contain cycle");
	}
}

```
