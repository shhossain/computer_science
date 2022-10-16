#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define frnj(n, k) for(int j = k; j<n; j++)
#define vctri vector<int>
#define vctrl vector<ll>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(){
    int n;  cin>>n;
    vctri arr(n);
    frn(n)  cin>>arr[i];

    vctri ans(n+1);
    ans[0] = 0;

    frni(n, 0){
        if(arr[i] != 0 && ans[i]-arr[i] >= 0){
            cout<< -1 <<endl;
            return;
        }
        else{
            ans[i+1] = arr[i]+ans[i];
        }
    }

    frni(n+1, 1)
        cout<<ans[i]<<' ';
    cout<<endl;
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