#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,n;
        cin>>x>>y>>n;
        long long int k=n-(n%x)+y;
        while(k>n)
        {
            k-=x;
        }
        cout<<k<<endl;
    }
    return 0;
   
