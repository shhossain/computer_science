# ***Bellman-Ford Algorithm***

Bellman ford algorithm is used to calculate the shortest paths from a single source vertex to all vertices in the graph. 
This algorithm also works on graphs with a negative edge weight cycle (It is a cycle of edges with weights that sums to a negative number), 
unlike Dijkstra which gives wrong answers for the shortest path between two vertices.
Bellman Ford algorithm is easier to implement when compared to dijkstra algorithm and optimal for distributed systems.

- _The Bellman-Ford algorithm is an example of Dynamic Programming. It starts with a starting vertex and calculates the distances of other 
  vertices which can be reached by one edge. It then continues to find a path with two edges and so on. The Bellman-Ford algorithm follows the bottom-up approach._
  
### ***Relaxing Edges***

- Relaxation is the most important step in Bellman-Ford. It is what increases the accuracy of the distance to any given vertex. 
  Relaxation works by continuously shortening the calculated distance between vertices comparing that distance with other known distances.
- The Edge Relaxation property is defined as the operation of relaxing an edge u → v by checking whether the best-known way from S(source) to v is to go from 
  S → v or by going through the edge u → v. If it is the latter case we update the path to this minimum cost.
  Initially, the reaching cost from S to v is set infinite(∞) and the cost of reaching from S to S is zero.
- Representing the cost of a relaxed edge v mathematically,
          d[v] = min ( d[v], d[u] + c(u, v) ) 
          
          where d[u] represents the reaching cost from S to u.
                d[v] represents the reaching cost from S to v.
                c(u, v) represents reaching cost from u to v.
                
 
## ***Example :***

<img src="https://static.javatpoint.com/tutorial/daa/images/bellman-ford-algorithm.png">

## ***Intuition***

- The algorithm calculates the shortest paths in a bottom-up manner. It first calculates the shortest distances which have at most one edge in the path. 
  Then, it calculates the shortest paths with at-most 2 edges, and so on.
- After the i-th iteration of the outer loop, the shortest paths with at most i edges are calculated. There can be maximum |V| – 1 edges in any simple path,
  that is why the outer loop runs |v| – 1 times.
- The idea is, assuming that there is no negative weight cycle if we have calculated shortest paths with at most i edges, then an iteration over all edges 
  guarantees to give the shortest path with at-most (i+1) edges.

## ***Approach***

- This step initializes distances from the source to all vertices as infinite and distance to the source itself as 0. 
  Create an array dist[] of size |V| with all values as infinite except dist[src] where src is source vertex.
- This step calculates shortest distances. Do following |V|-1 times where |V| is the number of vertices in given graph. Do following for each edge u-v.
  - If dist[v] > dist[u] + weight of edge uv, then update dist[v] to
  - dist[v] = dist[u] + weight of edge uv
- This step reports if there is a negative weight cycle in the graph. Again traverse every edge and do following for each edge u-v.
- If dist[v] > dist[u] + weight of edge uv, then “Graph contains negative weight cycle” 
  The idea of step 3 is, step 2 guarantees the shortest distances if the graph doesn’t contain a negative weight cycle. 
- If we iterate through all edges one more time and get a shorter path for any vertex, then there is a negative weight cycle.

## ***Implementation***

- ***C++ Code :***

```cpp

#include<bits/stdc++.h>
using namespace std;
struct node {
    int u;
    int v;
    int wt; 
    node(int first, int second, int weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

int main(){
    int N=6,m=7;
    vector<node> edges; 
	edges.push_back(node(0,1,5));
	edges.push_back(node(1,2,-2));
	edges.push_back(node(1,5,-3));
	edges.push_back(node(2,4,3));
	edges.push_back(node(3,2,6));
	edges.push_back(node(3,4,-2));
	edges.push_back(node(5,3,1));
    int src=0;
    int inf = 10000000; 
    vector<int> dist(N, inf); 
    dist[src] = 0; 
    for(int i = 1;i<=N-1;i++) {
        for(auto it: edges) {
            if(dist[it.u] + it.wt < dist[it.v]) {
                dist[it.v] = dist[it.u] + it.wt; 
            }
        }
    }

    int fl = 0; 
    for(auto it: edges) {
        if(dist[it.u] + it.wt < dist[it.v]) {
            cout << -1; 
            fl = 1; 
            break; 
        }
    }
    
    if(!fl) {
        for(int i = 0;i<N;i++) {
            cout << dist[i]<<" ";
        }
    }
    return 0;
}

```

- ***Java Code :***

```java

import java.util.*; 

class Node 
{
	private int u;
    private int v;
    private int weight;
    
    Node(int _u, int _v, int _w) { u = _u; v = _v; weight = _w; }
    
    Node() {}
    
    int getV() { return v; }
    int getU() { return u; }
    int getWeight() { return weight; }

}
 

class Main
{
    void bellmanFord(ArrayList<Node> edges, int N, int src)
    {
        int dist[] = new int[N];
        for(int i = 0;i<N;i++) dist[i] = 10000000; 

        dist[src] = 0;

    	for(int i = 1;i<=N-1;i++) {
    		for(Node node : edges) {
    			if(dist[node.getU()] + node.getWeight() < dist[node.getV()]) {
    				dist[node.getV()] = dist[node.getU()] + node.getWeight(); 
    			}
    		}
    	}

    	int fl = 0; 
    	for(Node node: edges) {
    		if(dist[node.getU()] + node.getWeight() < dist[node.getV()]) {
    			fl = 1;
    			System.out.println("Negative Cycle"); 
    			break;
    		}
    	}

    	if(fl == 0) {
    		for(int i = 0;i<N;i++) {
    			System.out.print(  dist[i]+" "); 
    		}
    	}
    }
    public static void main(String args[])
    {
        int n = 6;
        ArrayList<Node> adj = new ArrayList<Node>();
		
			
		adj.add(new Node(3, 2, 6));
		adj.add(new Node(5, 3, 1));
		adj.add(new Node(0, 1, 5));
		adj.add(new Node(1, 5, -3));
		adj.add(new Node(1, 2, -2));
		adj.add(new Node(3, 4, -2));
		adj.add(new Node(2, 4, 3));

	
		Main obj = new Main(); 
		obj.bellmanFord(adj, n, 0);
		
    }
}

```

### ***Time Complexity :***

Time complexity of an algorithm quantifies the amount of time taken by an algorithm to run as a function of the length of the input. 
Time complexity is commonly estimated by counting the number of elementary operations performed by the algorithm, supposing that each 
elementary operation takes a fixed amount of time to perform.

- Since we are traversing all the edges V-1 times, and each time we are traversing all the E vertices. 
  
  Therefore the _time complexity is O(V.E)_.

### ***Space Complexity :***

Space complexity of an algorithm quantifies the amount of space or memory taken by an algorithm to run as a function of the length of the input. 
It is the memory required by an algorithm until it executes completely.

- Since we are using an auxiliary array dis of size V, the _space complexity is O(V)_.
  
  where V and E are numbers of vertices and edges respectively.
  
### ***Why Dijkstra’s Algorithm doesn’t work?***

The presence of negative edge weights makes the situation dicey. Djikstra’s algorithm might work in some cases and fail in some.
Recall that in Dijkstra’s algorithm, we update the distance array every time we find a better solution which was a lesser distance.
With the presence of negative edge weights, our algorithm would continue to update the distance array with lesser and lesser values and 
we might end up in time limit exceeded or segmentation fault error.

### ***Important Points***

- Negative weights are found in various applications of graphs. For example, instead of paying the cost for a path, we may get some advantage if we follow the path.
- Bellman-Ford works better (better than Dijkstra’s) for distributed systems. Unlike Dijkstra’s where we need to find the minimum value of all vertices, in Bellman-Ford, 
  edges are considered one by one. 
- Bellman-Ford does not work with an undirected graph with negative edges as it will be declared as a negative cycle.

  
### ***Applications***

- Examining a graph for the presence of negative weight cycles.
- Using negative weights, find the shortest path in a graph.
- Routing is a concept used in data networks.

