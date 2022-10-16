#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int t,n,x1,x2,x3,y1,y2,y3,count;
	cin>>t;
	
	while(t--)
	{
		count=0;
		cin>>n;
		
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		
		if(pow(x1-x2,2)+pow(y1-y2,2)<=pow(n,2))
		{
			count++;
		}
		
		if(pow(x1-x3,2)+pow(y1-y3,2)<=pow(n,2))
		{
			count++;
		}
		
		if(pow(x3-x2,2)+pow(y3-y2,2)<=pow(n,2))
		{
			count++;
		}
		
		count>=2?cout<<"yes\n":cout<<"no\n";
	}
	
	return 0;
}
