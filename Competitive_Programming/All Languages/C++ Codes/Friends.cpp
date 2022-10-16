#include <bits/stdc++.h>
using namespace std;
int main(){
     int n,a,b,c,j=0;
     for(cin>>n;n--;){
          cin>>a>>b>>c;
          if(a+b+c>1){
               j++;
          }
     }
     cout<<j<<"\n";
     return 0;
}
