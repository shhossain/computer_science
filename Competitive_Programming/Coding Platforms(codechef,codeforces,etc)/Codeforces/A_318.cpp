#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    ll n, k;
    cin>>n>>k;
    if(n%2 == 0){
        if(k<=n/2) cout<<1+2*(k-1)<<endl;
        else cout<<2*(k-(n/2))<<endl;
    }
    else if(n%2 == 1){
        if(k<=(n/2)+1) cout<<1+2*(k-1)<<endl;
        else cout<<2*(k-(n/2+1))<<endl;
    }
 return 0;
}