#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define vctri vector<int>
#define vctrl vector<ll>
#define vctrs vector<string>

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
        vctrs str(n);
        map<string, ll> mp;
        frn(n){
            cin>>str[i];
            mp[str[i]]++;
        }  

        ll ans = 0;

        frn(n){
            char sec = str[i][1];
            for(char c = 'a'; c<='k'; c++){
                string temp;
                temp.push_back(str[i][0]);
                char chr = c;
                if(chr == sec)    continue;
                else{
                    temp.push_back(chr);
                    if(mp.find(temp) != mp.end())   ans += mp[temp];
                }
            }

            char first = str[i][0];
            for(char c = 'a'; c<='k'; c++){
                string temp;
                temp.push_back(str[i][1]);
                char chr = c;
                if(chr == first)    continue;
                else{
                    temp.push_back(chr);
                    swap(temp[0], temp[1]);
                    if(mp.find(temp) != mp.end())   ans += mp[temp];
                }
            }
        }

        cout<<ans/2<<endl;
    }
 return 0;
}