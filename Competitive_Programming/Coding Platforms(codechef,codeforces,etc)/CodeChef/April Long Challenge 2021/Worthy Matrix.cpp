#include <iostream>
using namespace std;
void solve()
{
    long long n,m,k;
    cin>>n>>m>>k;
    double arr[n+1][m+1];
    for(long long i=0;i<=n;i++)
    {
        for(long long j=0;j<=m;j++)
        {
            if(i==0 || j==0)
            arr[i][j]=0;
            else
            cin>>arr[i][j];
        }
    }
    for(long long i=0;i<=n;i++)
        {
            double prev=0;
            for(long long j=0;j<=m;j++)
            {
                arr[i][j]+=prev;
                prev=arr[i][j];
            }
        }
        for(long long i=0;i<=m;i++)
        {
            double prev=0;
            for(long long j=0;j<=n;j++)
            {
                arr[j][i] +=prev;
                prev=arr[j][i];
            }
         }
    long long m_min=min(m,n);
    long long ans=0;
    
    for(long long u=1;u<=m_min;u++)
    {
        for(long long i=u;i<=n;i++)
        {
            for(long long j=u;j<=m;j++)
            {
                if((arr[i][j]+arr[i-u][j-u]-arr[i][j-u]-arr[i-u][j])/(u*u)>=k)
                ans++;
            }
        }
    }
   cout<<ans<<endl;
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
