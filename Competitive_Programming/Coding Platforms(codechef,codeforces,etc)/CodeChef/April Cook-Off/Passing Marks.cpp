#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	cout<<endl;
	for(int i=0;i<t;i++)
	{
	    int am,bm,cm,tm,a,b,c;
	    cin>>am>>bm>>cm>>tm>>a>>b>>c;
	    if(a>=am && b>=bm && c>=cm && ((a+b+c)>=tm))
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
