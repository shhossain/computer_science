#include<bits/stdc++.h>
using namespace std;
int main(){
 int a,b,c;
 
  cout<<"Enter three numbers: ";
  cin>>a>>b>>c;

  if(a>b && a>c)
      cout<<a<<" is greatest";
  else if(b>a && b>c)
      cout<<b<<" is greatest";
  else
      cout<<c<<" is greatest";
 }
