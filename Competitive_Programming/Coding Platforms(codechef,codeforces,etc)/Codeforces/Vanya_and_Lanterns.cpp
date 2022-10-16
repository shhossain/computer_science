#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin>>n; 
    int l; cin>>l;
    vector<double>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    double ans=0;
    ans=max(v[0],ans); 
    ans=max(ans,l-v[n-1]);
    for(int i=1; i<n; i++)
    {
        ans=max(ans,((v[i]-v[i-1])/2.00)); 
    }
    cout<<fixed<<setprecision(9)<<ans<<endl;
    
	return 0;
}
