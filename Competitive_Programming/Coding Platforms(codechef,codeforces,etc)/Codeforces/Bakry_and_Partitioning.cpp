#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001
#define maxn 1000006
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define pb push_back
#define f first

using namespace std;

ll flag;

void dfs(ll x,vector<ll> adj[],ll p,ll subxor[],ll arr[])
{
  subxor[x]^=arr[x];
	for(auto& i : adj[x])
	{
    if (i==p) continue;
    dfs(i,adj,x,subxor,arr);
    subxor[x]^=subxor[i];
	}
}

void dfs2(ll x,vector<ll> adj[],ll p,ll count[],ll tot,ll subxor[])
{
	for(auto& i : adj[x])
	{
    if (i==p) continue;
    dfs2(i,adj,x,count,tot,subxor);
    count[x]+=count[i];
	}
  if (subxor[x]==tot) count[x]=max(count[x],1LL);
  if (subxor[x]==0 && count[x]>0) flag=1;
}

void dfs3(ll x,vector<ll> adj[],ll p,ll count[],ll tot,ll subxor[])
{
  if (subxor[x]==tot && count[0]-count[x]>0) flag=1;
  for(auto& i : adj[x])
	{
    if (i==p) continue;
    dfs3(i,adj,x,count,tot,subxor);
	}
}

int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
    flag=0;
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for (ll i=0;i<n;i++) cin>>arr[i];
    std::vector<ll> adj[n];
    ll a,b;
    for (ll i=0;i<n-1;i++) {
      cin>>a>>b;
      adj[a-1].pb(b-1);
      adj[b-1].pb(a-1);
    }
    ll subxor[n]={};
    ll count[n]={};
    ll x=0;
    for (ll i=0;i<n;i++) x^=arr[i];
    if (x==0) cout<<"YES"<<endl;
    else if (k==2) cout<<"NO"<<endl;
    else {
      dfs(0,adj,-1,subxor,arr);
      dfs2(0,adj,-1,count,x,subxor);
      // if (flag==1) cout<<"YES"<<endl;
      // else cout<<"NO"<<endl;
      dfs3(0,adj,-1,count,x,subxor);
      if (flag==1) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      // for (ll i=0;i<n;i++) cout<<subxor[i]<<" ";
      // cout<<endl;
      // for (ll i=0;i<n;i++) cout<<count[i]<<" ";
      // cout<<endl;
    }
	}
	return 0;
}
