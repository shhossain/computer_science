#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define vctri vector<int>
#define vctrl vector<ll>
#define all(x) x.begin(), x.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    int t;	cin>>t;
    while(t--){
        int n;  cin>>n;
        ll k;   cin>>k;
        vctrl arr(n);
        frn(n)  cin>>arr[i];

        ll maxi = -1;
        frn(n){
            if(maxi < (arr[i]|k))
                maxi = (arr[i]|k);
        }
        cout<<maxi<<endl;
    }
 return 0;
}