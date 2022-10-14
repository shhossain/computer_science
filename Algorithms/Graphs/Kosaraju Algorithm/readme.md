# ***Kosaraju's Algorithm***

Kosaraju's algorithm is a linear time algorithm to find the strongly connected components of a directed graph.
It makes use of the fact that the transpose graph (the same graph with the direction of every edge reversed) has exactly the same strongly 
connected components as the original graph.
A directed graph is strongly connected if there is a path between all pairs of vertices. A strongly connected component (SCC) of a directed
graph is a maximal strongly connected subgraph.

* ***Strongly connected components :*** Strongly connected components (SCC's) are directed graph or a part of a directed graph in which each and every node is 
  reachable from one another or in other words, there is a path between each and every vertex. 

*Example :*

<img src="https://cdn.programiz.com/sites/tutorial2program/files/scc-strongly-connected-components.png" width="500" height="300">

You can observe that in the first strongly connected component, every vertex can reach the other vertex through the directed path.
Similar for the other two components also.

## ***Logical Explanation behind working of Algorithm***

Kosaraju's Algorithm is DFS based. It does DFS two times. DFS of a graph produces a single tree if all vertices are reachable from the DFS starting point. 
Otherwise DFS produces a forest. So DFS of a graph with only one SCC always produces a tree. The important point to note is DFS may produce a tree or a forest 
when there are more than one SCCs depending upon the chosen starting point.

<img src="https://miro.medium.com/max/1290/1*Y4FpyIsijYC7z_jtkDvbyw.png" width="500" height="300">

- In the above diagram, if we start DFS from vertices 0 or 1 or 2, we get a tree as output. And if we start from 3 or 4, we get a forest. 
  To find and print all SCCs, we would want to start DFS from vertex 4 (which is a sink vertex), then move to 3 which is sink in the remaining set 
  (set excluding 4) and finally any of the remaining vertices (0, 1, 2). So how do we find this sequence of picking vertices as starting points of DFS? 
  Unfortunately, there is no direct way for getting this sequence. 
  
- However, if we do a DFS of graph and store vertices according to their finish times, we make sure that the finish time of a vertex that connects 
  to other SCCs (other that its own SCC), will always be greater than finish time of vertices in the other SCC.
  
- In DFS of above example graph, finish time of 0 is always greater than 3 and 4 (irrespective of the sequence of vertices considered for DFS). 
  And finish time of 3 is always greater than 4. DFS doesn’t guarantee about other vertices, for example finish times of 1 and 2 may be smaller or greater 
  than 3 and 4 depending upon the sequence of vertices considered for DFS. So to use this property, we do DFS traversal of complete graph and push every 
  finished vertex to a stack. In stack, 3 always appears after 4, and 0 appear after both 3 and 4. 
  
- In the next step, we reverse the graph. Consider the graph of SCCs. In the reversed graph, the edges that connect two components are reversed. 
  So the SCC {0, 1, 2} becomes sink and the SCC {4} becomes source.
  
- In stack, we always have 0 before 3 and 4. So if we do a DFS of the reversed graph using sequence of vertices in stack, we process vertices 
  from sink to source (in reversed graph). That is what we wanted to achieve and that is all needed to print SCCs one by one.   
  
<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/SCCGraph2.png" width="500" height="300">


## ***Approach***

* Sort all the nodes according to their topo sort(loosely based topo sort as we may have cycles here).
* Transpose the graph i.e reverse all the edges of the graph.
* Use the topo sort or the increasing order of finishing time to find the strongly connected components using DFS.


## ***Implementation***

* *C++ Code :*

```cpp

#include <bits/stdc++.h>
using namespace std;
void dfs(int node, stack<int> &st, vector<int> &vis, vector<int> adj[]) {
    vis[node] = 1; 
    for(auto it: adj[node]) {
        if(!vis[it]) {
            dfs(it, st, vis, adj); 
        }
    }
    
    st.push(node); 
}
void revDfs(int node, vector<int> &vis, vector<int> transpose[]) {
    cout << node << " "; 
    vis[node] = 1; 
    for(auto it: transpose[node]) {
        if(!vis[it]) {
            revDfs(it, vis, transpose); 
        }
    }
}
int main() {
    int n=6, m=7;
	vector<int> adj[n+1]; 
	adj[1].push_back(3);
	adj[2].push_back(1);
	adj[3].push_back(2);
	adj[3].push_back(5);
	adj[4].push_back(6);
	adj[5].push_back(4);
	adj[6].push_back(5);
	
	stack<int> st;
	vector<int> vis(n+1, 0); 
	for(int i = 1;i<=n;i++) {
	    if(!vis[i]) {
	        dfs(i, st, vis, adj); 
	    }
	} 
	
	vector<int> transpose[n+1]; 
	
	for(int i = 1;i<=n;i++) {
	    vis[i] = 0; 
	    for(auto it: adj[i]) {
	        transpose[it].push_back(i); 
	    }
	}
	
	
	
	while(!st.empty()) {
	    int node = st.top();
	    st.pop(); 
	    if(!vis[node]) {
	        cout << "SCC: "; 
	        revDfs(node, vis, transpose); 
	        cout << endl; 
	    }
	}
	
	
	return 0;
}
                      
```

* *Java Code :*
    
```java
                      
import java.util.*; 

class Main
{
	private void dfs(int node, Stack<Integer> st, ArrayList<ArrayList<Integer>> adj, int vis[]) {
		vis[node] = 1;
		for(Integer it : adj.get(node)) {
			if(vis[it] == 0) {
				dfs(it, st, adj, vis); 
			}
		}

		st.push(node); 
	}

	private void revDfs(int node, ArrayList<ArrayList<Integer>> transpose, int vis[]) {
		vis[node] = 1;
		System.out.print(node + " "); 
		for(Integer it : transpose.get(node)) {
			if(vis[it] == 0) {
				revDfs(it, transpose, vis); 
			}
		}
	}

    void kosaRaju(ArrayList<ArrayList<Integer>> adj, int n)
    {
        int vis[] = new int[n]; 
        Stack<Integer> st = new Stack<Integer>(); 
        for(int i = 0;i<n;i++) {
        	if(vis[i] == 0) {
        		dfs(i, st, adj, vis); 
        	}
        }

        ArrayList<ArrayList<Integer> > transpose = new ArrayList<ArrayList<Integer> >();
		
		for (int i = 0; i < n; i++) 
			transpose.add(new ArrayList<Integer>());

		for(int i = 0;i<n;i++) {
			vis[i] = 0; 
			for(Integer it: adj.get(i)) {
				transpose.get(it).add(i); 
			}
		}

		while(st.size() > 0) {
			int node = st.peek(); 
			st.pop(); 
			if(vis[node] == 0) {
				System.out.print("SCC: "); 
				revDfs(node, transpose, vis);
				System.out.println(); 
			}
		}

    }
    public static void main(String args[])
    {
        int n = 7;
        ArrayList<ArrayList<Integer> > adj = new ArrayList<ArrayList<Integer> >();
		
		for (int i = 0; i < n; i++) 
			adj.add(new ArrayList<Integer>());
			
		adj.get(1).add(3);
		adj.get(2).add(1);
		adj.get(3).add(2);
		adj.get(3).add(5);
		adj.get(4).add(6);
		adj.get(5).add(4);
		adj.get(6).add(5);

			
		Main obj = new Main(); 
		obj.kosaRaju(adj, n); 
		
    }
}                      
                      
```
  
### ***Time Complexity***

The above algorithm calls DFS, finds reverse of the graph and again calls DFS. DFS takes O(V+E) for a graph represented using adjacency list. 
Reversing a graph also takes O(V+E) time. For reversing the graph, we simple traverse all adjacency lists.  
 
Overall Time complexity is O(V+E), DFS+TopoSort.   
  
### ***Space Complexity***
  
Overall Space Complexity is O(V+E), Transposing the graph.  
  
### ***Applications***
  
- Vehicle routing applications
- Maps
- Model-checking in formal verification  
  
  
  
  
  
  
  
  
  
  
  






  
  
  

