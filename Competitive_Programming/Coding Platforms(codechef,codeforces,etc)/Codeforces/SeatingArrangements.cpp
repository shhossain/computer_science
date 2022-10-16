#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;
    cin>>t;
    while(t--)
    {
       long long int n,m,i,j;
        cin>>n>>m;
       long long int a[m];
        for(i=0;i<m;i++)
        cin>>a[i];
        vector<long long int>v;
        v.push_back(a[0]);
       long long int a1=0;
        for(i=0;i<m;i++)
        {
            if(i==0)
            continue;
           long long int k=0;
            for(j=0;j<v.size();j++)
            {
                if(v[j]<a[i])
                k++;
            }
            v.push_back(a[i]);
            a1+=k;
        }
        cout<<a1<<"\n";
}
}
