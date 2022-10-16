#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> m;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])==m.end()){
                m.insert(make_pair(s[i],1));
            }
            else {
                m[s[i]]++;
            }
        }
        int ans{0},temp{0};
        for(auto& it:m){
            if(it.second>=2)ans++;
            else if(it.second==1)temp++;
        }
        cout<<ans+temp/2<<'\n';
    }
    return 0;
}