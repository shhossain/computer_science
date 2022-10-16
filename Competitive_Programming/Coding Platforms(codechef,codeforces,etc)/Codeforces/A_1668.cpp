#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n, m;    cin>>n>>m;

    if((n == 1 && m > 2) || (m == 1 && n > 2)){
        cout<< -1<<endl;
        return;
    }
    if(n == 1 && m == 1){
        cout<<0<<endl;
        return;
    }

    ll mini = min(n, m);
    ll ans;
    ans = 2*(mini-1);
    ll diff = abs(n-m);
    if(diff == 1)
        ans += 1;
    else{
        if(diff%2 != 0)
            ans += 2*diff-1;
        else
            ans += 2*diff;
    }

    cout<<ans<<endl;
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
        solve();
    }
 return 0;
}