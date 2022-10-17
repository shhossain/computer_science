#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define vctri vector<int>
#define vctrl vector<ll>
#define all(x) x.begin(), x.end()

bool isPowerofTwo(ll n)
{
    return (n != 0) && ((n & (n - 1)) == 0);
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
        ll n;   cin>>n;
        
        ll ans = LONG_LONG_MAX;

        if(isPowerofTwo(n)){
            cout<<0<<endl;
        }
        else{
            string s = to_string(n);
            frn(61){
                ll x = pow(2, i);
                string temp = to_string(x);

                int j = 0, k = 0;
                ll cnt = 0;
                bool endswith;
                while(j != s.length() && k != temp.length()){
                    if(s[j] == temp[k]){
                        j++;    k++;
                        endswith = true;
                    }
                    else{
                        j++;    cnt++;
                        endswith = false;
                    }
                }
                if(endswith){
                    if(j == s.length()){
                        k--;
                        cnt += temp.length()-k-1;
                    }
                    else if(k == temp.length()){
                        j--;
                        cnt += s.length()-j-1;
                    }
                }
                else{
                    k--;
                    cnt += temp.length()-k-1;
                }
                if(cnt == 1){
                    ans = 1;
                    break;
                }
                else ans = min(ans, cnt);
            }
            cout<<ans<<endl;
        }
    }
 return 0;
}