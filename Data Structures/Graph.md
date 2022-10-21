## Graph

A Graph is a non-linear data structure consisting of vertices and edges. The vertices are sometimes also referred to as nodes and the edges are lines or arcs that connect any two nodes in the graph. More formally a Graph is composed of a set of vertices( V ) and a set of edges( E ). The graph is denoted by G(E, V).


Components of a Graph : 
Vertices: Vertices are the fundamental units of the graph. Sometimes, vertices are also known as vertex or nodes. Every node/vertex can be labeled or unlabelled.
Edges: Edges are drawn or used to connect two nodes of the graph. It can be ordered pair of nodes in a directed graph. Edges can connect any two nodes in any possible way. There are no rules. Sometimes, edges are also known as arcs. Every edge can be labeled/unlabelled.


### Example 
![](https://cdn.programiz.com/sites/tutorial2program/files/graph-vertices-edges_0.png)
```
In the graph,

V = {0, 1, 2, 3}
E = {(0,1), (0,2), (0,3), (1,2)}
G = {V, E}


```

Representations of Graph : 

1. Adjacency List
2. Adjaency matrix 

> Code for adjacency list :
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    vector<int> adj[n + 1];
    // for weighted graph  us the following line of code ;
    // vector<pair<int, int>> adj[n+1] ;
    for (int i = 0; i < m; i++)
    {
        int u, v; // wt
        cin >> u >> v;

        //   for weighted graph
        // cin>>u>>v>>wt ;
        // adj[u].push_back({v,wt});
        // adj[u].push_back({u,wt});

        adj[u].push_back(v);
        adj[v].push_back(u); // for directed graph omit this line
    }

    for (int i = 0; i < n + 1; i++)
    {
        for (auto x : adj[i])
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
```