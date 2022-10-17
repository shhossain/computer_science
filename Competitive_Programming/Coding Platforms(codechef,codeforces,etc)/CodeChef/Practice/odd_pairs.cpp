#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
     ll N ;
     cin>>N;
 
    ll even = N / 2;
 
    ll odd = N - even;
 
    cout << 2*even * odd<<endl;
 
    
}
int main() {
    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
