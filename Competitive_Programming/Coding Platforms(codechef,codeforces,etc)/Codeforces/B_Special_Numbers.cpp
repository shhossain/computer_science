#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll M = 1000000007;

ll power(ll x, ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = power(x, y / 2)%M;
    if (y % 2 == 0)
        return ((temp%M) * (temp%M))%M;
    else
        return (((x%M) * (temp%M))%M * (temp%M))%M;
}

int main()
{
    ll t, n, k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        bitset<40> b(k);
        
        ll ans = 0;
        for(ll i=0; i<b.size(); i++)
            if(b.test(i))
                ans = (ans%M + ((power(n, i)))%M)%M;

        cout<<ans<<"\n";
    }
}