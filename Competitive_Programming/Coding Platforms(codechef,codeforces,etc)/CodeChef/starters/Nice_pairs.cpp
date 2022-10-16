#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      ll t;
      cin>>t;
      while(t--)
      {
          ll n,count=0;
          cin>>n;
          string s;
          cin>>s;
          s.insert(0,"0",1);
          for(int i=1;i<=9;i++)
          {
              for(int j=1;j<=n;j++)
              {
                  if((j+i)<=n)
                  {
                      ll a=s[j];
                      ll b=s[j+i];
                      ll x=(a>b)?(a-b):(b-a);
                      if(x==i)
                      {
                          count++;
                      }
                  }
              }
          }
          cout<<count<<endl;
      }
}
