#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define frnj(n, k) for(int j = k; j<n; j++)
#define vctri vector<int>
#define vctrl vector<ll>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

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
        frn(n)  cin>>arr[i];

        ll max_elm = *max_element(all(arr));
        auto it = find(all(arr), max_elm);
        int index = it-arr.begin();
        vctrl temp1, temp2;
        temp1.assign(arr.begin(), arr.begin()+index+1);
        temp2.assign(arr.begin()+index, arr.end());
        reverse(all(temp2));
        // frn(temp2.size()){
        //     cout<<temp2[i]<<' ';
        // }cout<<endl;
        if(n == 1){
            cout<<"YES"<<endl;
            continue;
        }
        if(is_sorted(all(temp1)) and is_sorted(all(temp2)))
            cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
        // if(is_sorted(arr.begin(), arr.begin()+index+1) && index>0 && is_sorted(arr.rbegin()+index, arr.rend()))
        //     cout<<"YES"<<endl;
        // else    cout<<"NO"<<endl;
    }
 return 0;
}