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
        vctri arr;
        int hp = log2(n);
        // if(pow(2, hp) != n)
        //     hp+=1;
        int first = pow(2, hp+2);
        int second = first-2;
        arr.push_back(first);
        arr.push_back(second);
        int temp = (first^second);
        first -= 3;
        // cout<<first<<' '<<second<<' '<<temp<<endl;
        int j = n-3;
        while(j--){
            if(first<0)
                first = 0;
            temp ^= first;
            arr.push_back(first);
            first -= 2;
        }
        arr.push_back(temp);
        // cout<<temp<<endl;
        frn(arr.size())
            cout<<arr[i]<<' ';
        cout<<endl;
    }
 return 0;
}