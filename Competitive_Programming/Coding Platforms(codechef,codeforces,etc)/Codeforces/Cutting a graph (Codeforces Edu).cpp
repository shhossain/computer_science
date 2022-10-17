#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll  long long int
using namespace __gnu_pbds;
using namespace std;

typedef tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update> pbds;

#define test   ll T;cin >> T;while (T--)
#define f(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
#define rf(i, a, b) for (ll i = (ll)a; i >= (ll)b; i--)
#define pb push_back

const ll MOD = 1000000000 + 7;
const ll MOD1 = 998244353;
 
 ll par[300005];
 ll rk[300005];
 ll mi[300005];
 ll ma[300005];
 
 ll fin(ll src)
 {
     if(par[src]==src)
     return src;
     return par[src]=fin(par[src]);
 }
 
 void unin(ll a,ll b)
 {
     a=fin(a);
     b=fin(b);
     if(rk[a]<rk[b])
     {
         rk[b]+=rk[a];
         par[a]=b;
     }
     else
     {
         rk[a]+=rk[b];
         par[b]=a;
     }
     
 }
 
 vector<ll> adj[110];
bool vis[110];
void dfs(ll src)
{
    vis[src]=true;
    f(i,0,adj[src].size())
    {
        if(!vis[adj[src][i]])
        dfs(adj[src][i]);
    }
}
 
 
int main()
{
   //fast;
    
    ll n,m,k;
    cin>>n>>m>>k;
    vector<pair<ll,ll>> v(m);
    f(i,0,m)
    cin>>v[i].first>>v[i].second;
 
    vector<pair<string,pair<ll,ll>>> v1(k);
 
    f(i,0,300005)
    {
        par[i]=i;
        rk[i]=1;
    }
 
    f(i,0,k)
    {
        string s;ll a,b;
        cin>>v1[i].first>>v1[i].second.first>>v1[i].second.second;
    }
 
    vector<string> ans;
 
    rf(i,k-1,0)
    {
        if(v1[i].first=="ask")
        {
            ll x=fin(v1[i].second.first);
            ll y=fin(v1[i].second.second);
            if(par[x]==par[y])
            ans.pb("YES");
            else
            ans.pb("NO");
        }
        else
        {
             ll x=v1[i].second.first;
            ll y=v1[i].second.second;
            ll p=fin(x);
            ll q=fin(y);
            if(p!=q)
            unin(x,y);
        }
        
    }
 
    rf(i,ans.size()-1,0)
    cout<<ans[i]<<"\n";
 
  
cerr << "Time Elapsed : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
   return 0;
 
}