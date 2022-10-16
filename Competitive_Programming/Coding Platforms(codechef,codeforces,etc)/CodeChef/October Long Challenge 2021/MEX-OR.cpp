#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll MAX = 1e9+7;
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        ll power=log2(x);
        
        ll ans = pow(2,power%MAX);
        ll ans2=pow(2,power+1%MAX);
        if(x==0){
            cout<<1<<endl;
        }
         else{    
            if(x==(ans2-1)%MAX){
                cout<<ans2<<endl;
            }else{        
                cout<<ans%MAX<<endl;
            }
        }
    }
return 0;
}