#include <bits/stdc++.h>
#include<vector>
using namespace std;

void solve()
{
long long int n,k,sum=0,j=0;
cin>>n>>k;

long long int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

vector<long long int>c;
while(k--){
for(int i=0;i<n;i++)
{
    if(a[i]>0)
    c.push_back(i);
}

for(int i=0;i<n;i++)
{
    if(c[j]==i)
    { j++;
        if(i==0)
        {
            a[1]=a[1]+1;
            a[n-1]=a[n-1]+1;
        }
        else if(i==(n-1))
        {
         a[0]=a[0]+1;
         a[n-2]=a[n-2]+1;   
        }
        else{
            a[i+1]=a[i+1]+1;
            a[i-1]=a[i-1]+1;
        }

    }
}
}
for(int i=0;i<n;i++)
{
    sum=sum+a[i];;
}
cout<<sum<<"\n";

}
int main() {
   long long int t;
   cin>>t;
    while(t--)
  {
    solve();
  }
    return 0;
}