# Depth First Search
Depth First Search is a graph traversal algorithm that starts traversing the graph from root node and explores as far as possible along each branch before backtracking. So the basic idea is to start from the root or any arbitrary node and mark the node and move to the adjacent unmarked node and continue this loop until there is no unmarked adjacent node. Then backtrack and check for other unmarked nodes and traverse them. Finally print the nodes in the path.

## Complexity
| Algorithm | Average | Worst Case |
| --- | --- | --- |
| Space | O(V) | O(V) |
| Search | O(V + E) | O(V + E) |

## Pseudocode
```
procedure DFS(G,v):
    label v as discovered
    for all directed edges from v to w that are in G.adjacentEdges(v) do
        if vertex w is not labeled as discovered then
            recursively call DFS(G,w)
```

## Implementations
* [C++](#cpp)
* [C#](#csharp)
* [Java](#java)
* [Python](#python)
* [Ruby](#ruby)
* [JavaScript](#javascript)

### CPP
```cpp
#include <iostream>
#include <list>
using namespace std;

class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[]);  // A function used by DFS
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // function to add an edge to graph
    void DFS();    // DFS traversal of the vertices reachable from v
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v's list.
}

void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    cout << v << " ";

    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}

// The function to do DFS traversal. It uses recursive DFSUtil()
void Graph::DFS()
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Call the recursive helper function to print DFS traversal
    // starting from all vertices one by one
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            DFSUtil(i, visited);
}

// Driver program to test methods of graph class
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

    cout << "Following is Depth First Traversal (starting from vertex 2) n";
    g.DFS();

    return 0;
}
```

### CSharp
```csharp
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Graph
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

            Console.WriteLine("Following is Depth First Traversal");
            g.DFS(2);
            Console.ReadLine();
        }
    }

    class Graph
    {
        private int V; // No. of vertices
        private LinkedList<int>[] adj; //Adjacency Lists

        public Graph(int v)
        {
            V = v;
            adj = new LinkedList<int>[v];
            for (int i = 0; i < v; ++i)
                adj[i] = new LinkedList<int>();
        }

        public void AddEdge(int v, int w)
        {
            adj[v].AddLast(w); // Add w to v's list.
        }

        public void DFS(int v)
        {
            // Mark all the vertices as not visited(set as
            // false by default in c#)
            bool[] visited = new bool[V];

            // Call the recursive helper function to print DFS traversal
            DFSUtil(v, visited);
        }

        private void DFSUtil(int v, bool[] visited)
        {
            // Mark the current node as visited and print it
            visited[v] = true;
            Console.Write(v + " ");

            // Recur for all the vertices adjacent to this vertex
            LinkedList<int> list = adj[v];
            foreach (int n in list)
            {
                if (!visited[n])
                    DFSUtil(n, visited);
            }
        }
    }
}
```

### Java
```java
import java.util.Iterator;
import java.util.LinkedList;

// This class represents a directed graph using adjacency list
// representation
class Graph
{
    private int V;   // No. of vertices

    // Array  of lists for Adjacency List Representation
    private LinkedList<Integer> adj[];

    // Constructor
    Graph(int v)
    {
        V = v;
        adj = new LinkedList[v];
        for (int i=0; i<v; ++i)
            adj[i] = new LinkedList();
    }

    //Function to add an edge into the graph
    void addEdge(int v,int w)
    {
        adj[v].add(w);  // Add w to v's list.
    }

    // A function used by DFS
    void DFSUtil(int v,boolean visited[])
    {
        // Mark the current node as visited and print it
        visited[v] = true;
        System.out.print(v+" ");

        // Recur for all the vertices adjacent to this vertex
        Iterator<Integer> i = adj[v].listIterator();
        while (i.hasNext())
        {
            int n = i.next();
            if (!visited[n])
                DFSUtil(n, visited);
        }
    }

    // The function to do DFS traversal. It uses recursive DFSUtil()
    void DFS(int v)
    {
        // Mark all the vertices as not visited(set as
        // false by default in java)
        boolean visited[] = new boolean[V];

        // Call the recursive helper function to print DFS traversal
        DFSUtil(v, visited);
    }

    public static void main(String args[])
    {
        Graph g = new Graph(4);

        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 0);
        g.addEdge(2, 3);
        g.addEdge(3, 3);

        System.out.println("Following is Depth First Traversal "+
                           "(starting from vertex 2)");

        g.DFS(2);
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

    # A function used by DFS
    def DFSUtil(self,v,visited):

        # Mark the current node as visited and print it
        visited[v]= True
        print v,

        # Recur for all the vertices adjacent to this vertex
        for i in self.graph[v]:
            if visited[i] == False:
                self.DFSUtil(i, visited)

    
    # The function to do DFS traversal. It uses
    # recursive DFSUtil()
    def DFS(self,v):

        # Mark all the vertices as not visited
        visited = [False]*(len(self.graph))

        # Call the recursive helper function to print
        # DFS traversal
        self.DFSUtil(v,visited)

# Driver code

g = Graph()
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(1, 2)
g.addEdge(2, 0)
g.addEdge(2, 3)
g.addEdge(3, 3)

print("Following is Depth First Traversal")
g.DFS(2)
```

### Ruby
```ruby
class Graph
    def initialize(vertices)
        @vertices = vertices
        @adj = Array.new(vertices) { Array.new }
    end

    def add_edge(source, destination)
        @adj[source].push(destination)
    end

    def dfs_util(vertex, visited)
        visited[vertex] = true
        print vertex, " "

        @adj[vertex].each do |v|
            dfs_util(v, visited) unless visited[v]
        end
    end

    def dfs(vertex)
        visited = Array.new(@vertices, false)
        dfs_util(vertex, visited)
    end
end

g = Graph.new(4)
g.add_edge(0, 1)
g.add_edge(0, 2)
g.add_edge(1, 2)
g.add_edge(2, 0)
g.add_edge(2, 3)
g.add_edge(3, 3)

puts "Following is Depth First Traversal"
g.dfs(2)
```

### JavaScript
```javascript
// A class for dfs traversal
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

    dfsUtil(vertex, visited) {
        visited[vertex] = true;
        console.log(vertex);

        this.adj[vertex].forEach((v) => {
            if (!visited[v]) {
                this.dfsUtil(v, visited);
            }
        });
    }

    dfs(vertex) {
        const visited = [];
        for (let i = 0; i < this.vertices; i++) {
            visited[i] = false;
        }
        this.dfsUtil(vertex, visited);
    }
}

const g = new Graph(4);
g.addEdge(0, 1);
g.addEdge(0, 2);
g.addEdge(1, 2);
g.addEdge(2, 0);
g.addEdge(2, 3);
g.addEdge(3, 3);

console.log("Following is Depth First Traversal");
g.dfs(2);
```








