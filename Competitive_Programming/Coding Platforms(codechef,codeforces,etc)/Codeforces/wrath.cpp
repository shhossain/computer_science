#include<bits/stdc++.h>
using namespace std;

int main()
{
long int n;
cin>>n;

long long int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

int c=0,k=0,flag=0;

string s;

for(int i=n-1;i>0;i--){
for(int j=i-1;j>=0;j--)
{
if(i-1>=i-a[i]){
s[k]=i-1;
k++;
flag=1;}
}
}

if(flag==0)
cout<<n;
else
{
for (int i=0; i<k; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (s[i] == s[j])
               break;

        if (i==j)
        c++;
 
}

cout<<(n-c);
}
return 0;
}