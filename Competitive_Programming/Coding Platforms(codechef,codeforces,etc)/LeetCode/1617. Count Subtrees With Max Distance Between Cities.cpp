class Solution {
public:
    vector<int> countSubgraphsForEachDiameter(int n, vector<vector<int>>& edges) {
        vector <int> v(n-1,0);
        vector <int> adj[16];
        for(int i=0;i<n-1;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
       
        for(int msk=1;msk<(1<<n);msk++){
            int j ;
            for( j = 0;j<n;j++){
                if( ((msk>>j)&1) ) break;
            }
            int st_node = j;
            int vis[16] = {0};
            int d[16];
            for(int i=0;i<n;i++) d[i] = 1e8;
            queue <int> q;
            d[j] = 0;
            vis[j] = 1;
            q.push(j);
            while(!q.empty()){
                int u = q.front();
                //cout<<u<<" ";
                q.pop();
                u++;
                for(auto v1:adj[u]){
                    int c=v1-1;
                    if( vis[c]==0 && ((msk>>c)&1) ){
                        d[c] = d[u-1] + 1;
                        vis[c] = 1;
                        q.push(c);
                    }
                }
            }
           // cout<<"\n";
            int flag =1;
            for(int i=0;i<n;i++){
                if(((msk>>i)&1) && d[i]==1e8   ) {
                    flag = 0;
                    break;
                }
            }
            if(!flag) continue;
            j = st_node;
            int m = 0;
            for(int i=0;i<n;i++)
                if(vis[i] && d[i]>=m){
                    j=i;m=d[i];
                }
         if(msk==2) cout<<"M "<<j<<"\n";
            if(msk==2){
                for(int i=0;i<n;i++)
                    cout<<i+1<<"#"<<d[i]<<" ";
                cout<<"\n";
            }
            for(int i=0;i<n;i++){
                vis[i] = 0;
                d[i] = 0;
            }
            d[j] = 0;
            vis[j] = 1;
            q.push(j);
            while(!q.empty()){
                int u = q.front();
                q.pop();
                u++;
                for(auto v1:adj[u]){
                    int c=v1-1;
                    if( vis[c]==0 && ((msk>>c)&1) ){
                        d[c] = d[u-1] + 1;
                        vis[c] = 1;
                        q.push(c);
                    }
                }
            }
            m = 0;
            if(msk==2){
                for(int i=0;i<n;i++)
                    cout<<i+1<<"#"<<d[i]<<" ";
                cout<<"\n";
            }
            for(int i=0;i<n;i++){
                if(vis[i] ) m = max(m,d[i]);
            }
            if(msk==15)
                cout<<"J "<<m<<"\n";
            if(m){
                v[m-1]++;
                cout<<msk<<" "<<m<<"\n";
            }
        }
        return v;
    }
};
