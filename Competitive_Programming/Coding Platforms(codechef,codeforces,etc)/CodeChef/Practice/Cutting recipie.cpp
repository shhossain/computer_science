#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int hcf(int a,int b){
    while (a!=b){
        if (a>b)
        a-=b;
        else 
        b-=a;
    }
    return a;
}
int main() {
int r;cin>>r;while (r--){
int x;cin>>x;int ar[x];
for(int i=0;i<x;i++){
    cin>>ar[i];
}
//int h =hcf(ar[0],ar[1]);
int h=ar[0];
for(int i=1;i<x;i++){
    h = hcf (h,ar[i]);
    //cout <<h<<endl;
}
//cout <<h<<endl;
for(int i=0;i<x;i++)
cout <<ar[i]/h<<' ';
}
    return 0;
}
