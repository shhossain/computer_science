//https://codeforces.com/contest/676/problem/C
#include <bits/stdc++.h>

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl "\n"
#define EPS 1e-9
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forf(t,i,n) for(t i=0;i<n;i++)
#define forr(t,i,n) for(t i=n-1;i>=0;i--)
#define print(x) for(const auto &e: (x)) { cout<<e<<" "; } cout<<endl

using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
typedef unordered_map<long long, long long> umll;

void solve(){
   int n,k;cin>>n>>k;
   int arr[2]={0,0};
  
   string s;cin>>s;
    if(n==1){cout<<"1"<<endl;return;}
   int i=0,j=1,mx=0,c=1;
   arr[s[i]-'a']++;
   while(((j-i)+1)<=n)
   {
     if(c!=0)
     {
       arr[s[j]-'a']++;
     }
     if(k>=min(arr[0],arr[1]))
     { 
         mx=max((j-i)+1,mx);
       
        
         c=1;
         j++;
         if(j>=n){break;}
         
     }
     else{
         c=0;
         
         arr[s[i]-'a']--;
         i++;
        
     }
   }
   cout<<mx<<endl;
}

int main(){
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t=1;
    while(t--){
        solve();
    }
    
    return 0;
}