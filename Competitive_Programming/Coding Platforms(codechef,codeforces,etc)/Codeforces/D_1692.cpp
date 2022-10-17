#include<bits/stdc++.h>
using namespace std;
 
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define fr(i,n) for(int i=0;i<n;i++)
#define ll long long
 
void solve(){

    string s;
    int x;

    cin>>s>>x;

    int hrs = x/60;
    int min = x%60;

    int h1 = (s[0] - '0');
    int h2 = (s[1] - '0');

    int m1 = (s[3] - '0');
    int m2 = (s[4] - '0');

    int curhrs=10*h1+ h2;
    int curmin = 10*m1 + m2;

    int newh = curhrs;
    int newm = curmin;

    int ans=0;
    while(1){

        newh += hrs;
        newm += min;

        if(newm >= 60){
            newh++;
            newm = newm%60;
        }

        if(newh > 23)newh = newh%24;
        int revmin = newm/10 + 10*(newm%10);

        if(revmin == newh)ans++;
        if(newh == curhrs && newm == curmin)break;
    }

    cout<<ans<<endl;
}
 
int main(){
 
    fast();
    int t;
    cin>>t;
 
    while(t--){
        solve();
    }
}