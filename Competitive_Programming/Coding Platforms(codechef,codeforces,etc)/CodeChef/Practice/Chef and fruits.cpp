#include <iostream>
using namespace std;
int main(){
  int t;
    cin>>t;
  while(t--)
  {
    int x,y,k;
    cin>>x>>y>>k;
    while(k--)
    {
    if(x>y)
    {
    y++;
    }
    else if(x<y)
    {
    x++;
    }
  else
  {
      break;
  }
  
}
cout<<abs(x-y)<<endl;
}}
