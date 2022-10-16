//time O(nlogn) space O(n)
#include "bits/stdc++.h"
using namespace std;    

#define int long long
#define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define test int t;cin>>t;while(t--)

int n;
const int N = 10000000;
int BIT[N+1];
int cal(int i)
{
    int s=0;
    while(i>0)
    {
        s+=BIT[i];
        i-=(i&(-i));
    }
    return s;
}
void update(int i)
{
    while(i<=N)
    {
        BIT[i]+=1;
        i+=(i&(-i));
    }
}
void solve()
{
    
    memset(BIT,0,sizeof(BIT));
    cin >> n;
    int ans=0;
    REP(i,1,n+1)
    {
        int x;
        cin >> x;
        ans+=(cal(N)-cal(x));
        update(x);
    }
    cout << ans << "\n";
    return;
}
    
int32_t main()
{
    flash;
    
    test
    {
        solve();
    }
    //solve();
    
    return 0;
}
    