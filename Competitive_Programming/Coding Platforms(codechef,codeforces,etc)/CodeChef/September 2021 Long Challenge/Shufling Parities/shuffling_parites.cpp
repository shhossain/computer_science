#include <bits/stdc++.h>
using namespace std;
#define int long long 
int t;

int32_t main()
{
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int odd=0,even=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0) even++;
            else odd++;
        }
        int evenind,oddind;
        if(n%2==0) evenind = oddind = n/2;
        else {
            evenind = n/2;
            oddind = n/2 + 1;
        }
        int ans = 0;
        if(even>oddind)
        {
            ans+=oddind;
        }
        else ans+= even;
        if(odd>evenind) ans+= evenind;
        else ans+= odd;
        cout<<ans<<"\n";
    }
    return 0;
}
