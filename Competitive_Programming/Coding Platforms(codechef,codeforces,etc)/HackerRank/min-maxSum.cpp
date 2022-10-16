#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v;
   long long min=0, max=0;
    long long n;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<4;i++){
        min+=v[i];
    }
    for(int i=1;i<5;i++){
        max+=v[i];
    }cout<<min<<" "<<max;
 
}
