#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	      cin>>n>>k;
	    string s;
	      cin>>s;
	    int count=0;
	    int flag=0;
    
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='*' || s[i]==s[i+1])
	        {
	            count++;
	        }
	        else
	        {
	            count=0;
	        }
	        if(count==k)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    cout<<"YES";
	    else
	    {
	        cout<<"NO";
	    }
	    cout<<endl;
	}
	
	return 0;
}
