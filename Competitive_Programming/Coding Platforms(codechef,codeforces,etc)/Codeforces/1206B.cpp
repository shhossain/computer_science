#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;

    vector<ll int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    ll int pos=0,neg=0,zero=0;

    ll int sum=0;

    for(int i=0;i<n;i++){
        if(v[i]==1 || v[i]==-1){
            continue;
        }
        else if(v[i]<0){
            sum+=abs(v[i]+1);
            v[i]=-1;
        }else if(v[i]>0){
            sum+=v[i]-1;
            v[i]=1;
        }
    }
    

    for(int i=0;i<n;i++){
        if(v[i]==0){
            zero++;
            v[i]=1;
        }else if(v[i]==1){
            pos++;
        }else if(v[i]==-1){
            neg++;
        }
    }
    sum+=zero;
    pos+=zero;

    if(neg%2==1){
        if(zero > 0){
            pos--;
        }else{
            sum+=2;
        }
    }

    cout<<sum<<endl;
    return 0;
}