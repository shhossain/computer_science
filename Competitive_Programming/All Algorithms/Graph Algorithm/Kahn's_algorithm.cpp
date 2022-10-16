/* Author: 
          
          shankhdhar234himanshu@gmail.com
  
                                              */      

/*                                Topological sorting 

   * Topological sorting is possible only in case of DAG ( Directed Acyclic Graph ) . 
to check what is DAG go through this link : https://en.wikipedia.org/wiki/Directed_acyclic_graph
   
   * Topological sorting : Topological sorting for Directed Acyclic Graph (DAG) is a linear ordering 
   of vertices such that for every directed edge u v, vertex u comes before v in the ordering.
   
   * A DAG G has at least one vertex with in-degree 0 and one vertex with out-degree 0.

   * Algorithm: Steps involved in finding the topological ordering of a DAG: 
Step-1: Compute in-degree (number of incoming edges) for each of the vertex present in the DAG and initialize the count of visited nodes as 0.
Step-2: Pick all the vertices with in-degree as 0 and add them into a queue (Enqueue operation)
Step-3: Remove a vertex from the queue (Dequeue operation) and then. 
 

Increment the count of visited nodes by 1.
Decrease in-degree by 1 for all its neighbouring nodes.
If the in-degree of neighbouring nodes is reduced to zero, then add it to the queue.
Step 4: Repeat Step 3 until the queue is empty.
Step 5: If the count of visited nodes is not equal to the number of nodes in the graph then the topological sort is not possible for the given graph.

    * Algorithm to compute In-Degree
If we have an from A towards B then we will do in_degree[B]++ , we will increase the in-degree of B by 1.
                                                                            
    Complexity Analysis: 
 

Time Complexity: O(V+E). 
The outer for loop will be executed V number of times and the inner for loop will be executed E number of times.
Auxiliary Space: O(V). 
The queue needs to store all the vertices of the graph. So the space required is O(V)                                                                     
                                                                        */

#include<bits/stdc++.h>
#define code lli n,k;cin>>n>>k;lli a[n];loop0(i,n) cin>>a[i]
#define lli long long int
#define test lli t;cin>>t;while(t--)
#define arrin lli n;cin>>n;lli a[n];for(lli i=0;i<n;i++)cin>>a[i]       
#define mod 1000000007
#define pb push_back
#define loop0(i,n) for(int i=0; i<n; i++)
#define loop1(i,n) for(int i=1; i<=n; i++)
#define rev0(i,n)  for(int i=n-1; i>=0; i--)
#define rev1(i,n)  for(int i=n; i>0; i--)
using namespace std;
vector<lli>adj[100005];
lli in[100005];
vector<lli>topo_order;
void topo_sort(lli n)
{
    queue<lli>q;
    for(lli i=1;i<=n;i++)
    {
        if(in[i]==0)
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        lli z=q.front();
        topo_order.push_back(z);
        q.pop();
        for(auto x:adj[z])
        {
            in[x]--;
            if(in[x]==0)
            {
                q.push(x);
            }
        }
    }
}
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
   lli n,m;
   cin>>n>>m;
   loop1(i,n)
   in[i]=0,adj[i].clear();
   while(m--)
   {
       lli a,b;
       cin>>a>>b;
       adj[a].pb(b);
       in[b]++;
   }
   topo_sort(n);
   if(topo_order.size()==n)
   {
    cout<<"Topological Order is this ->\n";
    for(auto x:topo_order)
    cout<<x<<" ";
    cout<<endl;
   }
   else
   {
    cout<<"No Topological Order Exists , as it is not following the necessary to get the topological order\n"
   }
}