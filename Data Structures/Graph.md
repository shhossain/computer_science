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

## Graph Traversal : 

There are two types of traversal in graph

#### 1. Breadth First Search (BFS)
   * In BFS traversal , we start at the root of the graph and visits all nodes at the current depth level before moving on to the nodes at the next depth level.

   BFS Implementation:
   * To print the traversal order , we need some initial configuration
   * Queue data structure, and visited array(all set to 0 initially)
   * In BFS, we start with a starting node, mark it as visited, and push it into the queue data structure.
   * In every iteration, we pop out the node v and put it in the ans vector, as we are traversing this node.
   * All the unvisited adjacent nodes from v are visited next and are pushed into the queue. The list of adjacent neighbors of the node can be accessed from the adjacency list.
   * Repeat steps 2 and 3 until the queue becomes empty, and this way we can easily traverse all the nodes in the graph.
   * In this way, all the nodes are traversed in a breadthwise manner.


### Example 
![](https://cdn.programiz.com/sites/tutorial2program/files/graph-vertices-edges_0.png)

> Code for BFS Traversal :
```cpp

Code:

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0}; 
        vis[0] = 1; 
        queue<int> q;
        // push the initial starting node 
        q.push(0); 
        vector<int> bfs; 
        // iterate till the queue is empty 
        while(!q.empty()) {
           // get the topmost element in the queue 
            int node = q.front(); 
            q.pop(); 
            bfs.push_back(node); 
            // traverse for all its neighbours 
            for(auto it : adj[node]) {
                // if the neighbour has previously not been visited, 
                // store in Q and mark as visited 
                if(!vis[it]) {
                    vis[it] = 1; 
                    q.push(it); 
                }
            }
        }
        return bfs; 
    }
};

void addEdge(vector <int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() 
{
    vector <int> adj[6];
    
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 2);

    Solution obj;
    vector <int> ans = obj.bfsOfGraph(5, adj);
    printAns(ans);

    return 0;
}
```

Output: 0 1 2 3

Time Complexity: O(N) + O(2E), Where N = Nodes, 2E is for total degrees as we traverse all adjacent nodes.

Space Complexity: O(3N) ~ O(N), Space for queue data structure visited array and an adjacency list
Space Complexity: O(3N) ~ O(N), Space for queue data structure visited array and an adjacency list

#### 2. Depth First Search (DFS)
   * In  DFS, concept of recursion and backtracking is used. DFS goes in-depth, i.e., traverses all nodes by going ahead, and when there are no further nodes to traverse in the current path, then it backtracks on the same path and traverses other unvisited nodes. 

   DFS Implementation:
   * In DFS, we start with a node ‘v’, mark it as visited and store it in the solution vector. It is unexplored as its adjacent nodes are not visited.
   * We run through all the adjacent nodes, and call the recursive dfs function to explore the node ‘v’ which has not been visited previously. This leads to the exploration of another node ‘u’ which is its adjacent node and is not visited. 
   * The adjacency list stores the list of neighbours for any node. Pick the neighbour list of node ‘v’ and run a for loop on the list of neighbours (say nodes ‘u’ and ‘w’ are in the list). We go in-depth with each node. When node ‘u’ is explored completely then it backtracks and explores node ‘w’.
   * This traversal terminates when all the nodes are completely explored.

  In this way, all the nodes are traversed in a depthwise manner.



> Code for DFS Traversal :
```cpp

Code:

#include <bits/stdc++.h>
using namespace std;

class Solution {
  private: 
    void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls) {
        vis[node] = 1; 
        ls.push_back(node); 
        // traverse all its neighbours
        for(auto it : adj[node]) {
            // if the neighbour is not visited
            if(!vis[it]) {
                dfs(it, adj, vis, ls); 
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0}; 
        int start = 0;
        // create a list to store dfs
        vector<int> ls; 
        // call dfs for starting node
        dfs(start, adj, vis, ls); 
        return ls; 
    }
};

void addEdge(vector <int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() 
{
    vector <int> adj[5];
    
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 2);

    Solution obj;
    vector <int> ans = obj.dfsOfGraph(5, adj);
    printAns(ans);

    return 0;
}
```

Output: 0 1 2 3

Time Complexity: For an undirected graph, O(N) + O(2E), For a directed graph, O(N) + O(E), Because for every node we are calling the recursive function once, the time taken is O(N) and 2E is for total degrees as we traverse for all adjacent nodes.

Space Complexity: O(3N) ~ O(N), Space for dfs stack space, visited array and an adjacency list.
