# Cycle Detection in Un-directed Graph

There is a cycle in a graph only if there is a back edge present in the graph. A back edge is an edge that is indirectly joining a node to itself (self-loop) or one of its ancestors in the tree produced by DFS. 

To find the back edge to any of its ancestors keep a visited array and if there is a back edge to any visited node then there is a loop and return true.

Time Complexity: 

O(V+E) - The program does a simple DFS Traversal of the graph which is represented using an adjacency list. So the time complexity is O(V+E).

Auxiliary Space: O(V), To store the visited array O(V) space is required.


## Implementations
* [Python](#python)


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
