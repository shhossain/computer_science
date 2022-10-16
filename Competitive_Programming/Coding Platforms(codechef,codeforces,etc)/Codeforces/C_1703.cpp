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
        vctri unlock(n);
        frn(n)  cin>>unlock[i];

        frn(n){
            int a;  cin>>a;
            string moves;   cin>>moves;
            frnj(a, 0){
                if(moves[j] == 'D'){
                    unlock[i]+=1;
                    unlock[i]%=10;
                }
                else if(moves[j] == 'U'){
                    unlock[i]-=1;
                    if(unlock[i] == -1) unlock[i] = 9;
                }
            }
        }
        frn(n)  cout<<unlock[i]<<' ';
        cout<<endl;
    }
 return 0;
}