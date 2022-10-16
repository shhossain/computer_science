#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll MAX = 1e9+7;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        double ans=log2((double)n);
        ll ans2=log2(n);
        if(ans-ans2>0){
            ll power=pow(2,ans2);
            ll power2=pow(2,ans2-1);
            ll sol1 = n+1- power%MAX;
            ll sol2 = power - power2%MAX;
            if(sol2>sol1){
               cout<<(sol2)%MAX<<endl;
            }else{
                cout<<(sol1)%MAX<<endl;
            }
        }else{
            ll power=pow(2,ans2-1);
            ll sol = n- power%MAX;
            cout<<(sol)%MAX<<endl;
        }
    }
return 0;
}