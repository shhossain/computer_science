#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

    int32_t main()
    {

    int n;
    cin>>n;

    int sum=0;

    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    
    sum=(sum+x+MOD)%MOD;
 }

    int q;
    cin>>q;

 while(q--)
 {
    sum=(2*sum)%MOD;
    cout<<sum<<endl;
 }

 return 0;

}
