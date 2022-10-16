#include<iostream>
#include<vector>
#define pb push_back
#define vi vector<int>
#include<bits/stdc++.h>
using namespace std;
int maxD,maxN;
int vis[10001];
vi ar[10001];
void dfs(int n,int d){
    vis[n]=1;
    if(d>maxD)
    {
        maxD=d;
        maxN=n;
    }
    for(int child:ar[n]){
        if(vis[child]==0){
            dfs(child,d+1);
        }
    }
}
int main()
{
    int n,i,a,b;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter all the edges"<<endl;
    for(i=1;i<=n-1;i++){
        cin>>a>>b;
        ar[a].pb(b);
        ar[b].pb(a);
    }
    maxD=-1;
    dfs(1,0);

    for(i=1;i<=n;i++){
        vis[i]=0;
    }
    maxD=-1;
    a=maxN;
    dfs(maxN,0);
    b=maxN;
    cout<<"Longest path is from "<<a<<" to "<<b<<" of length "<<maxD<<endl;
    return 0;
}
/*
Enter number of elements:10
Enter all the edges
0 1
1 2
2 3
2 9
2 4
4 5
1 6
6 7
6 8
Longest path is from 5 to 7 of length 5
*/
