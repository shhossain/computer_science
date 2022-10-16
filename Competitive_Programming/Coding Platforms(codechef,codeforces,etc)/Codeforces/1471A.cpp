#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int> v(n);;

        ll sum=0,maxim=0,minim=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];

            maxim+=v[i]/x;

            if(v[i]%x!=0){
                maxim++;
            }
        }

        minim = (sum/x);
        if(sum%x!=0){
            minim++;
        }

        cout<<minim<<" "<<maxim<<endl;
    }
    return 0;
}