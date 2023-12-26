# Graphs 
A graph is a data structure used in computer science and mathematics. Graphs are used to model pairwise relations between objects and are the most useful data structures for many real-world applications, such as the airline route network. Graphs are a non-linear data structure that allows us to define complicated relations more easily. A graph consists of a set of vertices and edges.

The vertices of a graph, also called nodes or points, are a finite but possibly changeable set of values and are written as a set of names, i.e. V=(A, B, C, ..). If we were to model the airline route network as a graph the cities would be represented as vertices. For example:

| Cities                |
|-----------------------|
| New York ( N )        |
| Los Angeles ( L )     |
| Houston ( H )         |
| San Francisco ( S )   |
| Atlanta ( A )         |
| Denver ( D )          |

The set of graph vertices would be defined as: 
V = (N, L, H, S, A, D)

The edges or connections between vertices are called edges. These edges are known as arcs, lines, and arrows. Edges are written as a set of unordered pairs, i.e. E= ((A,B), (A,C), ..). They represent the relations between values. In our airline example the graph edges would be the available flights between cities.

| Flights                               |
|---------------------------------------|
| New York to Atlanta (N, A)            |
| Atlanta to Denver (A, D)              |
| Atlanta to Houston (A, H)             |
| Atlanta to Los Angeles (A, L)         |
| Denver to San Francisco (D, S)        |
| Denver to Houston (D, H)              |
| San Francisco to Los Angeles (S, L)   |
| Los Angeles to Houston (L, H)         |

The set of graph edges would be defined as: 
E = ((N, A), (A, D), (A, H), (A, L), (D, S), (D, H), (S, L), (L, H))

These vertices and edges are what make up a graph. More formally, a graph is defined as a set of vertices( V ), a set of edges( E ) and is denoted by G(E, V).

Flights = G(E, V) = G( {(N, A), (A, D), (A, H), (A, L), (D, S), (D, H), (S, L), (L, H)},  {N, L, H, S, A, D})

A graph representing the relation between cities and flights would look like this:

### Flights Digraph
<img src="graphImages\directedFlightsGraph.png " width="225" />

With this graph we can now answer questions like: Can I get to San Francisco from New York? How many layovers are there between Atlanta and Denver? Can I get to Houston from Los Angeles? How many different flights are there from New York to Los Angeles? We can look at the graph and count the edges and vertices as we move from one city to another. But instead of calculating solutions by hand we can use algorithms like Dijkstra's, Bellman-Ford, or Kruskal's to give us the answers to those questions. 

## Types of Graphs
There are a few different types of graphs that are used in computer science. Note that some graph algorithms will only work on specific types of graphs.

- Directed Graph - Also called a Digraph, is a graph where edges of the graph have only one direction, these directions are marked with arrows. The above graph is an example of a directed graph.

    Directed Flights Graph

    <img src="graphImages\directedFlightsGraph.png " width="150" />

- Undirected Graph - A graph where edges of the graph are two-way paths or relations. If we were to update the flights examples to be round-trip or two way we would get an undirected graph.

    Undirected Flights Graph

    <img src="graphImages\undirectedFlightsGraph.png " width="150" />

- Unweighted Graph - A graph where the edges of the graph do not have any weight or cost associated with them. Unweighted graphs are used to model connections, such as social networks, where the cost of connecting two vertices does not matter. The above graph examples are all unweighted graphs.

- Weighted Graph - A graph where edges of the graph have costs or weights associated with them. As we traverse the graph, we can add up the costs of the edges to get the total cost of taking the route. From these costs we can determine the shortest path or the cheapest route. If we add weights to our flight graph, we get the following weighted graph.

    Edge costs: N->A: 3, A->D: 2, A->H: 3, A->L: 2, D->S: 4, D->H: 1, S->L: 2, L->H: 4

    Weighted Flights Graph

    <img src="graphImages\weightedDirectedFlightsGraph.png " width="150" />

- Connected Graphs 
    - Undirected Connected and Disconnected Graphs - An undirected graph is considered connected if there exists a path between every pair of vertices. Otherwise, it is disconnected. In an undirected connected graph, you can get to every vertex in the graph from any other vertex. The Undirected Flights Graph is also an undirected connected graph but if we remove the edge between N and A it would create a disconnected graph.

        Disconnected Flights Graph

        <img src="graphImages\disconnectedFlightsGraph.png " width="150" />

    - Connected Directed Graphs - A directed graph can be strongly or weakly connected. A strongly connected digraph has a path from every vertex to every other vertex. A weakly connected digraph is one where every vertex is connected to the graph in some way. See [Kosaraju's Algorithm](Kosaraju%20Algorithm/readme.md) for calculating strongly connected components in a graph. Our digraph flight example is not a strongly connected graph, but it is weakly connected. To create a strongly connected graph we would have to add more connecting edges.

- Acyclic and Cyclic Graphs - Graphs can have cycles or paths that allow us to get back to the same vertex. In other words, a cycle is a path that starts and ends at the same vertex. A graph is cyclic if it has one or more of these loops and acyclic if it does not. Not all graphs have a cycle, some algorithms assume that a graph has no cycles.  For example, Prim’s algorithm assumes there are no cycles and Floyd-Warshall’s algorithm assumes there are no negative cycles (a cycle where all the edge costs are negative). If we reverse one of the edges in our digraph, A->H and make it H->A we would have a graph with cycles. (cycles in red and orange)

    Cycles Flights Graph

    <img src="graphImages\directedCyclesFlightsGraph.png " width="150" />

- [Tree Graphs](Graphs/Tree%20Based%20Algorithms/readme.md) - Trees are acyclic, connected graphs where the vertices are connected in such a way that there is only one path between vertices. A tree graph will have n vertices and n-1 edges with each vertex connected to the tree. A tree can have either directed or undirected edges. If we remove edges from our flights digraph, we will get a tree graph. (Both graphs are the same, just drawn in different ways)

    Tree Flights Graph

    <img src="graphImages\directedTreeFlightsGraph.png " width="300" />

## Graph Components
Here is a brief explanation of the type of edges and vertices a graph may have.
- Edges - An edge is a connection between two vertices. It can be denoted by any symbol such as E, F, G, H, etc. An edge may also be referred to as a link or a line.
    - Weighted Edge - When a weight or cost value is associated with an edge it is a weighted edge. The weight may also be referred to as a cost. This cost can be distance, money, time, etc. These weights can be zero, negative, positive, or infinite, depending on the relations the graph represents. See Weighted Flights Graph for an example.
    - Undirected - A undirected edge is an edge that allows for to two-way connections. In other words, if vertex A is connected to B then B is connected to A. See Undirected Flights Graph for an example.
    - Directed - A directed edge is an edge that only goes one way. In other words, vertex A is connected to B but B is not connected to A. See Directed Flights Graph for an example.

- Vertices - A vertex is a node of the graph. It can be denoted by any symbol such as V, U, X, Y, etc. Vertices also have a degree, or the number of edges connected to it. A vertex’s in-degree is defined as the number of edges that point to a vertex. The vertex’s out-degree is the number of edges that point to other vertices. In an undirected graph the in and out degrees are the same. The different types of vertices are defined by these degrees.
    - Isolated vertex - No edges pointing to the vertex, and it has no outgoing edges. Both the in-degree and out-degree are zero. In the Disconnected Flights Graph, vertex N is an isolated vertex.
    - Source vertex - No edges point to the vertex, its in-degree is zero. In the Directed Flights Graph, vertex N is a source vertex as there are no flights or edges going to the city.
    - Sink vertex - Has no outgoing edges, it’s out-degree is zero. In the Directed Flights Graph, vertex H is a sink vertex as there are no flights going out of that city.
    - [Articulation Points](Graphs/Articulation%20Points/readme.md) - Also called a bridge, an articulation point is a vertex in an undirected graph that would create a disconnected graph if removed. If we were to remove A and all its edges from the Undirected Flights Graph, we would get a disconnected graph. A is an articulation point.


## Common Graph Representations
To run algorithms on graphs we need to store the vertex and edge info in a data structure. There are many ways to represent a graph, but the two most common ways are by using an adjacency matrix or list.

### Adjacency Matrix
An adjacency matrix is a 2D array of size V x V where V is the number of vertices in a graph. Let the 2D array be adj[][], a slot adj[i][j] = 1, indicates that there is an edge from vertex i to vertex j. An Adjacency matrix for an undirected graph is always symmetric across the diagonal.  An Adjacency Matrix can also represent weighted graphs. If adj[i][j] = w, where w is the cost associated with that edge, then there is an edge from vertex i to vertex j with weight w.

#### Example
Adjacency matrix for the undirected and directed flight graphs shown above:

Undirected Flights
|   | N | L | H | S | A | D |
|---|---|---|---|---|---|---|
| N |   |   |   |   | 1 |   |
| L |   |   | 1 | 1 | 1 |   |
| H |   | 1 |   |   | 1 | 1 |
| S |   | 1 |   |   |   | 1 |
| A | 1 | 1 | 1 |   |   | 1 |
| D |   |   | 1 | 1 | 1 |   |

Weighted Directed Flights
Edge costs: N->A:3, A->D:2, A->H:3, A->L:2, D->S:4, D->H:1, S->L:2, L->H:4
|   | N | L | H | S | A | D |
|---|---|---|---|---|---|---|
| N |   |   |   |   | 3 |   |
| L |   |   | 4 |   |   |   |
| H |   |   |   |   |   |   |
| S |   | 2 |   |   |   |   |
| A |   | 2 | 3 |   |   | 2 |
| D |   |   | 1 | 4 |   |   |

#### Adjacency Matrix code
```cpp
// A C++ Program to demonstrate adjacency matrices
// representation of graphs
#include <iostream>
#include <vector>
using namespace std;

// A utility function to print the adjacency matrix
// representation of graph
void printGraph(vector<vector<int>> adj, int V)
{
    cout << "Adjacency matrix of graph\n";

    //print out column headers
    cout << "  | ";
    for (int h = 0; h < V; h++)
    {
        cout << h << " ";
    }
    cout << endl;
    for (int h = 0; h < V; h++)
    {
        cout << "---";
    }
    cout << endl;

    //print out matrix values
    for (int r = 0; r < V; ++r)
    {
        cout << r << " | ";
        for (int c = 0; c < V; c++)
        {
            cout << adj[r][c] << " ";
        }
        cout << endl;
    }
}

//Driver code
int main()
{
    const int V = 5; // number of vertices

    vector<vector<int>> adjMatrix(V, vector<int>(V, 0));

    // Add edges
    adjMatrix[0][1] = 1;
    adjMatrix[0][4] = 1;
    adjMatrix[1][2] = 1;
    adjMatrix[1][3] = 1;
    adjMatrix[1][4] = 1;
    adjMatrix[2][3] = 1;
    adjMatrix[3][4] = 1;
    printGraph(adjMatrix, V);
    return 0;
}
```

### Adjacency List
An adjacency list is a collection of linked lists used to represent a graph. Each list describes the set of neighbors of a vertex in the graph. The number of lists is equal to the number of vertices in the graph. If there are n vertices, then there are n adjacency lists. The size of the array is equal to the number of vertices. Let the array be array[]. An entry array[i] represents the linked list of vertices adjacent to the i-th vertex. This representation can also be used to represent a weighted graph. The weights of edges can be represented as vertices with additional information.

#### Example
Undirected Flights
N -> A
L -> H
H ->
S -> L
A -> D, H, L
D -> S, H

Weighted Directed Flights
N -> A(3)
L -> H(4)
H ->
S -> L(2)
A -> D(2), H(3), L(2)
D -> S(4), H(1)

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
        cout << "\n";
    }
}

// Driver code
int main()
{
    int const V = 5;
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