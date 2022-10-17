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
        int n, m;
        cin>>n>>m;
        vector<vector<int>> arr(n, vector<int>(m));
        for(int i = 0; i<n; i++)
            for(int j = 0; j<m; j++)
                cin>>arr[i][j];

        int maxi = -1;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                int sum = 0;
                int x = i, y = j;
                while(x>=0 && x<n && y>=0 && y<m){
                    sum += arr[x][y];
                    x++;
                    y++;
                }
                x = i, y = j;
                while(x>=0 && x<n && y>=0 && y<m){
                    sum += arr[x][y];
                    x++;
                    y--;
                }
                x = i, y = j;
                while(x>=0 && x<n && y>=0 && y<m){
                    sum += arr[x][y];
                    x--;
                    y++;
                }
                x = i, y = j;
                while(x>=0 && x<n && y>=0 && y<m){
                    sum += arr[x][y];
                    x--;
                    y--;
                }
                sum -= (3*arr[i][j]);
                maxi = max(maxi, sum);
            }
        }
        cout<<maxi<<endl;
    }
 return 0;
}