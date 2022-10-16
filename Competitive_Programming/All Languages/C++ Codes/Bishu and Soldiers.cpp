#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		long long int k,x[n],y[n];
		n--;
		for(int i=0;i<n;++i)
			cin>>x[i]>>y[i];
		while(q--)
		{
			cin>>k;
			for(int i=0;i<q;++i)
			{
				long long int ans=x[i]+(k-1);
				if(ans<x[i]||ans>y[i])
				{
					cout<<-1<<"\n";
				}
				else
				{
					cout<<ans<<"\n";
				}
			}
		}
	}
	return 0;
}
