#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define vctri vector<int>
#define vctrl vector<ll>

int LIS(vector<ll>& v)
{
    if (v.size() == 0) // boundary case
        return 0;
 
    vector<ll> tail(v.size(), 0);
    int length = 1; // always points empty slot in tail
 
    tail[0] = v[0];
 
    for (int i = 1; i < v.size(); i++) {
 
        // Do binary search for the element in
        // the range from begin to begin + length
        auto b = tail.begin(), e = tail.begin() + length;
        auto it = lower_bound(b, e, v[i]);
 
        // If not present change the tail element to v[i]
        if (it == tail.begin() + length)
            tail[length++] = v[i];
        else
            *it = v[i];
    }
 
    return length;
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
        vctrl arr(n);
        frn(n)  cin>>arr[i];
        
        sort(arr.begin(), arr.begin()+n/2+1);
        sort(arr.begin()+n/2, arr.end());
        reverse(arr.begin()+n/2, arr.end());

        vctrl arr1(n);
        frn(n)  arr1[i] = arr[i];

        reverse(arr1.begin(), arr1.end());
        // frn(n)  cout<<arr1[i]<<' ';
        // cout<<endl;
        cout<<min(LIS(arr), LIS(arr1))<<endl;
    }
 return 0;
}