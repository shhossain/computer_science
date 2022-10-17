#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define vctri vector<int>
#define vctrl vector<ll>
#define all(x) x.begin(), x.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    int n;  cin>>n;
    vctrl arr(n);
    ll sum = 0;
    frn(n){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(all(arr));

    int m;  cin>>m;
    frn(m){
        ll x, y;    cin>>x>>y;
        ll c = lower_bound(all(arr), x)-arr.begin();
        ll ans = 1e18;
        if(c > 0)
            ans = min(ans, x-arr[c-1]) + max(0LL, y-sum+arr[c-1]);
        if(c<n)
            ans = min(ans, max(0LL, y-sum+arr[c]));
        cout<<ans<<endl;
    }
 return 0;
}