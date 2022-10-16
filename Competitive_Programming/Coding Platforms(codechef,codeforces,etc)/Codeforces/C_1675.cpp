#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define vctri vector<int>
#define vctrl vector<ll>

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
        string s;   cin>>s;
        int n = s.size();
        int start = -1;
        int end = n-1;
        frn(n)
            if(s[i] == '1')
                start = i-1;

        frni(n, start+1){
            if(s[i]=='0'){
                end=i;
                break;
            }
        }
        cout<<end-start<<endl;
    }
 return 0;
}