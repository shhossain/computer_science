#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int lli;

int main() {
    lli T,i,j;
      cin>>T;
    while(T--){
        lli g,c;
          cin>>g>>c;
      
        lli r1=c*c;
        lli r2=2L*g;
      
          lli r=r1/r2;
      
        cout<<r<<"\n";
    }
	return 0;
}
