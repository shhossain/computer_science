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
        string str;   cin>>str;

        int ans = n+1;
        for(char i = 'a'; i<='z'; i+=1){
            int s = 0, e = n-1, cnt = 0;
            while(s<=e){
                if(str[s] == str[e]){
                    s++;    e--;
                }
                else if(str[s] == i){
                    cnt++;
                    s++;
                }
                else if(str[e] == i){
                    cnt++;
                    e--;
                }
                else{
                    cnt = n+1;
                    break;
                }
            }
            ans = min(ans, cnt);
        }
        if(ans >= n+1)  cout<< -1 <<endl;
        else    cout<<ans<<endl;
    }
 return 0;
}