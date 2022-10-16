#include<bits/stdc++.h>
using namespace std;
int main(){
    int V, E;
    cin >> V >> E;
    vector<tuple<int, int, int>> edges;
    int u, v, w;
    for(int i=0;i<E;i++){
        cin >> u >> v >> w;
        edges.push_back(make_tuple(u,v,w));
    }
    
    int source = 0;
    //cin >> source;

    int dist[V];
    for (int i = 0;i<V;i++) dist[i] = INT_MAX;
    dist[source] = 0;

    for(int i=0;i<V-1;i++){
        for(auto x: edges){
            if(dist[get<0>(x)]!=INT_MAX && dist[get<0>(x)]+ get<2>(x) < dist[get<1>(x)]){
                dist[get<1>(x)] = dist[get<0>(x)]+get<2>(x);
            }
        }
    }
    for(auto x: edges){
        if(dist[get<0>(x)]+get<2>(x)< dist[get<1>(x)]){
            cout <<"Negative cycle in the graph"<<endl;
            return -1;
        }
    }
    cout <<"Shortest distance of each node from the source node:"<<endl;
    for(int i=0;i<V;i++){
        cout << i <<" "<<dist[i]<<endl;
    }

    return 0;
}