# Cycle Detection in Un-directed Graph

There is a cycle in a graph only if there is a back edge present in the graph. A back edge is an edge that is indirectly joining a node to itself (self-loop) or one of its ancestors in the tree produced by BFS. 

To find the back edge to any of its ancestors keep a visited array and if there is a back edge to any visited node then there is a loop and return true.

## Complexity: 

Time: O(V+E) - The program does a simple BFS Traversal of the graph which is represented using an adjacency list. So the time complexity is O(V+E).

Auxiliary Space: O(V), To store the visited array O(V) space is required.


## Implementations
* [Python](#python)
* [C++](#cpp)
* [JAVA](#java)
* [JAVASCRIPT](#javascript)


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

    def checkForCycleBFS(self, vis, node):
        '''
        ***Remember:=
        Uisng List here instead of dictionary as dict are sorted in nature => 
        they were causing issue in the program (sorts the q pairs)
        '''
        q = []
      
        vis[node] = 1
        # store node with parent => start node has parent -1
        q.append([node,-1]) 
        while (len(q)):          
            # pick the el of the queue
            [currNode, parent] = q.pop(0)
            # now traverse adjacent node
            for n in self.adj_list[currNode]:
                if (not vis[n]):
                    q.append([n, currNode])
                    vis[n] = 1
                elif parent != n:
                  # if already visited and not comming from parent node 
                  # (traverse) then some one treverse the node before the curr
                  # node hence cycle exits.
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

# check cycle with bfs algo
print("check cycle with bfs algo =>",graph.is_cyclic())

```
### C++ CODE
```cpp
// A C# program to detect cycle in
// an undirected graph using BFS.
using System;
using System.Collections.Generic;

class GFG
{
	public static void Main(String []arg)
	{
		int V = 4;
		List<int> []adj = new List<int>[V];
		for (int i = 0; i < 4; i++)
		{
			adj[i] = new List<int>();
		}

		addEdge(adj, 0, 1);
		addEdge(adj, 1, 2);
		addEdge(adj, 2, 0);
		addEdge(adj, 2, 3);

		if (isCyclicDisconntected(adj, V))
		{
			Console.WriteLine("Yes");
		}
		else
		{
			Console.WriteLine("No");
		}
	}

	static void addEdge(List<int> []adj, int u, int v)
	{
		adj[u].Add(v);
		adj[v].Add(u);
	}

	static bool isCyclicConntected(List<int> []adj, int s,
									int V, bool []visited)
	{

		// Set parent vertex for every vertex as -1.
		int []parent = new int[V];
		for (int i = 0; i < V; i++)
		parent[i] = -1;

		// Create a queue for BFS
		Queue<int> q = new Queue<int>();

		// Mark the current node as
		// visited and enqueue it
		visited[s] = true;
		q.Enqueue(s);

		while (q.Count != 0)
		{

			// Dequeue a vertex from
			// queue and print it
			int u = q.Dequeue();

			// Get all adjacent vertices
			// of the dequeued vertex u.
			// If a adjacent has not been
			// visited, then mark it visited
			// and enqueue it. We also mark parent
			// so that parent is not considered
			// for cycle.
			for (int i = 0; i < adj[u].Count; i++)
			{
				int v = adj[u][i];
				if (!visited[v])
				{
					visited[v] = true;
					q.Enqueue(v);
					parent[v] = u;
				}
				else if (parent[u] != v)
				{
					return true;
				}
			}
		}
		return false;
	}

	static bool isCyclicDisconntected(List<int> []adj, int V)
	{

		// Mark all the vertices as not visited
		bool []visited = new bool[V];

		for (int i = 0; i < V; i++)
		{
			if (!visited[i] &&
				isCyclicConntected(adj, i, V, visited))
			{
				return true;
			}
		}
		return false;
	}
}

// This code is contributed by Sir Rajesh Kumar Halder.

```
### JAVASCRIPT CODE
```javascript
// A C# program to detect cycle in
// an undirected graph using BFS.
using System;
using System.Collections.Generic;

class GFG
{
	public static void Main(String []arg)
	{
		int V = 4;
		List<int> []adj = new List<int>[V];
		for (int i = 0; i < 4; i++)
		{
			adj[i] = new List<int>();
		}

		addEdge(adj, 0, 1);
		addEdge(adj, 1, 2);
		addEdge(adj, 2, 0);
		addEdge(adj, 2, 3);

		if (isCyclicDisconntected(adj, V))
		{
			Console.WriteLine("Yes");
		}
		else
		{
			Console.WriteLine("No");
		}
	}

	static void addEdge(List<int> []adj, int u, int v)
	{
		adj[u].Add(v);
		adj[v].Add(u);
	}

	static bool isCyclicConntected(List<int> []adj, int s,
									int V, bool []visited)
	{

		// Set parent vertex for every vertex as -1.
		int []parent = new int[V];
		for (int i = 0; i < V; i++)
		parent[i] = -1;

		// Create a queue for BFS
		Queue<int> q = new Queue<int>();

		// Mark the current node as
		// visited and enqueue it
		visited[s] = true;
		q.Enqueue(s);

		while (q.Count != 0)
		{

			// Dequeue a vertex from
			// queue and print it
			int u = q.Dequeue();

			// Get all adjacent vertices
			// of the dequeued vertex u.
			// If a adjacent has not been
			// visited, then mark it visited
			// and enqueue it. We also mark parent
			// so that parent is not considered
			// for cycle.
			for (int i = 0; i < adj[u].Count; i++)
			{
				int v = adj[u][i];
				if (!visited[v])
				{
					visited[v] = true;
					q.Enqueue(v);
					parent[v] = u;
				}
				else if (parent[u] != v)
				{
					return true;
				}
			}
		}
		return false;
	}

	static bool isCyclicDisconntected(List<int> []adj, int V)
	{

		// Mark all the vertices as not visited
		bool []visited = new bool[V];

		for (int i = 0; i < V; i++)
		{
			if (!visited[i] &&
				isCyclicConntected(adj, i, V, visited))
			{
				return true;
			}
		}
		return false;
	}
}

// This code is contributed by Rajesh kumar halder



```
