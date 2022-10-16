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
        int row, col;   cin>>row>>col;
        vector<vector<char>> arr(row, vector<char> (col));
        vector<vector<char>> ans(row, vector<char> (col));
        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                cin>>arr[i][j];
                if(arr[i][j] == '*')
                    ans[i][j] = '.';
                else
                    ans[i][j] = arr[i][j];
            }
        }
        for(int j = 0; j<col; j++){
            int cnt = 0;
            for(int i = 0; i<row; i++){
                if(arr[i][j] == '*')
                    cnt++;
                if(arr[i][j] == 'o'){
                    for(int a = 0; a<cnt; a++){
                        ans[i-a-1][j] = '*';
                    }
                    cnt = 0;
                }
            }
            if(cnt>0){
                for(int a = 0; a<cnt; a++){
                    ans[row-a-1][j] = '*';
                }
            }
        }

        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                cout<<ans[i][j];
            }
            cout<<endl;
        }
        // cout<<endl;
    }
 return 0;
}