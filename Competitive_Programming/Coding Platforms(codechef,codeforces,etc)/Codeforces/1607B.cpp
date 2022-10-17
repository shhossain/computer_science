#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll int t;
    cin>>t;

    while(t--){
        ll int x0,n;
        cin>>x0>>n;
        ll int ans=0;

        if(!(x0&1)){
            if(n%4==0){
                ans = x0;
            }else if(n%4==1){
                ans = x0-n;
            }else if(n%4==2){
                ans = x0+1;
            }else if(n%4==3){
                ans = x0 + (n+1);
            }
        }else if(x0&1){
            if(n%4==0){
                ans = x0;
            }else if(n%4==1){
                ans = x0+n;
            }else if(n%4==2){
                ans = x0-1;
            }else if(n%4==3){
                ans = x0 - (n+1);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}