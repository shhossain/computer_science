#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define vctri vector<int>
#define vctrl vector<ll>

bool isPowerofTwo(int num){
    if((num&(num-1)) == 0)
        return true;
    else    return false;
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
        int n;  cin>>n;
        if(n == 1)  cout<<3<<endl;
        else{
            if(isPowerofTwo(n)){
                cout<<n+1<<endl;
            }
            else{
                cout<<(n&(-n))<<endl;
            }
        }
    }
 return 0;
}