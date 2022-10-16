#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        long long int n,r;
        cin>>n>>r;
        long long int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        long long int b[n];
        for(int i=0;i<n;i++)
        cin>>b[i];
        long long int mx = b[0], tmp = b[0];
        long long int z = 0;
        for(int i = 1;i<n;i++)
        {
            long long int x = a[i] - a[i-1];
            tmp = max(z,tmp - r*x);
            tmp += b[i];
            mx = max(mx,tmp);
        }
        cout<<mx<<endl;
    }
}
