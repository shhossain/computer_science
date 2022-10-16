#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

int32_t main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w,wr;
        cin >> n >> w >> wr;
        map<int,int> mp;
        int Ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>Ar[i];
            mp[Ar[i]]++;
        }
        if(wr>=w)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            w-=wr;
            for(int i=0;i<n;i++)
            {
                if(mp[Ar[i]] >= 2)
                {
                    int count = mp[Ar[i]];
                    if(count % 2 == 0)
                    {
                        w -= count * Ar[i];
                    }
                    else
                    {
                        w -= (count - 1) * Ar[i];
                    }
                    mp[Ar[i]] =0;
                }
                if(w<=0)
                {
                    break;
                }
            }
            if(w<=0)
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        
        }
    }
	// your code goes here
	return 0;
}
