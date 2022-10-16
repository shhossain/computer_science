#include<bits/stdc++.h>
using namespace std; 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v(4);
    for(auto& x:v) cin>>x;
    sort(v.begin(),v.end());
    int flag=0;
    for(int i=0;i<2;i++)
    {
        int side=v[i]+v[i+1];
        if(v[i+2]<side)
        {
            flag=1;
        }
        else if(v[i+2]==side && flag==0)
        {
            flag=-1;
        }
    }
    if(flag==1) cout<<"TRIANGLE\n";
    else if(flag==-1) cout<<"SEGMENT\n";
    else cout<<"IMPOSSIBLE\n";
}
