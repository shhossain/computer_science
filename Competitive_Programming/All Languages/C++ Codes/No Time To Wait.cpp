#include <iostream>
#define ll long long int
using namespace std;
int main()
{
    ll n,h,x;
    cin>>n>>h>>x;
    
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    ll flag=0;
    
    for(ll i=0;i<n;i++)
    {
        if(a[i]+x >= h)
        {
            cout<<"YES\n";
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    {
        cout<<"NO\n";
    }
    return 0;
    
}
