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
        vctrl arr(n);
        frn(n) cin>>arr[i];
        
        // if(is_sorted(arr.begin(), arr.end())){
        //     cout<<0<<endl;
        //     continue;
        // }
        bool flag = true;

        ll cnt = 0;
        for(int i = n-2; i>=0; i--){
            if(arr[i]>=arr[i+1]){
                if(arr[i+1] == 0){
                    flag = false;
                    break;
                } 
                while(arr[i]>=arr[i+1]){
                    arr[i] /= 2;
                    cnt++;
                }
            }
        }
        if(flag)
            cout<<cnt<<endl;
        else    cout<< -1 <<endl;
    }
 return 0;
}
