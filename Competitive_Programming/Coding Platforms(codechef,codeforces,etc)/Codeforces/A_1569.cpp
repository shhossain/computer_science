#include <bits/stdc++.h>
using namespace std;

#define ll long long

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
        string s;   cin>>s;

        bool jhanda = true;
        for(int i = 1; i<n; i++){
            if(s[i-1] != s[i]){
                cout<<i<<' '<<i+1<<endl;
                jhanda = false;
                break;
            }
        }
        if(jhanda)
            cout<< -1<<' '<< -1<<endl;
    }
 return 0;
}