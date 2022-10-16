#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	
	string s;
	cin>>s;
	
	ll ans=0;
	bool flag = false;
	
	if(s[0] == '1')
	{
	    flag=true;
	}
	
    for(ll i=0 ; i<s.size() ; i++)
    {
        if(s[i] == '1')
        {
            
            if(flag == false)
            {
                flag = true;
            }
        }
        else
        {
            if(flag == true)
            {
                ans++;
                flag= false;
            }
     
        }
    }
    
    if(s[s.size() - 1] == '1')
    {
        ans++;
        flag = false;
    }
    cout<< ans<<"\n" ;
	}




int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
}

