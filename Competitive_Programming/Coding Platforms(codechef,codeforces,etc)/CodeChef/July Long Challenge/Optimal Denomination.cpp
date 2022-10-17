#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b)
{
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<ll> arr(n);
        vector<ll> left(n);
        vector<ll> right(n);
        ll ans=LLONG_MAX;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        if(n==1)
        {
            cout<<"1\n";
            continue;
        }
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        left[0]=arr[0];
        right[n-1]=arr[n-1];
         for(int i=1;i<n;i++)
         {
             left[i]=gcd(arr[i],left[i-1]);
         }
         for(int i=n-2;i>=0;i--)
         {
             right[i]=gcd(arr[i],right[i+1]);
         }
          for(int i=0;i<n;i++)
          {
              ll g;
              if(i==0)
              {
                  g=right[i+1];
              }
              else if(i==n-1)
              {
                  g=left[i-1];
              }
              else
              {
                  g=gcd(left[i-1],right[i+1]);
              }
              ll val=sum-arr[i];
              val=val/g;
              if(val<ans)
              ans=val;
          }
          cout<<(ans+1)<<"\n";
    }
	return 0;
}
