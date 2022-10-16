#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a==b && c==d)
	    {
	        cout<<"YES"<<endl;
	        
	    }
	    else if(a==c && b==d)
	    {
	        cout<<"YES"<<endl;
	        
	    }
	    else if(a==d && b==c)
	    {
	        cout<<"YES"<<endl;
	        
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
