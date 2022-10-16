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
        vector<string> arr(n);
        map<string, int> mp;
        frn(n){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        frn(n){
            bool ans = 0;
            string temp = "";
            string copy = arr[i];
            int cnt = mp[arr[i]];
            mp[arr[i]] = 0;
            int a = 0;

            bool one = 0, two = 0;
            while(a<arr[i].size()){
                temp.push_back(copy[a]);
                a++;
                one = 1;
                if(mp.count(temp)){
                    string sec = "";
                    frnj(arr[i].size(), a){
                        sec.push_back(arr[i][j]);
                    }
                    if(mp.count(sec)){
                        two = 1;
                    }
                }
            }
            if(one && two)  cout<<1;
            else    cout<<0;
        }
        cout<<endl;
    }
 return 0;
}