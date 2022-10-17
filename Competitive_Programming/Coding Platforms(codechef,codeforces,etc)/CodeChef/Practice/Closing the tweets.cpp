#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	set<int>s;
	int n,k,x;
	string st;
	cin>>n>>k;
	for(int i=0;i<k;i++)
	{
	    cin>>st;
	    if(st!="CLOSEALL")
	    {cin>>x;
	       if(s.find(x)==s.end())
	       s.insert(x);
	       else
	       s.erase(x);
	       cout<<s.size()<<endl;
	        
	    }else
	    {
	        s.clear();
	        cout<<"0\n";
	    }
	    
	}
	
	return 0;
}
