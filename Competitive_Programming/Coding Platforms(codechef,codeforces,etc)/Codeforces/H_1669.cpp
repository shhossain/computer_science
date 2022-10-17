#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define vctri vector<int>
#define vctrl vector<ll>

ll setBitNumber(ll n)
{
    ll k = (ll)(log2(n));
    return 1 << k;
}

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
        ll n, k;    cin>>n>>k;
        vctrl arr(n);
        vctri cnt(32, 0);
        
        frn(n){
            cin>>arr[i];
            for(int j = 30; j >= 0; --j){
                if(arr[i] & (1 << j))   cnt[j]++;
            }
        }

        ll ans = 0;
        for(int j = 30; j >= 0; --j){
            ll a = n-cnt[j];
            if(a<=k){
                k-=a;
                ans += (1<<j); 
            }
        }
        cout<<ans<<endl;
    }
 return 0;
}