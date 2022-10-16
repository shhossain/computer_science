/*

Problem Link : 
https://leetcode.com/problems/number-of-operations-to-make-network-connected/


Idea :
Here the main goal is to find the number of connected components in the network, we have to reduce the number of idependently connected components to a 
single one. Suppose if there are n independently connected components in the graph then exactly n-1 wires will be needed to make all of them connected.
Number of connected components can be found out using basic depth first search.


My Leetcode Profile :
https://leetcode.com/abhi__ram/

*/

class Solution {
private:
    void dfs(vector<vector<int>> &adj, vector<bool> &visited, int src)
    {
        visited[src] = true;
        for(int i : adj[src])
            if(!visited[i])
                dfs(adj, visited, i);
    }
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        if(connections.size() < n - 1)
            return -1;
        vector<vector<int>> adj(n);
        for(auto v : connections)
        {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        vector<bool> visited(n, false);
        int components = 0;
        for(int i=0; i<n; i++)
            if(!visited[i])
            {
                dfs(adj, visited, i);
                components++;
            }
        return components - 1;
    }
};
