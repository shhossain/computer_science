#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define vctri vector<int>
#define vctrl vector<ll>
#define all(x) x.begin(), x.end()

void solve(){
    int n;  cin>>n;
    string s, t;    cin>>s>>t;
    int sb = 0, tb = 0;
    frn(n){
        if(s[i] == 'b') sb++;
        if(t[i] == 'b') tb++;
    }  
    if(sb != tb){
        cout<<"NO"<<endl;
        return;
    }
    int one = 0, two = 0;
    for(; one<n; one++){
        if(s[one] == 'b'){
            continue;
        }
        while(t[two] == 'b'){
            two++;
        }
        if((s[one] != t[two]) || (s[one] == 'a' && one>two) || (s[one] == 'c' && one<two)){
            cout<<"NO"<<endl;
            return;
        }
        two++;
    }
    cout<<"YES"<<endl;
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
        solve();
    }
 return 0;
}