#include<bits/stdc++.h>
using namespace std;
 
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void solve(){

    vector<vector<char>>vec(8, vector<char>(8));
    fr(i,8){
        fr(j,8){
            cin>>vec[i][j];
        }
    }

    for(int i=1;i<7;i++){
        for(int j=1;j<7;j++){
            if(vec[i][j] == '#'){
                if(vec[i-1][j-1] == '#' && vec[i+1][j-1] == '#' && vec[i+1][j-1] == '#' && vec[i+1][j+1] == '#'){
                    cout<<i+1<<" "<<j+1<<endl;
                    return;
                }
            }
        }
    }
}
 
int main(){
 
    fast();
    int t;
    cin>>t;
 
    while(t--){
        solve();
    }
}