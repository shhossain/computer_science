 #include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,cnt=0,s=0;
    cin>>n;
    vector<int>v(n),v1,v2,v3,v4;
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
       if(v[i]==4)
       v1.push_back(v[i]);
       if(v[i]==3)
       v2.push_back(v[i]);
       if(v[i]==2)
       v3.push_back(v[i]);
       if(v[i]==1)
       v4.push_back(v[i]);
    }
    
    int m=v3.size();
    int b=v4.size();
    int c=v2.size();
    int a=v1.size();
    s=a+c+m/2;
    b=b-c;
    if(m%2==1)
    {
        s++;
        b=b-2;
    }
    if(b>0)
    {
        s+=(b+3)/4;
    }
   cout<<s<<endl;
   
    
}