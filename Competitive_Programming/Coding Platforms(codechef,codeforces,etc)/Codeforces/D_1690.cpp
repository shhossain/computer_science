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
        int n, k;  cin>>n>>k;
        string s;   cin>>s;

        int mini = 1e9+7;

        int cnt = 0;
        frn(k){
            if(s[i] == 'W') cnt++;
        }
        // cout<<cnt<<' ';
        mini = min(mini, cnt);

        frni(n-k+1, 1){
            if(s[i-1] == 'W')   cnt--;
            if(s[i+(k-1)] == 'W')   cnt++;
            // cout<<cnt<<' ';
            mini = min(mini, cnt);
        }
        // cout<<endl;
        cout<<mini<<endl;
    }
 return 0;
}