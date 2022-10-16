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
        int x, y;   cin>>x>>y;
        int h = x*x + y*y;
        int i = 0;
        while(i*i<h) ++i;
        int ans = 2;
        if(i*i == h)
            ans = 1;
        if(x == 0 && y == 0)
            ans = 0;
        
        cout<<ans<<endl;
    }
 return 0;
}