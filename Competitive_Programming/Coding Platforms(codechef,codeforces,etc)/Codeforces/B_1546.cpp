#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for(int i = 0; i<n; i++)
#define frni(n, k) for(int i = k; i<n; i++)
#define vctri vector<int>
#define vctrl vector<ll>
#define vctrs vector<string>
#define all(x) x.begin(), x.end()

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
        int n, m;   cin>>n>>m;
        vctrs str(n), ttr(n-1);
        frn(n){
            string s;   cin>>s;
            str[i] = s;
        }
        frn(n-1){
            string s;   cin>>s;
            ttr[i] = s;
        }

        for(int j = 0; j<m; j++){
            vctri temp(26, 0);
            frn(n){
                int x = str[i][j] - 'a';
                temp[x]++;
            }
            frn(n-1){
                int x = ttr[i][j] - 'a';
                temp[x]++;
            }

            int mark;
            for(int i = 0; i<temp.size(); i++){
                if(temp[i]%2 == 1){
                    mark = i;
                    break;
                }
            }
            char cha = 'a'+mark;
            cout<<cha;
        }
        cout<<endl;
    }
 return 0;
}