#include<bits/stdc++.h>
using namespace std;

vector<int> shortestPath(int V, vector<int> adj[], int src){
    vector<int> ans(V, INT_MAX);
    queue<int> q;

    ans[src] = 0;

    q.push(src);

    while(!q.empty()){
        int n = q.front();
        q.pop();

        for(auto i : adj[n]){
            if(ans[n] + 1 < ans[i]){
                ans[i] = ans[n] + 1;
                q.push(i);
            }
        }
    }

    return ans;
}

int main(){

    vector<int> adj[9];
    adj[0] = {1, 3};
    adj[1] = {0, 2, 3};
    adj[2] = {1, 6};
    adj[3] = {0, 4};
    adj[4] = {3, 5};
    adj[5] = {4, 6};
    adj[6] = {2, 5, 7, 8};
    adj[7] = {6, 8};
    adj[8] = {6, 7};

    vector<int> ans = shortestPath(9, adj, 0);

    for(auto i : ans)
        cout<<i<<" ";

    return 0;
}