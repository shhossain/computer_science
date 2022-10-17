#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    if(n == 1){
        cout<< 2 <<endl;
        return;
    }
    if(n%3==0){
        cout<<n/3<<endl;
    }
    else{
        if(n%3==2){
            cout<<n/3 + 1<<endl;
        }
        else{
            ll c= n/3 - 1; 
            cout<<(c) + (n-c*3)/2<<endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
///	freopen("input.txt", "r", stdin);
///	freopen("output.txt", "w", stdout);
#endif

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}