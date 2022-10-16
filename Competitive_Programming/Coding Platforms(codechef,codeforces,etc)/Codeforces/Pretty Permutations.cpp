#include<bits/stdc++.h>
using namespace std;

#define t1 int t; cin >>t 
#define n1 int n; cin >>n
#define fr for(int i=1;i<=n-1;i++)


int main(){
    t1;
    while(t--){
        n1;
        if(n%2!=0){
            cout<<3<<" "<<1<<" "<<2<<" ";
            for(int i=4;i<=n;i++){
                if(i%2==0){
                    cout<<i+1<<" ";
                }
                else{
                    cout<<i-1<<" ";
                }
            }
            cout<<"\n";
        }
        else{
            fr{
                if(i%2==0){
                    cout<<i-1<<" ";
                }
                else{
                    cout<<i+1<<" ";
                }
            }
            cout<<n-1<<" ";
            cout<<"\n";
        }
    }
    return 0;
}