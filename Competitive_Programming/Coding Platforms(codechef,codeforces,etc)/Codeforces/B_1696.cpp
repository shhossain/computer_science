#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define vctri vector<int>
#define vctrl vector<ll>
#define all(x) x.begin(), x.end()

void solve(){
    int n;  cin>>n;
    vctrl arr(n+1, 0);
    int zcnt = 0;
    frn(n){
        cin>>arr[i];
        if(arr[i] == 0)    zcnt++;
    }
    if(zcnt == n){
        cout<<0<<endl;
        return;
    }
    int cnt = 0;
    frn(n){
        if((arr[i] != 0 and arr[i+1] == 0) || (arr[i] == 0 and arr[i+1] != 0)){
            cnt++;
        }
        else    continue;
        // if(cnt >= 2){
        //     cout<<2<<endl;
        //     return;
        // }
    }
    if(cnt > 2)    cout<<2<<endl;
    else    cout<<1<<endl;
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