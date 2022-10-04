# Breadth First Search
Breadth First Search (BFS) is an algorithm for traversing or searching tree or graph data structures. It starts at the tree root (or some arbitrary node of a graph, sometimes referred to as a 'search key'[1]), and explores all of the neighbor nodes at the present depth prior to moving on to the nodes at the next depth level. It uses the opposite strategy as depth-first search, which instead explores the node branch as far as possible before being forced to backtrack and expand other nodes.

## Complexity
| Algorithm | Average | Worst case |
| --- | --- | --- |
| Space | O(\|V\|+\|E\|) | O(\|V\|+\|E\|) |
| Search | O(\|V\|+\|E\|) | O(\|V\|+\|E\|) |


## Pseudocode
```
procedure BFS(G,v) is
    let Q be a queue
    label v as discovered
    Q.enqueue(v)
    while Q is not empty do
        v := Q.dequeue()
        if v is the goal then
            return v
        for all edges from v to w in G.adjacentEdges(v) do
            if w is not labeled as discovered then
                label w as discovered
                w.parent := v
                Q.enqueue(w)
```

## Implementations
* [C++](#cpp)
* [C#](#csharp)
* [C](#c)
* [Java](#java)
* [JavaScript](#javascript)
* [Python](#python)
* [Ruby](#ruby)
* [Swift](#swift)
* [Go](#go)

### CPP
```cpp
#include <iostream>
#include <list>
#include <queue>
using namespace std;

class Graph
{
    int V; // No. of vertices
    list<int> *adj; // Pointer to an array containing adjacency lists
    void BFSUtil(int s, bool visited[]); // A function used by BFS
public:
    Graph(int V); // Constructor
    void addEdge(int v, int w); // function to add an edge to graph
    void BFS(int s); // prints BFS traversal from a given source s
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::BFSUtil(int s, bool visited[])
{
    // Create a queue for BFS
    queue<int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push(s);

    // 'i' will be used to get all adjacent
    // vertices of a vertex
    list<int>::iterator i;

    while (!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        cout << s << " ";
        queue.pop();

        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push(*i);
            }
        }
    }
}

// prints BFS traversal from a given source s
void Graph::BFS(int s)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Call the recursive helper function
    // to print BFS traversal
    BFSUtil(s, visited);
}

int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Breadth First Traversal "
            " (starting from vertex 2) \n";
    g.BFS(2);

    return 0;
}
```

### CSHARP
```csharp
using System;
using System.Collections.Generic;

namespace BreadthFirstSearch
{
    class Program
    {
        static void Main(string[] args)
        {
            Graph g = new Graph(4);

            g.AddEdge(0, 1);
            g.AddEdge(0, 2);
            g.AddEdge(1, 2);
            g.AddEdge(2, 0);
            g.AddEdge(2, 3);
            g.AddEdge(3, 3);

            Console.WriteLine("Following is Breadth First Traversal " +
                              "(starting from vertex 2)");

            g.BFS(2);
        }
    }

    class Graph
    {
        private int _vertices;
        private LinkedList<int>[] _adj;

        public Graph(int v)
        {
            _vertices = v;
            _adj = new LinkedList<int>[v];
            for (int i = 0; i < v; ++i)
                _adj[i] = new LinkedList<int>();
        }

        public void AddEdge(int v, int w)
        {
            _adj[v].AddLast(w);
        }

        public void BFS(int s)
        {
            bool[] visited = new bool[_vertices];

            LinkedList<int> queue = new LinkedList<int>();

            visited[s] = true;
            queue.AddLast(s);

            while (queue.Count != 0)
            {
                s = queue.First.Value;
                Console.Write(s + " ");
                queue.RemoveFirst();

                LinkedList<int> list = _adj[s];

                foreach (var val in list)
                {
                    if (!visited[val])
                    {
                        visited[val] = true;
                        queue.AddLast(val);
                    }
                }
            }
        }
    }
}
```

### C
```c
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int vertex;
    struct node* next;
};

struct node* createNode(int);

struct Graph
{
    int numVertices;
    struct node** adjLists;
    int* visited;
};

// BFS algorithm
void BFS(struct Graph* graph, int startVertex)
{
    struct node* queue = createNode(startVertex);
    graph->visited[startVertex] = 1;
    struct node* temp = queue;

    while (queue != NULL)
    {
        int currentVertex = queue->vertex;
        printf("Visited %d \n", currentVertex);
        queue = queue->next;

        struct node* temp2 = graph->adjLists[currentVertex];

        while (temp2)
        {
            int adjVertex = temp2->vertex;

            if (graph->visited[adjVertex] == 0)
            {
                graph->visited[adjVertex] = 1;
                temp->next = createNode(adjVertex);
                temp = temp->next;
            }
            temp2 = temp2->next;
        }
    }
}

// Creating a node
struct node* createNode(int v)
{
    struct node* newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Creating a graph
struct Graph* createGraph(int vertices)
{
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    graph->adjLists = malloc(vertices * sizeof(struct node*));
    graph->visited = malloc(vertices * sizeof(int));

    int i;
    for (i = 0; i < vertices; i++)
    {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }

    return graph;
}

// Add edge
void addEdge(struct Graph* graph, int src, int dest)
{
    // Add edge from src to dest
    struct node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    // Add edge from dest to src
    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

// Print the graph
void printGraph(struct Graph* graph)
{
    int v;
    for (v = 0; v < graph->numVertices; v++)
    {
        struct node* temp = graph->adjLists[v];
        printf("\n Vertex %d\n: ", v);
        while (temp)
        {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    struct Graph* graph = createGraph(4);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 0);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 3);

    printGraph(graph);

    BFS(graph, 2);

    return 0;
}
```

### Java 
```java
import java.util.Iterator;
import java.util.LinkedList;

public class BreadthFirstSearch
{
    private int V;   // No. of vertices
    private LinkedList<Integer> adj[]; //Adjacency Lists

    // Constructor
    BreadthFirstSearch(int v)
    {
        V = v;
        adj = new LinkedList[v];
        for (int i=0; i<v; ++i)
            adj[i] = new LinkedList();
    }

    // Function to add an edge into the graph
    void addEdge(int v,int w)
    {
        adj[v].add(w);
    }

    // prints BFS traversal from a given source s
    void BFS(int s)
    {
        // Mark all the vertices as not visited(By default
        // set as false)
        boolean visited[] = new boolean[V];

        // Create a queue for BFS
        LinkedList<Integer> queue = new LinkedList<Integer>();

        // Mark the current node as visited and enqueue it
        visited[s]=true;
        queue.add(s);

        while (queue.size() != 0)
        {
            // Dequeue a vertex from queue and print it
            s = queue.poll();
            System.out.print(s+" ");

            // Get all adjacent vertices of the dequeued vertex s
            // If a adjacent has not been visited, then mark it
            // visited and enqueue it
            Iterator<Integer> i = adj[s].listIterator();
            while (i.hasNext())
            {
                int n = i.next();
                if (!visited[n])
                {
                    visited[n] = true;
                    queue.add(n);
                }
            }
        }
    }

    // Driver method to
    public static void main(String args[])
    {
        BreadthFirstSearch g = new BreadthFirstSearch(4);

        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 0);
        g.addEdge(2, 3);
        g.addEdge(3, 3);

        System.out.println("Following is Breadth First Traversal "+
                "(starting from vertex 2)");

        g.BFS(2);
    }
}
```

### Python 
```python
from collections import defaultdict

# This class represents a directed graph using adjacency list representation
class Graph:

    # Constructor
    def __init__(self):

        # default dictionary to store graph
        self.graph = defaultdict(list)

    # function to add an edge to graph
    def addEdge(self,u,v):
        self.graph[u].append(v)

    # Function to print a BFS of graph
    def BFS(self, s):

        # Mark all the vertices as not visited
        visited = [False] * (len(self.graph))

        # Create a queue for BFS
        queue = []

        # Mark the source node as
        # visited and enqueue it
        queue.append(s)
        visited[s] = True

        while queue:

            # Dequeue a vertex from
            # queue and print it
            s = queue.pop(0)
            print (s, end = " ")

            # Get all adjacent vertices of the
            # dequeued vertex s. If a adjacent
            # has not been visited, then mark it
            # visited and enqueue it
            for i in self.graph[s]:
                if visited[i] == False:
                    queue.append(i)
                    visited[i] = True

# Driver code

# Create a graph given
# in the above diagram(http://www.geeksforgeeks.org/wp-content/uploads/bfs-5.png)
g = Graph()
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(1, 2)
g.addEdge(2, 0)
g.addEdge(2, 3)

print ("Following is Breadth First Traversal"
                  " (starting from vertex 2)")
g.BFS(2)
```

### Ruby 
```ruby
class Graph
    def initialize
        @adj = Hash.new { |h, k| h[k] = [] }
    end

    def add_edge(u, v)
        @adj[u] << v
        @adj[v] << u
    end

    def bfs(s)
        visited = Array.new(@adj.size, false)
        queue = [s]
        visited[s] = true

        while !queue.empty?
            u = queue.shift
            puts u
            @adj[u].each do |v|
                if !visited[v]
                    queue << v
                    visited[v] = true
                end
            end
        end
    end
end

g = Graph.new
g.add_edge(0, 1)
g.add_edge(0, 2)
g.add_edge(1, 2)
g.add_edge(2, 0)
g.add_edge(2, 3)
g.add_edge(3, 3)

g.bfs(2)
```

### Go 
```go
package main

import (
    "fmt"
)

type Graph struct {
    vertices int
    adj      [][]int
}

func NewGraph(v int) *Graph {
    return &Graph{
        vertices: v,
        adj:      make([][]int, v),
    }
}

func (g *Graph) AddEdge(u, v int) {
    g.adj[u] = append(g.adj[u], v)
}

func (g *Graph) BFS(s int) {
    visited := make([]bool, g.vertices)
    queue := []int{s}
    visited[s] = true

    for len(queue) > 0 {
        u := queue[0]
        queue = queue[1:]
        fmt.Println(u)

        for _, v := range g.adj[u] {
            if !visited[v] {
                queue = append(queue, v)
                visited[v] = true
            }
        }
    }
}

func main() {
    g := NewGraph(4)
    g.AddEdge(0, 1)
    g.AddEdge(0, 2)
    g.AddEdge(1, 2)
    g.AddEdge(2, 0)
    g.AddEdge(2, 3)
    g.AddEdge(3, 3)

    g.BFS(2)
}
```

### Swift 
```swift
class Graph {
    var adj: [[Int]]

    init(_ vertices: Int) {
        adj = Array(repeating: [], count: vertices)
    }

    func addEdge(_ u: Int, _ v: Int) {
        adj[u].append(v)
        adj[v].append(u)
    }

    func BFS(_ s: Int) {
        var visited = Array(repeating: false, count: adj.count)
        var queue = [s]
        visited[s] = true

        while !queue.isEmpty {
            let u = queue.removeFirst()
            print(u)

            for v in adj[u] {
                if !visited[v] {
                    queue.append(v)
                    visited[v] = true
                }
            }
        }
    }
}

let g = Graph(4)
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(1, 2)
g.addEdge(2, 0)
g.addEdge(2, 3)
g.addEdge(3, 3)

g.BFS(2)
```

### JavaScript
```javascript
class Graph {
    constructor(vertices) {
        this.vertices = vertices;
        this.adj = [];
        for (let i = 0; i < vertices; i++) {
            this.adj[i] = [];
        }
    }

    addEdge(source, destination) {
        this.adj[source].push(destination);
    }

    bfsUtil(vertex, visited) {
        const queue = [vertex];
        

        while(queue.length) {
            const top = queue.shift();
            visited[top] = true;

            console.log(top);

            this.adj[top].forEach((v) => {
                if(!visited[v]) {
                    queue.push(v);
                }
            })
        }
    }

    bfs(vertex) {
        const visited = [];
        for (let i = 0; i < this.vertices; i++) {
            visited[i] = false;
        }
        this.bfsUtil(vertex, visited);
    }
}

const g = new Graph(4);
g.addEdge(0, 1);
g.addEdge(0, 2);
g.addEdge(1, 2);
g.addEdge(2, 0);
g.addEdge(2, 3);
g.addEdge(3, 3);

console.log("Following is Breadth First Traversal (starting from vertex 2)");
g.bfs(2);
```
