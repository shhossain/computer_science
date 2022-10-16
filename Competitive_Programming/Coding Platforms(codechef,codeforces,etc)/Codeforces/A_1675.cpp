#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define vctri vector<int>
#define vctrl vector<ll>

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    int t;	cin>>t;
    while(t--){
        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;

        ll m = x-a;
        ll n = y-b;

        ll cnt = 0;
        if(m>=0) cnt += m;
        if(n>=0) cnt += n;

        if(cnt<=c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
 return 0;
}