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
        int n;  cin>>n;
        if(n == 1){
            cout<<1<<endl;
            continue;
        }
        if(n == 2){
            cout<<2<<endl;
            continue;
        }
        int a, b;
        if(n>2 && n%3 == 1){
            a = 1;
            b = 2;
        }
        else if(n>2){
            a = 2; 
            b = 1;
        }
        int sum = 0;
        int i = 0;
        while(sum<n){
            if(i%2 == 0){
                sum+=a;
                cout<<a;
            }
            else{
                sum+=b;
                cout<<b;
            }
            i++;
        }
        cout<<endl;
    }
 return 0;
}