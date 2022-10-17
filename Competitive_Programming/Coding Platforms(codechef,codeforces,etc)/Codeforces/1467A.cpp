#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll int t;
    cin>>t;

    while(t--){
        ll int n;
        cin>>n;
        string s="989";
        if(n<=3){
            cout<<s.substr(0,n)<<endl;
        }else{
            cout<<s;
            for(int i=3;i<n;i++){
                cout<<(i-3)%10;
            }

            cout<<endl;
        }
    }
    return 0;
}