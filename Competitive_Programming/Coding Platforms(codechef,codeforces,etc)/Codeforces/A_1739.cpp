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
        cout<<(n/2)+1<<' '<<(m/2)+1<<endl;
    }
 return 0;
}