#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float a1,a2,a3,v;
	    cin>>a1>>a2>>a3>>v;
	    float var = 100.00/(a1*a2*a3*v);
	    float k = 9.575;
	    if(var>=k)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
