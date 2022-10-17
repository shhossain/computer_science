#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define vctl vector<ll>
#define vcti vector<int>

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
        vcti arr(n);
        frn(n)  cin>>arr[i];
        
        int first = 1;
        frn(n-1){
            if(arr[i] == 1 && arr[i+1] == 1){
                continue;
            }
            else if(arr[i] == 1 && arr[i+1] == 0){
                first = i+1;
                break;
            }
        }
        int last = -1;
        for(int i = n-1; i>=1; i--){
            if(arr[i] == 1 && arr[i-1] == 1){
                last = i;
                continue;
            }
            else if(arr[i] == 1 && arr[i-1] == 0){
                last = i+1;
                break;
            }
        }
        // cout<<first<<endl;
        cout<<last-first<<endl;
    }
 return 0;
}