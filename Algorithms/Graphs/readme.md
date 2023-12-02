# Graphs 
A graph is a data structure used in computer science and mathematics. Graphs are used to model pairwise relations between objects and are the most useful data structures for many real-world applications, such as the airline route network. Graphs are a non-linear data structure that allows us to more easily define complicated relations. A graph consists of a set of vertices and edges.

The vertices of a graph, also called nodes or points, are a finite but possibly changeable set of values and are written as a set of names, e.g. V=(A, B, C, ..). If we were to model the airline route network as a graph the cities would be represented as vertices. For example:

Cities         
New York -> NY
Los Angeles -> LA
Houston -> H
San Francisco -> SF
Atlanta -> A
Denver -> D

The set of graph vertices would be defined as: 
V = (NY, LA, H, SF, A, D)

The edges or connections between vertices are called edges. These edges are known as arcs, lines, and arrows. Edges are written as a set of unordered pairs, e.g. E= ((A,B), (A,C), ..). They represent the relations between values. In our airline example the graph edges would be the available flights between cites.

Flights
New York to Atlanta (NY, A)
Atlanta to Denver (A, D)
Atlanta to Houston (A, H)
Atlanta to Los Angeles (A, LA)
Denver to San Francisco (D, SF)
Denver to Houston (D, H)
San Francisco to Los Angeles (SF, LA)
Los Angeles to Houston (LA, H)

The set of graph edges would be defined as: 
E = ((NY, A), (A, D), (A, H), (A, LA), (D, SF), (D, H), (SF, LA), (LA, H))

These vertices and edges are what make up a graph. More formally, a graph is defined as a set of vertices( V ), a set of edges( E ) and is denoted by G(E, V). flights = G(E, V)

A graph representing the relation between cities and flights would look like this:

TODO add image of directed graph
(![alt text](graph.png "Title"))


With this graph we can now answer questions like: Can I get to San Francisco from New York? How many layovers are there between Atlanta and Denver? Can I get to Houston from Los Angeles? How many different flights are there from New York to Los Angeles? We can look at the graph and count the edges and vertices as we move from one city to another. But instead of calculating solutions by hand we can use algorithms like Dijkstra's, Bellman-Ford, or Kruskal's to give us the answers to those questions. 

## Types of Graphs
There are a few different types of graphs that are used in computer science. Some graph algorithms will only work on a specific type of graph.  It is important to remember what kind of graph is 

- Undirected Graph - A graph where edges of the graph are two-way paths or relations. 
TODO add example
- Directed Graph - Also called a Digraph, is a graph where edges of the graph go only one way, usually marked with arrows. 
TODO add example
- Weighted/Unweighted Graph - A graph where edges of the graph have costs or weights associated with them.
TODO add example
- [Tree Graphs](Graphs/Tree%20Based%20Algorithms/readme.md) - A graph with n vertices and n-1 edges where there exists only one path between vertices.
TODO add example
- Connected and Disconnected Graph - A graph were not all of the nodes are connected.  
TODO add example
    - Complete Graph - A graph where all of the nodes are connected to all of the other nodes.
- Acyclic and Cyclic Graphs - A graph that has a cycle. A cycle is a path that starts and ends at the same vertex.
- Sparse Graph 
TODO add example
- Dense Graph
TODO add example


## Graph Components
The typed of edges and vertices a graph has can vary. Here is a brief explanation of some of them.
- Edges - An edge is a connection between two nodes. It can be denoted by any symbol such as E, F, G, H, etc. An edge may also be referred to as a link or a line. 
    - Weighted Edge - When a weight or cost value associated with an edge it is an weighted edge. The weight may also be referred to as a cost. This cost can be distance, money, time, etc. These weights can be zero, negative, positive, or infinite. It depends on the relations the graph is representing.
    - Undirected - A undirected edge is an edge that allows for to two way connections. In other words, if vertex A is connected to B then B is connected to A. The flight graph shown above is undirected edges. 
    TODO fix example
    - Directed - A directed edge is an edge that only goes one way. In other words, vertex A is connected to B but B is not connected to A. If we were to alter the flight list in the above example and change the flights to be one-way then the edges would become directed edges. 
    TODO fix example

- Vertices - A vertex is a node of the graph. It can be denoted by any symbol such as V, U, X, Y, etc. Vertices also have a degree, or the number of edges connected to it. A vertex’s in-degree is defined as the number of edges that point to a vertex. The vertex’s out-degree is the number of edges that point to other vertices. The different types of vertices are defined by these degrees.
    - Isolated vertex - Has no edges pointing to the vertex, and it has no outgoing edges. Its in-degree and out-degree is zero. If we were to add the city Oklahoma to our list of vertices it would be an isolated vertex as there are no flights going in or our of the city.   
    - Source vertex - Has no edges point to the vertex, its in-degree is zero. The city, New York, is source vertex as there are no flights going to the city. 
    - Sink vertex - Has no outgoing edges, it’s out-degree is zero. The city Houston is a sink vertex as there are no flights going out of that city.
    - [Articulation Points](Graphs/Articulation%20Points/readme.md) - Also called a bridge, is vertex in an undirected graph that would created a disconnected graph if removed.
    TODO add example


## Common Graph Representations
In order to run algorithms on graphs we need to be able to store the vertex and edge data in a data structure. There are many different ways to represent a graph but the two most common ways are by using an adjacency matrix or list. 

### Adjacency Matrix
An adjacency matrix is a 2D array of size V x V where V is the number of vertices in a graph. Let the 2D array be adj[][], a slot adj[i][j] = 1 indicates that there is an edge from vertex i to vertex j. Adjacency matrix for undirected graph is always symmetric. Adjacency Matrix is also used to represent weighted graphs. If adj[i][j] = w, then there is an edge from vertex i to vertex j with weight w.

#### Example
TODO add image

#### Adjacency Matrix code
TODO add example code 

### Adjacency List
An adjacency list is a collection of unordered lists used to represent a finite graph. Each list describes the set of neighbors of a node in the graph. The number of lists is equal to the number of vertices in the graph. If there are n vertices, then there are n adjacency lists. An adjacency list is an array of linked lists. The size of the array is equal to the number of vertices. Let the array be array[]. An entry array[i] represents the linked list of vertices adjacent to the ith vertex. This representation can also be used to represent a weighted graph. The weights of edges can be represented as nodes with additional information.

#### Example
TODO - Pic Will be added

#### Adjacency list code
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

## Graph Topics and Algorithms
1. [Graph Traversal](Traversal%20Algorithms/readme.md)
    - [Breadth First Search](Traversal%20Algorithms/BreadthFirstSearch/readme.md)
    - [A* Search](Traversal%20Algorithms/AstarSearch/readme.md)
    - [Depth First Search](Traversal%20Algorithms/DepthFirstSearch/readme.md)
2. [Topological Sorts](Topological%20Sort/readme.md)
3. [Cycle Detection](Cycle%20Detection/readme.md)
    - Undirected Graph
        - [DFS](Cycle%20Detection/Undirected%20Graph/DFS/readme.md)
        - [BFS](Cycle%20Detection/Undirected%20Graph/BFS/readme.md)
    - [Directed Graph](Cycle%20Detection/Directed%20Graph/readme.md)
4. [Shortest Path](Shortest%20Path/readme.md)
    - [Dijkstra's Algorithm](Traversal%20Algorithms/Dijkstra'sAlgorithm/readme.md)
    - [Bellman Ford Algorithm](Shortest%20Path/BellmanFordAlgorithm/readme.md)
    - [Bellman-Ford Algorithm](Bellman-Ford%20Algorithm/readme.md)
    - [Floyd Warshall Algorithm](Shortest%20Path/FloydWarshallAlgorithm/readme.md)
5. [Spanning Tree Algorithm](Spanning%20Tree%20Algorithm/readme.md)
    - [KruskalsAlgorithm](Spanning%20Tree%20Algorithm/KruskalsAlgorithm/readme.md)
    - [PrimsAlgorithm](Spanning%20Tree%20Algorithm/PrimsAlgorithm/readme.md)
    - [Disjoint Set Union / Union find](DSU/readme.md)
6. Strongly Connected Components
    - [Kosaraju's Algorithm](Kosaraju%20Algorithm/readme.md)