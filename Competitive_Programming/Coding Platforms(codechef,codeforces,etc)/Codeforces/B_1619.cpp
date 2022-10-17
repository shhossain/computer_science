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

    int t;	cin>>t;
    while(t--){
        ll n;   cin>>n;
        set<ll> s;
        for (int i = 1; i * i <= n; i++)
            s.insert(i * i);
        for (int i = 1; i * i * i <= n; i++)
            s.insert(i * i * i);

        cout<<s.size()<<endl;
    }
 return 0;
}