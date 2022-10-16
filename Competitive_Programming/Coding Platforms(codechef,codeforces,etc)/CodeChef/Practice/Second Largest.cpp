#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    if((a>b&&a<c)||(a>c&&a<b))
	    cout<<a<<endl;
	    else if((b>a&&b<c)||(b>c&&b<a))
	    cout<<b<<endl;
	    else
	    cout<<c<<endl;
	}
	return 0;
}
