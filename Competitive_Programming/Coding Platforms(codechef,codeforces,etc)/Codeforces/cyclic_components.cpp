/*------------------Honey, you should see me in a crown--------------------*/
#include<bits/stdc++.h>

#define FAST cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
#define lli(n) long long n; cin>>n;
#define li(n) long n; cin>>n;
#define inti(n) int n;cin>>n;
#define CC int test;\
cin>>test;\
while(test--)

using namespace std;

/*------------Every fairy tale needs a good old-fashioned villain----------------*/

int main()
{
FAST;
inti(n);
inti(m);
int cnt=0;
map<int, vector<int> > comp;
for(int i=0;i<m;i++)
{
    inti(u);inti(v);
    comp[v].push_back(u);
    comp[u].push_back(v);
}int mark[n+1];
for(int i=0;i<=n;i++)
    mark[i]=0;
for(int i=1;i<=n;i++)
{
    if(comp[i].size()!=2 || mark[i]==1)
    {
        continue;
    }
    int v2=i;
    while(comp[v2].size()==2)
    {
//        cout<<v2<<" try\n";
  //      cout<<comp[v2][0]<<' '<<mark[comp[v2][0]]<<'\n';
    //    cout<<comp[v2][1]<<' '<<mark[comp[v2][1]]<<'\n';
        mark[v2]=1;
        if(mark[comp[v2][0]]==0)
            v2=comp[v2][0];
        else if(mark[comp[v2][1]]==0)
            v2=comp[v2][1];
        else if(v2==i){
      //      cout<<cnt<<" inc for "<<v2<<'\n';
            cnt++;
            break;
        }
    }
    //if(comp[i].size()==2)
      //  cout<<i<<' '<<comp[i][0]<<'\n';

}
cout<<cnt<<'\n';
return 0;
}
