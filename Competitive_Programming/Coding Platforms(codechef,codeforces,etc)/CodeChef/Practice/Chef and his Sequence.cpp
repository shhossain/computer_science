#include <bits/stdc++.h>
using namespace std;


int main(void) {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int m;
	    cin>>m;
	    int b[m];
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	    }
	    
	    int i=0,j=0,count=0;
	    while(i<n && j<m)
	    {
	        if(a[i]==b[j])
	         {count++; j++;}
	         i++;
	    }
	    if(count==m)
	     cout<<"Yes"<<"\n";
	    else
	     cout<<"No"<<"\n";
	    
	}
	return 0;
}
