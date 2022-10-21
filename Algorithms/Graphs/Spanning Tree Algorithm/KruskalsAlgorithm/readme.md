# Kruskal's Algorithm
It is used to find the minimum spanning tree for a connected weighted graph. The main target of the algorithm is to find the subset of edges by using which we can traverse every vertex of the graph. It follows the greedy approach that finds an optimum solution at every stage instead of focusing on a global optimum.

# Complexity
|     Time Complexity    |  
|------------------------|
| O(E logE)  / O(V logV) |


# Algorithm
Step 1: Create a forest F in such a way that every vertex of the graph is a separate tree.  
Step 2: Create a set E that contains all the edges of the graph.  
Step 3: Repeat Steps 4 and 5 while E is NOT EMPTY and F is not spanning  
Step 4: Remove an edge from E with minimum weight  
Step 5: IF the edge obtained in Step 4 connects two different trees, then add it to the forest F   
(for combining two trees into one tree).  
ELSE  
Discard the edge  
Step 6: END  

# Implementation

## C++

#include <iostream>    
#include <algorithm>    
using namespace std;    
const int MAX = 1e4 + 5;    
int id[MAX], nodes, edges;    
pair <long long, pair<int, int> > p[MAX];    
void init()    
{    
    for(int i = 0;i < MAX;++i)    
        id[i] = i;    
}      
int root(int x)    
{    
    while(id[x] != x)    
    {    
        id[x] = id[id[x]];    
        x = id[x];    
    }    
    return x;    
}      
void union1(int x, int y)    
{    
    int p = root(x);    
    int q = root(y);    
    id[p] = id[q];    
}     
long long kruskal(pair<long long, pair<int, int> > p[])    
{    
    int x, y;    
    long long cost, minimumCost = 0;    
    for(int i = 0;i < edges;++i)    
    {    
        x = p[i].second.first;    
        y = p[i].second.second;    
        cost = p[i].first;    
        if(root(x) != root(y))    
        {    
            minimumCost += cost;    
            union1(x, y);    
        }        
    }    
    return minimumCost;    
}     
int main()    
{    
    int x, y;    
    long long weight, cost, minimumCost;    
    init();    
    cout <<"Enter Nodes and edges";    
    cin >> nodes >> edges;    
    for(int i = 0;i < edges;++i)    
    {    
        cout<<"Enter the value of X, Y and edges";    
    cin >> x >> y >> weight;    
        p[i] = make_pair(weight, make_pair(x, y));    
    }    
    sort(p, p + edges);    
    minimumCost = kruskal(p);    
    cout <<"Minimum cost is "<< minimumCost << endl;    
    return 0;    
}     