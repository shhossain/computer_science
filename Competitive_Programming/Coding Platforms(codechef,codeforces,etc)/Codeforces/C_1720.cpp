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

    int t;	cin>>t;
    while(t--){
        int n, m;   cin>>n>>m;
        vector<vctri> arr(n, vctri(m));
        int sum = 0;
        int mini = 1e9+7;
        frn(n){
            string s;   cin>>s;
            frnj(m, 0){
                arr[i][j] = s[j]-'0';
                sum += arr[i][j];
            }
        }
        frni(n-1, 0){
            frnj(m-1, 0){
                int x = arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i][j+1];
                if(x == 0)  continue;
                mini = min(mini, max(1, x-1)); 
            }
        }
        // cout<<endl;
        if(sum == 0)    cout<<0<<endl;
        else
            cout<<sum-mini+1<<endl;
    }
 return 0;
}