
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,ans;
        cin>>a>>b>>n;
        if(n%2 == 0)
        ans=max(a,b)/min(a,b);
        else
        ans=max(2*a,b)/min(2*a,b);
        cout<<ans<<"\n";
    }
}
