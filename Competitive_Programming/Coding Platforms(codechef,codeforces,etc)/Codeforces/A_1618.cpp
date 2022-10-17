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
        vector<ll> arr(7);
        for(int i = 0; i<7; i++)
            cin>>arr[i];

        ll sum = arr[0];
        int i = 1;
        vector<ll> box;
        box.push_back(arr[0]);
        while(sum<=arr[6]){
            sum+=arr[i];
            box.push_back(arr[i]);
            i++;
        }
        // box.push_back(arr[i-1]);
        // cout<<sum<<endl;
        ll remove = sum - arr[6];
        // cout<<remove<<endl;
        for(int i = 0; i<box.size(); i++){
            if(box[i] == remove){
                box[i] = -1;
                break;
            }
        }
        for(int i = 0; i<box.size(); i++){
            if(box[i] != -1)
                cout<<box[i]<<' ';
        }
        cout<<endl;
    }
 return 0;
}