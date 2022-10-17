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
        int n;  cin>>n;
        vctrl arr(n);

        ll sum = 0;
        frn(n){
            cin>>arr[i];
            sum += arr[i];
        }
        sum -= arr[n-1];

        int zerocnt = 0;
        frn(n-1){
            if(arr[i] == 0) zerocnt++;
        }

        int cnt = 0;
        frn(n){
            if(arr[i] == 0){
                cnt++;
            }
            else{
                break;
            }
        }

        int x = zerocnt-cnt;
        if(x<0) x = 0;
        cout<<sum+x<<endl;
    }
 return 0;
}