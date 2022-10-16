#include <bits/stdc++.h>
using namespace std;
 
#define MAX 1001

vector<int> adj[MAX];
int vis[MAX];
int Euler[2 * MAX];
 
// Function to add edges to tree
void add_edge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void eulerTree(int u, int &indx)
{
    vis[u] = 1;
    Euler[indx++] = u;
    for (auto it : adj[u]) {
        if (!vis[it]) {
            eulerTree(it, indx);
            Euler[indx++] = u;
        }
    }
}
 
int main()
{
    int N, M;
    cin >> N >> M;
 
    for(int i = 0; i < M; i++){
      int a,b;
      cin >> a >> b;
      add_edge(a, b);
    }
 
    // Consider 1 as root and 0 as index.
    int index = 0; 
    int root = 1;
    eulerTree(root, index);
  
    for (int i = 0; i < (2*N-1); i++)     // To print Euler Tour of tree
        cout << Euler[i] << " ";

 
    return 0;
}
