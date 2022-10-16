#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(v[i]%3==0){
                c0++;
            }else if(v[i]%3==1){
                c1++;
            }else if(v[i]%3==2){
                c2++;
            }
        }
        int count=0;

        if(c0>n/3){
            if(c2<=(n/3)){
                count=c0-(n/3);
                c0=n/3;
                c1+=count;

                if(c1>(n/3)){
                    count+=(c1-(n/3));
                }
            }
            else{
                count=c0-(n/3);
                count+=2*(c2-(n/3));
            }
        }else if(c1>(n/3)){
            if(c0<=(n/3)){
                count=c1-(n/3);
                c1=(n/3);
                c2+=count;

                if(c2>(n/3)){
                    count+=(c2-(n/3));
                }
            }
            else{
                count=c1-(n/3);
                count+=2*(c0-(n/3));
            }
        }else if(c2>(n/3)){
            if(c0<=(n/3)){
                count=c2-(n/3);
                c2=(n/3);
                c0+=count;
                if(c0>(n/3)){
                    count+=(c0-(n/3));
                }
            }else{
                count=c2-(n/3);
                count+=2*(c1-(n/3));
            }
        }
        cout<<count<<endl;
    }
    return 0;
}