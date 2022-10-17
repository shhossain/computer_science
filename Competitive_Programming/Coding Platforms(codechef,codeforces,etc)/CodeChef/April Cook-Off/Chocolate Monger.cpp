#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++)mp[a[i]]+=1;
        int res = 0;
        
        for(auto it = mp.begin();it!=mp.end();it++){
            res += it->second-1;
        }
        if(res<x){
            cout<<mp.size()-x+res<<endl;
        }
        else{
            cout<<mp.size()<<endl;
        }
    }
}
