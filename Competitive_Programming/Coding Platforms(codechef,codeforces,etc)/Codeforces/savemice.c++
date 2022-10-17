#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;
    cin>>t;
    while(t--)
    {
       long long int n,k,i,c=0;
        cin>>n>>k;
       long long int a[k];
        for(i=0;i<k;i++)
        cin>>a[i];
        sort(a,a+n);
       long long int w=0;
        for(i=k-1;i>=0;i--)
        {
            
            if(w>=a[i])
            break;
            c++;
            long long int k=n-a[i];
            w+=k;
        }
       cout<<c<<"\n";
}
}
