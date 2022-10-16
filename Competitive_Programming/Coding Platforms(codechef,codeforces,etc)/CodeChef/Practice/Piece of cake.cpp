#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t, num, count, others,sum, max;
	
	string str;
	cin>>t;
	
	while(t>0)
	{
	    t--;
	    cin>>str;
	    sort(str.begin(), str.end());
	    sum=max=others=0;
	    for(int j=0; j<str.length(); j+=num+1)
	    {
	       
	       count=0; 
	        for(int i=0; i<str.length(); i++)
	        {
	            if(str[i]==str[j])
	            {
	                count++;
	                num=i;
	            }
	            
	            
	        }
	        
	        max=count>max? count:max;
	        
	    }
	    if(str.length()==2*max)
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
