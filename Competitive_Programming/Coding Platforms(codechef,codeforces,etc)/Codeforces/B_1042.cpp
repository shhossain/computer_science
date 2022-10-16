#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define frnj(n, k) for(int j = k; j<n; j++)
#define vctri vector<int>
#define vctrl vector<ll>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

        int n;  cin>>n;
        vector<vctri> dp(n+1, vctri(8, 1e9));
        dp[0][0] = 0;
        frn(n){
            int cost;
            string s;
            cin>>cost>>s;
            int string_mask = 0;
            frnj(3, 0){
                char c = 'C'-j;
                bool present = false;
                for(char ch: s){
                    if(ch == c)
                        present = true;
                }
                if(present)
                    string_mask += (1<<j);
            }

            frnj(8, 0){
                dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
                dp[i+1][j|string_mask] = min(dp[i+1][j|string_mask], dp[i][j]+cost);
            }
        }
        ll ans = dp[n][7];
        if(ans == 1e9) ans = -1;
        cout<<ans<<endl;

 return 0;
}