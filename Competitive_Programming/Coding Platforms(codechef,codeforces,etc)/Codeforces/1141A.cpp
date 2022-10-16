#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll int n,m;
    cin>>n>>m;

    ll int step=0;
    
    if(m%n!=0){
        cout<<-1<<endl;
    }else{
        ll int d=m/n;

        bool flag=true;
        while(d){
            if(d==1){
                break;
            }

            if(d%2==0){
                d/=2;
                step++;
            }else if(d%3==0){
                d/=3;
                step++;
            }else{
                flag=false;
                cout<<"-1"<<endl;
                break;
            }
        }
        if(flag){
            cout<<step<<endl;
        }

        // cout<<step<<endl;
    }
    return 0;
}