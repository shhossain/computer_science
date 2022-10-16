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
        frn(n)  cin>>arr[i];

        int cnt_1 = 1, cnt_2 = 1;
        ll x = arr[0], y = arr[1];

        frn(n){
            if(i+2<n && arr[i+2]%x == 0)
                cnt_1++;
            else    break;
            i++;
        }
        frni(n, 1){
            if(i+2<n && arr[i+2]%y == 0)
                cnt_2++;
            else    break;
            i++;
        }
        // cout<<cnt_1<<' '<<cnt_2<<endl;
        if(n == 2){
            if(arr[0] != arr[1])
                cout<<arr[1]<<endl;
            else    cout<<0<<endl;
        }
        else if(n == 3){
            if(cnt_1 == 2)  cout<<x<<endl;
            else    cout<<0<<endl;
        }
        else if(cnt_1 < n/2 || cnt_2 < n/2){
            cout<<0<<endl;
        }
        else if(n%2 == 1){
            if(cnt_1 == (n/2)+1 && cnt_2 == n/2)
                cout<<y<<endl;
            else if(cnt_2 == n/2)
                cout<<y<<endl;
            else if(cnt_1 == (n/2)+1)
                cout<<x<<endl;
        }
        else if(n%2 == 0){
            if(cnt_1 == n/2 && cnt_2 == n/2)
                cout<<y<<endl;
            else if(cnt_2 == n/2)
                cout<<y<<endl;
            else if(cnt_1 == n/2)
                cout<<x<<endl;
        }
        else    cout<<0<<endl;
    }
 return 0;
}