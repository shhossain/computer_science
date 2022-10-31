# Ford-Fulkerson Algorithm
<b> Ford-Fulkerson </b> algorithm is a greedy approach for calculating the maximum possible flow in a network or a graph.

A term, flow network, is used to describe a network of vertices and edges with a source (S) and a sink (T). Each vertex, except S and T, can receive and send an equal amount of stuff through it. S can only send and T can only receive stuff.

We can visualize the understanding of the algorithm using a flow of liquid inside a network of pipes of different capacities. Each pipe has a certain capacity of liquid it can transfer at an instance. For this algorithm, we are going to find how much liquid can be flowed from the source to the sink at an instance using the network.

## How it works
- Initialize the flow in all the edges to 0.
- While there is an augmenting path between the source and the sink, add this path to the flow.
- Update the residual graph.

 ``` We can also consider reverse-path if required because if we do not consider them, we may never find a maximum flow.```

## Implementations
* [C++](#cpp)
* [Python](#python)

### Cpp
```cpp
// Ford-Fulkerson algorith in C++

#include <limits.h>
#include <string.h>

#include <iostream>
#include <queue>
using namespace std;

#define V 6

// Using BFS as a searching algorithm
bool bfs(int rGraph[V][V], int s, int t, int parent[]) {
  bool visited[V];
  memset(visited, 0, sizeof(visited));

  queue<int> q;
  q.push(s);
  visited[s] = true;
  parent[s] = -1;

  while (!q.empty()) {
    int u = q.front();
    q.pop();

    for (int v = 0; v < V; v++) {
      if (visited[v] == false && rGraph[u][v] > 0) {
        q.push(v);
        parent[v] = u;
        visited[v] = true;
      }
    }
  }

  return (visited[t] == true);
}

// Applying fordfulkerson algorithm
int fordFulkerson(int graph[V][V], int s, int t) {
  int u, v;

  int rGraph[V][V];
  for (u = 0; u < V; u++)
    for (v = 0; v < V; v++)
      rGraph[u][v] = graph[u][v];

  int parent[V];
  int max_flow = 0;

  // Updating the residual values of edges
  while (bfs(rGraph, s, t, parent)) {
    int path_flow = INT_MAX;
    for (v = t; v != s; v = parent[v]) {
      u = parent[v];
      path_flow = min(path_flow, rGraph[u][v]);
    }

    for (v = t; v != s; v = parent[v]) {
      u = parent[v];
      rGraph[u][v] -= path_flow;
      rGraph[v][u] += path_flow;
    }

    // Adding the path flows
    max_flow += path_flow;
  }

  return max_flow;
}

int main() {
  int graph[V][V] = {{0, 8, 0, 0, 3, 0},
             {0, 0, 9, 0, 0, 0},
             {0, 0, 0, 0, 7, 2},
             {0, 0, 0, 0, 0, 5},
             {0, 0, 7, 4, 0, 0},
             {0, 0, 0, 0, 0, 0}};

  cout << "Max Flow: " << fordFulkerson(graph, 0, 5) << endl;
}
```

### Python
```python
# Ford-Fulkerson algorith in Python

from collections import defaultdict


class Graph:

    def __init__(self, graph):
        self.graph = graph
        self. ROW = len(graph)


    # Using BFS as a searching algorithm 
    def searching_algo_BFS(self, s, t, parent):

        visited = [False] * (self.ROW)
        queue = []

        queue.append(s)
        visited[s] = True

        while queue:

            u = queue.pop(0)

            for ind, val in enumerate(self.graph[u]):
                if visited[ind] == False and val > 0:
                    queue.append(ind)
                    visited[ind] = True
                    parent[ind] = u

        return True if visited[t] else False

    # Applying fordfulkerson algorithm
    def ford_fulkerson(self, source, sink):
        parent = [-1] * (self.ROW)
        max_flow = 0

        while self.searching_algo_BFS(source, sink, parent):

            path_flow = float("Inf")
            s = sink
            while(s != source):
                path_flow = min(path_flow, self.graph[parent[s]][s])
                s = parent[s]

            # Adding the path flows
            max_flow += path_flow

            # Updating the residual values of edges
            v = sink
            while(v != source):
                u = parent[v]
                self.graph[u][v] -= path_flow
                self.graph[v][u] += path_flow
                v = parent[v]

        return max_flow


graph = [[0, 8, 0, 0, 3, 0],
         [0, 0, 9, 0, 0, 0],
         [0, 0, 0, 0, 7, 2],
         [0, 0, 0, 0, 0, 5],
         [0, 0, 7, 4, 0, 0],
         [0, 0, 0, 0, 0, 0]]

g = Graph(graph)

source = 0
sink = 5

print("Max Flow: %d " % g.ford_fulkerson(source, sink))
```
