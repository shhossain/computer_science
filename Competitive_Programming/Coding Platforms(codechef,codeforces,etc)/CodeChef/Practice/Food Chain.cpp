#include<bits/stdc++.h>
using namespace std ;

#define  ff      first 
#define  ss      second
#define  ull     unsigned long long 
#define  mod     1000000007
#define  inf     1e18
#define  w(x)    int x;cin>>x;while(x--)
#define  f(x,y)  for( x=0;x<y;x++) 

int main(){
    w(t){
        long long e,k;
        cin>>e>>k;
        //int c=log(e)/log(k);
        int counter=1 ;
        float c = e/k;
        while(floor(c)>=1){
            counter++;
            c=c/k;
        }
        //cout<<c<<endl;
        cout<<counter<<endl;
    }

 	return 0;
}