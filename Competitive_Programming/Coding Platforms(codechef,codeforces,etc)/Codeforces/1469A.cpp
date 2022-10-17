#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n=s.length();

        if(n%2==0 && s[0]!=')' && s[n-1]!='('){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}