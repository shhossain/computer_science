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

int ceil_func(int x, int y){
    return (x%y == 0 ? x/y : x/y + 1);
}

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
        int n, j, p;
        cin>>n>>j>>p;

        if(j == 0){
            cout<<0<<endl;
            continue;
        }
        int per_person = n/p;
        if(per_person >= j){
            cout<<j<<endl;
            continue;
        }
        else{
            int maxi = per_person;
            int rem = j-maxi;
            int left = rem - (p-1);
            if(left <= 0){
                cout<<maxi-1<<endl;
            }
            else{
                int pp = ceil_func(rem, p-1);
                cout<<maxi-pp<<endl;s
            }
        }
    }
 return 0;
}