#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;
    cin>>t;
    while(t--)
    {
       long long int a,b,c;
        cin>>a>>b>>c;
       long long int ma=max(a,max(b,c));
       
       if(a==b&&b==c)
       {
           cout<<1<<" "<<1<<" "<<1<<"\n";
           continue;
       }
        if(ma==a)
        {   if(a==b||a==c)
            {
                if(a==b)
                cout<<1<<" "<<1<<" "<<(ma-c)+1<<"\n";
                if(a==c)
                cout<<1<<" "<<(ma-b)+1<<" "<<1<<"\n";
            }
    
            else
            cout<<0<<" "<<(ma-b)+1<<" "<<(ma-c)+1<<"\n";
            continue;
        }
        if(ma==b)
        {  if(a==b||b==c)
            {
                if(a==b)
                cout<<1<<" "<<1<<" "<<(ma-c)+1<<"\n";
                if(b==c)
                cout<<(ma-a)+1<<" "<<1<<" "<<1<<"\n";
            }
            else
            cout<<(ma-a)+1<<" "<<0<<" "<<(ma-c)+1<<"\n";
            continue;
        }
        if(ma==c)
        {  if(a==c||b==c)
            {
                if(a==c)
                cout<<1<<" "<<(ma-b)+1<<" "<<1<<"\n";
                if(b==c)
                cout<<(ma-a)+1<<" "<<1<<" "<<1<<"\n";
            }
            else
            cout<<(ma-a)+1<<" "<<(ma-b)+1<<" "<<0<<"\n";
            continue;
        }

    }
}

