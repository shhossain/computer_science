#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,i,ans=0;
	    cin>>n;
	    
	    for(i=11; i>=0; i--)
	    {
	        int x = pow(2, i);
	        ans += n/x;
	        n %= x;
	    }
	    
	    cout<<ans<<endl;
	}
	return 0;
}
