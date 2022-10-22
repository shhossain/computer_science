# Graphs 
A Graph is a non-linear data structure consisting of vertices and edges. The vertices are sometimes also referred to as nodes and the edges are lines or arcs that connect any two nodes in the graph. More formally a Graph is composed of a set of vertices( V ) and a set of edges( E ). The graph is denoted by G(E, V).


## Components of a Graph
- **[Vertices](#verticies)** - A vertex is a node of the graph. It can be denoted by any symbol such as V, U, X, Y, etc. A vertex may also be referred to as a node or a point.
- **[Edges](#edges)** - An edge is a connection between two nodes. It can be denoted by any symbol such as E, F, G, H, etc. An edge may also be referred to as a link or a line.
- **[Weight](#weight)** - A weight is a value associated with an edge. It can be denoted by any symbol such as W, X, Y, Z, etc. A weight may also be referred to as a cost.

## Types of Graphs
- [Undirected Graph](#undirected-graph)
- [Directed Graph](#directed-graph)
- [Weighted Graph](#weighted-graph)

## Common Graph Representations
- [Adjacency Matrix](#adjacency-matrix)
- [Adjacency List](#adjacency-list)


## Vertices
## Edges
## Weight
### Example
Pic Will be added

## Undirected Graph
An undirected graph is a graph where all the edges are bidirectional. That is, the undirected graph does not move in any direction.

### Example
Pic Will be added

## Directed Graph
A directed graph is a graph where all the edges are unidirectional. That is, the directed graph moves in a particular direction.

### Example
Pic Will be added

## Weighted Graph
A weighted graph is a graph where all the edges have a weight associated with them. That is, the weighted graph has a value associated with each edge.

### Example
Pic Will be added


## Adjacency Matrix
An adjacency matrix is a 2D array of size V x V where V is the number of vertices in a graph. Let the 2D array be adj[][], a slot adj[i][j] = 1 indicates that there is an edge from vertex i to vertex j. Adjacency matrix for undirected graph is always symmetric. Adjacency Matrix is also used to represent weighted graphs. If adj[i][j] = w, then there is an edge from vertex i to vertex j with weight w.

### Example
Pic Will be added

## Adjacency List
An adjacency list is a collection of unordered lists used to represent a finite graph. Each list describes the set of neighbors of a node in the graph. The number of lists is equal to the number of vertices in the graph. If there are n vertices, then there are n adjacency lists. An adjacency list is an array of linked lists. The size of the array is equal to the number of vertices. Let the array be array[]. An entry array[i] represents the linked list of vertices adjacent to the ith vertex. This representation can also be used to represent a weighted graph. The weights of edges can be represented as nodes with additional information.

### Example
```cpp
// A C++ Program to demonstrate adjacency list
// representation of graphs
#include <iostream>
#include <vector>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
           cout << "-> " << x;
        printf("\n");
    }
}

// Driver code
int main()
{
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    printGraph(adj, V);
    return 0;
}
```
Pic Will be added

## Graph Topics
1. [Graph Traversal](Traversal%20Algorithms/readme.md)
    - [Breadth First Search](Traversal%20Algorithms/BreadthFirstSearch/readme.md)
    - [Depth First Search](Traversal%20Algorithms/DepthFirstSearch/readme.md)]
2. [Cycle Detection](Cycle%20Detection/readme.md)
    - [Undirected Graph](Cycle%20Detection/Undirected%20Graph/readme.md)
        - [DFS](Cycle%20Detection/Undirected%20Graph/DFS/readme.md)
        - [BFS](Cycle%20Detection/Undirected%20Graph/BFS/readme.md)
    - [Directed Graph](Cycle%20Detection/Directed%20Graph/readme.md)
        - [DFS](notadded)
        - [BFS](notadded)
3. [Shortest Path](Shortest%20Path/readme.md)
    - [Dijkstra's Algorithm](Traversal%20Algorithms/Dijkstra'sAlgorithm/readme.md)
    - [Bellman Ford Algorithm](Shortest%20Path/BellmanFordAlgorithm/readme.md)
    - [Floyd Warshall Algorithm](Shortest%20Path/FloydWarshallAlgorithm/readme.md)
4. [Spanning Tree Algorithm](Spanning%20Tree%20Algorithm/readme.md)
    - [KruskalsAlgorithm](Spanning%20Tree%20Algorithm\KruskalsAlgorithm/readme.md)
    - [PrimsAlgorithm](Spanning%20Tree%20Algorithm\PrimsAlgorithm/readme.md)]    