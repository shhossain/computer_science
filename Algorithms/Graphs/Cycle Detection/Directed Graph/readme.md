## Cycle Detection in a Directed Acyclic Graph Using topological sorting

> TopoLogical Sorting :  Linear ordering of the vertices such that if there is an edge u-> v , u  appears before v in the ordering .


```
From the definition of topological sort it is clear that it is possible only for directed acyclic graphs . This is because if there exists a cycle then the linear ordering of the nodes would not be followed .
It's main usage is to detect cycles in directed graphs, since no topological order is possible for a graph that contains a cycle. Some of it's uses are: deadlock detection in OS, Course schedule problem etc.
```

Algorithm : 

DFS algo -
```
1. Run a loop from 1 to number of vertices . Then check if each of the vertices are visited
2. If not visited then do a dfs call on that node .
3. We mark the node as visited and check if there are adjacent nodes :

	Case 1 :  If there are no adjacent nodes then the dfs call is over and that node is pushed into the stack .

	Case 2 : If ther are adjacent nodes then make sure that dfs is called only for the unvisited nodes .

4. After each of the dfs calls in over make sure to insert in into the stack .
```
Time Complexity : O(n+e)
sc - O(N) + O(n) 
Asc - O(n)


Kahn's Algorithm (BFS) 

Algo summary : 

1. So we have to maintain an array which will store the indegrees of each of the nodes .
After that traverse through the array and find the nodes having indegrees zero , and push 
them into the queue. 

2. While popping them out of the queue make sure to decrease the indegree of the adjacent nodes by one . Also as you pop the node consider it as a node of topo sort and store them in their order of pop out. As soon as the indegree of a node becomes zero repeat the above steps and finaaly we will have out required ans .


Time Complexity : O(n+e)
Space Complexity : O(n) for queue +  O(n) for storing the indegrees 
```cpp
vector<int> toptSort(int n , vector<int> adj[]){
		queue<int> q ;
		vector<int> indegree(n,0) ;

		for(int i = 0 ; i< n ; i++){
			for(auto it : adj[i] ){
				indegree[it]++ ;
			}
		}

		for(int i = 0 ; i< n ;i++){
			if(indegree[i] == 0){
				q.push(i);
			}
		}

		vector<int> topo ;
		//kahns algo 
		while(!q.empty()){
			int top = q.front() ;
			q.pop() ;
			topo.push_back(top) ;
			for(auto it: adj[top]){
				indegree[it]-- ;
				if(indegree[it] ==0 ){
					q.push(it) ;
				}
			}

		}
		return topo ;
	}
```