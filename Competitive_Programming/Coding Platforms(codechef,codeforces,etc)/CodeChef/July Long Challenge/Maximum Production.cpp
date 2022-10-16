#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main() {
	// your code goes here
	lli T,i,j;
	cin>>T;
	while(T--){
	    lli d,x,y,z;
	    cin>>d>>x>>y>>z;
	    lli m1=7*x;
	    lli m2=y*d + (7-d)*z;
	    lli r=max(m1,m2);
	    cout<<r<<"\n";
	    
	}
	return 0;
}
