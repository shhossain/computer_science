# ***Topological Sort***

A Topological Sort or Topological Ordering of a directed graph is a linear ordering of its vertices such that for every directed edge uv from vertex u to vertex v, 
u comes before v in the ordering. Precisely, a topological sort is a graph traversal in which each node v is visited only after all its dependencies are visited. 
**A topological ordering is possible if and only if the graph has no directed cycles, that is, if it is a Directed Acyclic Graph (DAG).** Any DAG has at least one 
topological ordering, and there exist techniques for building topological orderings in linear time for any DAG. Topological sorting has many applications 
especially in ranking problems such as feedback arc set. Topological sorting is possible even when the DAG has disconnected components.

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/0/03/Directed_acyclic_graph_2.svg/458px-Directed_acyclic_graph_2.svg.png" height="300" width="300">

The graph shown above has many valid topological sorts, including:
5, 7, 3, 11, 8, 2, 9, 10 (visual top-to-bottom, left-to-right)
3, 5, 7, 8, 11, 2, 9, 10 (smallest-numbered available vertex first)
5, 7, 3, 8, 11, 10, 9, 2 (fewest edges first)
7, 5, 11, 3, 10, 8, 9, 2 (largest-numbered available vertex first)
5, 7, 11, 2, 3, 8, 9, 10 (attempting top-to-bottom, left-to-right)
3, 7, 8, 5, 11, 10, 2, 9 (arbitrary)


**There are two ways / methods to obtain the Topological Ordering of a Directed Acyclic Graph (DAG).**
1. [Breadth First Search / Khan's Algorithm](#breadth-first-search--khans-algorithm)
2. [Depth First Search](#depth-first-search)


## ***Breadth First Search / Khan's Algorithm*** 

**Problem statement :** Given a graph, find the topological order for the given graph.

<img src="https://lh5.googleusercontent.com/RHckT-WmMrHUv-yXrdlc-PfHF1tnJxKHvPIK4dOKRbqALb4hrQYzr27mvHHvGVrBCBMYmR25K6e4PeFBx_BJy8J3Topn40kZK-u-TJbF13DrkwMyv9j_ai5iGXhtjDGhHzwIeLtH" align="center" height="300" width="300" >

**Intuition :**

- The problem states that if there is an edge between u and v then u should appear before v, which means we have to start this problem from a node that 
  doesn’t have any previous edges.
- But how to find that node that has no edge before if? 
- Here, we use the concept of in-degree (Number of edges pointing toward a node).
- We find an in-degree which has indegree=0 and we start from this. 
- We use the Indegree concept to find topological sorting. Let’s see how.

**Approach :**

1. In order to maintain the In-degree of each and every node, we take an array of size v( where v is the number of nodes).
2. Find in-degree of all nodes and fill them in an array
3. Now take Queue data structure and add nodes that have in-degree is 0 (as we discussed in the intuition), and simply apply bfs on queue with some condition.
4. Take the top/peek node from Queue ( let the popped node be x), add this x to our answer. 
5. Repeat step 4 till the queue becomes empty.      

   _We’ll apply some conditions to the BFS:_
   
   - Now take neighbour nodes of popped nodes and reduce their in-degree by 1.
   - Check if any of the popped element nodes in degree becomes 0, after reducing in-degree by 1 if it happens then 
      add this neighbour element to the queue for which the in-degree became zero.
      
**Code :**

1. _C++ Code_

```cpp

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> topo(int N, vector<int> adj[]) {
        queue<int> q; 
	    vector<int> indegree(N, 0); 
	    for(int i = 0;i<N;i++) {
	        for(auto it: adj[i]) {
	            indegree[it]++; 
	        }
	    }
	    
	    for(int i = 0;i<N;i++) {
	        if(indegree[i] == 0) {
	            q.push(i); 
	        }
	    }
	    vector<int> topo;
	    while(!q.empty()) {
	        int node = q.front(); 
	        q.pop(); 
	        topo.push_back(node);
	        for(auto it : adj[node]) {
	            indegree[it]--;
	            if(indegree[it] == 0) {
	                q.push(it); 
	            }
	        }
	    }
	    return topo;
	}
};



int main()
{

    	vector<int> adj[6];
    	adj[5].push_back(2);
    	adj[5].push_back(0);
    	adj[4].push_back(0);
    	adj[4].push_back(1);
    	adj[3].push_back(1);
    	adj[2].push_back(3);

    	Solution obj;
    	vector<int> v=obj.topo(6, adj);
    	for(auto it:v)
    	cout<<it<<" ";
    

    return 0;
}

```

2. _Java Code_

```java

import java.util.*;
import java.io.*;
import java.lang.*;

    class Solution
    {
            public boolean isCyclic(int N, ArrayList<ArrayList<Integer>> adj) {
                int topo[] = new int[N];
                int indegree[] = new int[N];
                
                //finding indegree
                for(int i = 0;i<N;i++) {
                    for(Integer it: adj.get(i)) {
                        indegree[it]++;
                    }
                }
                
                
                Queue<Integer> q = new LinkedList<Integer>();
                for(int i = 0;i<N;i++) {
                    //adding nodes to queue with indegree = 0
                    if(indegree[i] == 0) {
                        q.add(i);
                    }
                }
                
                int cnt = 0;
                int ind=0;
                
                while(!q.isEmpty()) {
                    Integer node = q.poll();
                    topo[ind++] = node;
                    cnt++;
                    //getting neighbour nodes of popped node and decreasing  their 
                    indegree by1
                    for(Integer it: adj.get(node)) {
                        indegree[it]--;
                        if(indegree[it] == 0) {
                            q.add(it);
                        }
                    }
                }
                 //printing topological ordering of nodes
                for (int i=0;i< topo.length;i++){
                    System.out.print(topo[i]+" ");
                }
                if(cnt == N) return false;
                return true;
            }
        }
public class TopoLogicalSortBFS {
        public static void main(String args[]) {

            ArrayList < ArrayList < Integer >> adj = new ArrayList < > ();

            // adding new arraylists to 'adj' to add neighbour nodes
            for (int i = 0; i < 6; i++) {
                adj.add(new ArrayList < > ());
            }


            adj.get(5).add(2);
            adj.get(5).add(0);
            adj.get(4).add(0);
            adj.get(4).add(1);
            adj.get(3).add(1);
            adj.get(2).add(3);


           new Solution().isCyclic(6,adj);

        }
    }

```

**Output :** 4 5 2 0 3 1

**Time Complexity :**

Time complexity of an algorithm quantifies the amount of time taken by an algorithm to run as a function of the length of the input. Time complexity is 
commonly estimated by counting the number of elementary operations performed by the algorithm, supposing that each elementary  operation takes a 
fixed amount of time to perform. 

Breaking the algorithm into chunks, we:

  * Determine the indegree for each node. This is O(M) time (where M is the number of edges), since this involves 
    looking at each directed edge in the graph once.
  * Find nodes with no incoming edges. This is a simple loop through all the nodes with some number of constant-time appends. 
    O(N) time (where N is the number of nodes).  
  * Add nodes until we run out of nodes with no incoming edges. This loop could run once for every node—O(N) times. 
    In the body, we:  
        * Do two constant-time operations on an array to add a node to the topological ordering.
        * Decrement the indegree for each neighbor of the node we added. Over the entire algorithm, we'll end up doing exactly one decrement 
          for each edge, making this step O(M) time overall.
  * Check if we included all nodes or found a cycle. This is a fast O(1) comparison.        

_All together, the **time complexity is O(M+N)**._

**Space Complexity :**

Space complexity of an algorithm quantifies the amount of space or memory taken by an algorithm to run as a function of the length of the input. 
It is the memory required by an algorithm until it executes completely.[1]

The data structures we created:
  * indegrees—this has one entry for each node in the graph, so it's O(N) space. 
  * nodesWithNoIncomingEdges—in a graph with no edges, this would start out containing every node, so it's O(N) space in the worst case.
  * topologicalOrdering—in a graph with no cycles, this will eventually have every node. O(N) space.
  
All in all, we have three structures and they're all O(N) space. _Overall **space complexity is O(N)**._  


## ***Depth First Search***

**Problem Statement :** Given a DAG( Directed Acyclic Graph ), print all the vertex of the graph in a topologically sorted order. If there are multiple solutions, print any.

<img src="https://lh4.googleusercontent.com/wFeF2qf9qrTvnaywCNatyVuUTbKGKHtT9Nj2NsL7RXGllIwkt_JrojC2Y25_nk0J-Mt3_3ojnzmoruAFw3YPIn84FdMkQL9EnCY1k6KYPfs0JZmB6VCR_tiniLVgug" align="center" height="300" width="300" >

**Intuition :**
- We use a temporary stack.
- We don’t print the vertex immediately
- we first recursively call topological sorting for all its adjacent vertices, then push it to a stack
- Finally, print the contents of the stack

**NOTE :** A vertex is pushed to stack only when all of its adjacent vertices (and their adjacent vertices and so on) are already in the stack.

**Approach :**
1. Create a stack to store the nodes.
2. Initialize visited array of size N to keep the record of visited nodes.
3. Run a loop from 0 till N
   - if the node is not marked True in visited array
     - Call the recursive function for topological sort and perform the following steps
     - Mark the current node as True in the visited array.
     - Run a loop on all the nodes which has a directed edge to the current node
       - if the node is not marked True in the visited array:
         - Recursively call the topological sort function on the node
     - Push the current node in the stack.
4. Print all the elements in the stack.

**Code :**

1. _C++ Code_

```cpp

#include <bits/stdc++.h>

using namespace std;

class Solution {
  void findTopoSort(int node, vector < int > & vis, stack < int > & st, vector < int > adj[]) {
    vis[node] = 1;

    for (auto it: adj[node]) {
      if (!vis[it]) {
        findTopoSort(it, vis, st, adj);
      }
    }
    st.push(node);
  }
  public:
    vector < int > topoSort(int N, vector < int > adj[]) {
      stack < int > st;
      vector < int > vis(N, 0);
      for (int i = 0; i < N; i++) {
        if (vis[i] == 0) {
          findTopoSort(i, vis, st, adj);
        }
      }
      vector < int > topo;
      while (!st.empty()) {
        topo.push_back(st.top());
        st.pop();
      }
      return topo;

    }
};

//  Driver Code Starts.
int main() {

  int N = 6;

  vector < int > adj[5 + 1];

  adj[5].push_back(2);
  adj[5].push_back(0);
  adj[4].push_back(0);
  adj[4].push_back(1);
  adj[2].push_back(3);
  adj[3].push_back(1);

  Solution obj;
  vector < int > res = obj.topoSort(6, adj);

  cout << "Toposort of the given graph is:" << endl;
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }

  return 0;
} 

```

2. _Java Code_

```java

import java.util.*;
class Solution {
    static void findTopoSort(int node, int vis[], ArrayList<ArrayList<Integer>> adj, Stack<Integer> st) {
        vis[node] = 1; 
        for(Integer it: adj.get(node)) {
            if(vis[it] == 0) {
                findTopoSort(it, vis, adj, st); 
            } 
        }
        st.push(node); 
    }
    static int[] topoSort(int N, ArrayList<ArrayList<Integer>> adj) {
        Stack<Integer> st = new Stack<Integer>(); 
        int vis[] = new int[N]; 
        
        for(int i = 0;i<N;i++) {
            if(vis[i] == 0) {
                findTopoSort(i, vis, adj, st);
            }
        }
        
        int topo[] = new int[N];
        int ind = 0; 
        while(!st.isEmpty()) {
            topo[ind++] = st.pop();
        }
        // for(int i = 0;i<N;i++) System.out.println(topo[i] + " "); 
        return topo; 
    }
    public static void main(String args[])
    {
        ArrayList<ArrayList<Integer>> adj=new ArrayList<>();
        int n=6;
        for(int i=0;i<n;i++)
        {
            ArrayList<Integer> arr=new ArrayList<>();
            adj.add(arr);
        }
        
        adj.get(5).add(2);
        adj.get(5).add(0);
        adj.get(4).add(0);
        adj.get(4).add(1);
        adj.get(2).add(3);
        adj.get(3).add(1);
        
        int res[] = topoSort(6, adj);
   
        System.out.println("Toposort of the given graph is:" );
        for (int i = 0; i < res.length; i++) {
        System.out.print(res[i]+" ");
  }
    }
}

```

**Output :** 5 4 2 3 1 0

**Time Complexity :**

Time complexity of an algorithm quantifies the amount of time taken by an algorithm to run as a function of the length of the input. Time complexity is 
commonly estimated by counting the number of elementary operations performed by the algorithm, supposing that each elementary  operation takes a 
fixed amount of time to perform. 

_Overall Time Complexity is O(N+E)_ where N = Number of node , E = Number of Edges.

**Space Complexity :**


Space complexity of an algorithm quantifies the amount of space or memory taken by an algorithm to run as a function of the length of the input. 
It is the memory required by an algorithm until it executes completely.

_Overall Space Complexity is_ O(N) + O(N) _(~O(N))_ because of visited array and stack data structure. Both will be using O(N).

**Auxiliary Space Complexity :**  

_Auxiliary Space Complexity is O(N)_ due to Recursion call of DFS.


## ***Topological Ordering for graphs other than DAG :***

Topological Sort / Ordering is ***not possible*** in graphs other than DAG because :


1. In an undirected graph we can’t decide which node will come first because there will be no direction.

2. If there is a cycle topological order will not be possible (See below figure to understand why it is not possible for graphs containing cycle).

   <img src="https://lh5.googleusercontent.com/AktJhtW67RIXo0uCQUTyDuQN0Zy_TOnvT_GfHUL_fMEFCDgI95djLpgH-9CcjLJvqytVdfh0up8vjKr65AWAIPRqjWmFGwWb11_UmgGIJCVidMk8KNrETZ9fu3HdHA6s5hL5Zf7P" width="200" height="200" >

   2 ->3 ->4 ->2 here if you can observe 

   2 is appearing before 3

   3 is appearing before 4
  
   4 is appearing before 2 

   But 2 has already appeared before 4, So topological ordering will not be possible









