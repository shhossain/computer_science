#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   long long int n,b,m,k,sum=0;
	    cin>>n>>b>>m;
	    while(n>0)
	    {
	        if(n%2==0)
	        {
	            k=n/2;
	        }
	        else
	        {
	            k=(n+1)/2;
	        }
	        
	        if(n>1)
	        {
	            sum+=(k*m)+b;
	        }
	        else if(n==1)
	        {
	            sum+=k*m;
	        }
	        m=2*m;
	        n=n-k;
	        
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
