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
    int h;  cin>>h;
    vctri arr(3);
    frn(3)  cin>>arr[i];

    int cnt = 0;
    if(arr[h-1] != 0)   cnt++;
    else{
        cout<<"NO"<<endl;
        return;
    }

    if(arr[arr[h-1]-1] != 0)  cnt++;
    else{
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
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