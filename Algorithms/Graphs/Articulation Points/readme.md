# ***Articulation Points***

A vertex in an undirected connected graph is an articulation point (or cut vertex) if removing it (and edges through it) disconnects the graph. Removal of Articulation
points (vertices) from the graph increases its number of connected components.  

  * _Connected Components_ : A connected component in an undirected graph is a subgraph in which one node can be reached from every other node by traversing edges. 
    Thus, a connected component represents a set of nodes such that every pair of nodes is connected by a path.

When there is a child w of v in the subtree such that the highest vertex that w can reach by going forward along DFS edges and then taking *one* back edge 
lies at or below v. In other words, if v is removed, w and all vertices below w become disconnected. An alternative way of saying this is that 
we want to look for a child w of v such that there are no back edges from the subtree rooted at w that go strictly above v.

  * _Back Edge_ : Back-edge is an edge from node U to node V such that node V has been discovered before U in the dfs traversal of the graph.
  <img src="https://notes.eddyerburgh.me/assets/img/data-structures-and-algorithms/algorithms/graph-traversal/tree-edge-and-back-edge.svg">

## ***Approach***

Pick an arbitrary vertex of the graph root and run depth first search from it. Note the following fact :
- Let's say we are in the DFS, looking through the edges starting from vertex _v != root._ If the current edge _(v,to)_ is such that none of the vertices
  _to_ or its descendants in the DFS traversal tree has a back-edge to any of ancestors of _v_, then _v_ is an articulation point. Otherwise, _v_ is not an 
  articulation point.
- Let's consider the remaining case of _v=root._ This vertex will be the point of articulation if and only if this vertex has more than one child in the DFS tree.

 We'll use _**"time of entry into node"**_ computed by the depth first search.
 
 -  Let _tin[v]_ denote entry time for node _v_.
 -  Introduce an array _low[v]_ which will let us check the fact for each vertex _v._ 
 -  _low[v]_ is the minimum of _tin[v]_, the entry times _tin[p]_ for each node _p_ that is connected to node _v_ via a back-edge _(v,p)_ and the values of _low[to]_ 
    for each vertex _to_ which is a direct descendant of _v_ in the DFS tree.
    
* Now, there is a back edge from vertex _v_ or one of its descendants to one of its ancestors if and only if vertex _v_ has a child _to_ for which _low[to] < tin[v]_.
* If _low[to] = tin[v]_, the back edge comes directly to _v_, otherwise it comes to one of the ancestors of _v_. 

Thus, the vertex v in the DFS tree is an articulation point if and only if _low[to] > tin[v]_or _low[to] = tin[v]_.

## ***Implementation***

The implementation needs to distinguish three cases: when we go down the edge in DFS tree, when we find a back edge to an ancestor of the vertex 
and when we return to a parent of the vertex. These are the cases:

- _visited[to] = false_ - the edge is part of DFS tree;
- _visited[to] = true_ and _to != parent_  - the edge is back edge to one of the ancestors;
- _to = parent_  - the edge leads back to parent in DFS tree.

## ***Code***

#### *C++ code :*

```cpp

#include <bits/stdc++.h>
using namespace std;
void dfs(int node, int parent, vector<int> &vis, vector<int> &tin, vector<int> &low, int &timer, vector<int> adj[], vector<int> &isArticulation) {
    vis[node] = 1; 
    tin[node] = low[node] = timer++;
    int child = 0; 
    for(auto it: adj[node]) {
        if(it == parent) continue;
        
        if(!vis[it]) {
            dfs(it, node, vis, tin, low, timer, adj, isArticulation); 
            low[node] = min(low[node], low[it]); 
	    child++; 
            if(low[it] >= tin[node] && parent != -1) {
                isArticulation[node] = 1; 
            }
        } else {
            low[node] = min(low[node], tin[it]); 
        }
    }
    
    if(parent == -1 && child > 1) {
        isArticulation[node] = 1; 
    }
}
int main() {
    int n, m;
    cin >> n >> m; 
	vector<int> adj[n]; 
	for(int i = 0;i<m;i++) {
	    int u, v;
	    cin >> u >> v; 
	    adj[u].push_back(v);
	    adj[v].push_back(u); 
	}
	
	vector<int> tin(n, -1);
	vector<int> low(n, -1); 
	vector<int> vis(n, 0);
	vector<int> isArticulation(n, 0); 
	int timer = 0; 
	for(int i = 0;i<n;i++) {
	    if(!vis[i]) {
	        dfs(i, -1, vis, tin, low, timer, adj, isArticulation); 
	    }
	}
	
	for(int i = 0;i<n;i++) {
	    if(isArticulation[i] == 1) cout << i << endl;
	}
	
	return 0;
}

```


#### *Java code :*

```java

import java.util.*; 

class Main
{

	private void dfs(int node, int parent, int vis[], int tin[], int low[], ArrayList<ArrayList<Integer>> adj, int timer, int isArticulation[]) {
		vis[node] = 1; 
		tin[node] = low[node] = timer++; 
		int child = 0; 
		for(Integer it: adj.get(node)) {
			if(it == parent) continue; 

			if(vis[it] == 0) {
				dfs(it, node, vis, tin, low, adj, timer, isArticulation); 
				low[node] = Math.min(low[node], low[it]); 

				if(low[it] >= tin[node] && parent != -1) {
					isArticulation[node] = 1;  
				}
				child++; 
			} else {
				low[node] = Math.min(low[node], tin[it]); 
			}
		}
		if(parent != -1 && child > 1) isArticulation[node] = 1;  
	}
    void printBridges(ArrayList<ArrayList<Integer>> adj, int n)
    {
        int vis[] = new int[n]; 
        int tin[] = new int[n];
        int low[] = new int[n]; 
        
        int isArticulation[] = new int[n];

        int timer = 0; 
        for(int i = 0;i<n;i++) {
        	if(vis[i] == 0) {
        		dfs(i, -1, vis, tin, low, adj, timer, isArticulation); 
        	}
        }
        
        for(int i = 0;i<n;i++) {
            if(isArticulation[i] == 1) System.out.println(i); 
        }
    }
    public static void main(String args[])
    {
        int n = 5;
        ArrayList<ArrayList<Integer> > adj = new ArrayList<ArrayList<Integer> >();
		
		for (int i = 0; i < n; i++) 
			adj.add(new ArrayList<Integer>());
			
		adj.get(0).add(1);
		adj.get(1).add(0);

		adj.get(0).add(2);
		adj.get(2).add(0);

		adj.get(1).add(2);
		adj.get(2).add(1);

		adj.get(1).add(3);
		adj.get(3).add(1);

		adj.get(3).add(4);
		adj.get(4).add(3);
			
		Main obj = new Main(); 
		obj.printBridges(adj, n); 
		
    }
}

```

***Time Complexity :*** 

Time complexity of an algorithm quantifies the amount of time taken by an algorithm to run as a function of the length of the input. Time complexity is 
commonly estimated by counting the number of elementary operations performed by the algorithm, supposing that each elementary operation takes a fixed amount 
of time to perform.

 * O(V+E) where V = vertices and E = edges.

***Auxiliary Space Complexity :*** 

Space complexity of an algorithm quantifies the amount of space or memory taken by an algorithm to run as a function of the length of the input. 
It is the memory required by an algorithm until it executes completely.

 * O(V+E) where V = vertices and E = edges.










