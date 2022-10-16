#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int mod = 1e9 + 7;


void solve(){
    int x;
    cin>>x;
    char a;
    cin>>a;
    string k;
    cin>>k;
    bool fk=false;
    for(auto& i:k){
        if(i!=a)fk=true;
    }
    if(fk){
        for(int i=x-1; i>x/2-1 ; i--){
            if(k[i]==a){
                cout<<1<<'\n'<<i+1<<'\n';
                return;
            }
        }
        cout<<2<<'\n'<<x<<" "<<x-1<<'\n';
    }
    else cout<<0<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    int k=1;
    while(t--){
        // cout<<"Case #"<<k++<<": ";
        solve();
    }
    return 0;
}    
