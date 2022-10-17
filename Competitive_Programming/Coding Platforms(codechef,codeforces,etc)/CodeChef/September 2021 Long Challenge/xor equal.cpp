#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
long long int t;
cin>>t;
while(t--)
{
long long int n,x,flag=0,j=0,l=0,min,z;
cin>>n>>x;

long long int a[n],b[n],c[n+n];
for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<n;i++)
{
 b[i]=(a[i]^x);
}

for(int i=0;i<n;i++)
    c[i]=a[i];

for(int i=n;i<2*n;i++)
{
    c[i]=b[j];
    j++;
}

   unordered_map<long long int,long long int> hash;
    for (int i = 0; i < 2*n; i++)
        hash[c[i]]++;
 
    
    long long int count = 0, res = -1;
    for (auto i : hash) {
        if (count <= i.second) {
            res = i.first;
            count = i.second;
        }
    }
   vector<long long int>d;
  unordered_map<long long int,long long int> mp;

    for (int i = 0; i < 2*n; i++)
        mp[c[i]]++;
long long int i=0;
    for (auto x : mp)
    {
        if(count==(x.second)){
            d.push_back(x.first);
        i++;}
    }
    
    for (int i = (2*n)/2; i < 2*n; i++) 
  {
     if(c[i]==res)
     flag++;
  }
min=flag;
   for(int i=0;i<d.size();i++)
   { z=0;
       for (int j = (2*n)/2; j < 2*n; j++)  
       {
           if(d[i]==c[j])
           z++;
       }
       if(z<min)
       min=z;
   }
  
if(x==0)
{
    cout<<(count)/2<<"\t"<<"0"<<"\n";
}
else
cout<<count<<"\t"<<min<<"\n";

}
return 0;


}