#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            if(n>45)
            cout<<-1<<endl;
            else if(n<=9)
            cout<<n<<endl;
            else if(n<18)
            {
            int a=9;
            int b=n-a;
            int ans=b*10+a;
            cout<<ans<<endl;
            }
           
            else if(n<=24)
            {
            int a=9;
            int b=8;
            int c=n-(a+b);
            int ans=c*100+b*10+a;
            cout<<ans<<endl;
            }
             else if(n<=30)
            {
            int a=9;
            int b=8;
            int c=7;
            int d=n-(a+b+c);
            int ans=d*1000+c*100+b*10+a;
            cout<<ans<<endl;
            }
              else if(n<=35)
            {
            int a=9;
            int b=8;
            int c=7;
            int d=6;
            int e=n-(a+b+c+d);
            ll ans=e*10000+d*1000+c*100+b*10+a;
            cout<<ans<<endl;
            }
             else if(n<=39)
            {
            int a=9;
            int b=8;
            int c=7;
            int d=6;
            int e=5;
            int f=n-(a+b+c+d+e);
            ll ans=f*100000+e*10000+d*1000+c*100+b*10+a;
            cout<<ans<<endl;
            }
             else if(n<=42)
            {
            int a=9;
            int b=8;
            int c=7;
            int d=6;
            int e=5;
            int f=4;
            int g=n-(a+b+c+d+e+f);
            ll ans=g*1000000+f*100000+e*10000+d*1000+c*100+b*10+a;
            cout<<ans<<endl;
            }
             else if(n<=44)
            {
            int a=9;
            int b=8;
            int c=7;
            int d=6;
            int e=5;
            int f=4;
            int g=3;
            int h=n-(a+b+c+d+e+f+g);
            ll ans=h*10000000+g*1000000+f*100000+e*10000+d*1000+c*100+b*10+a;
            cout<<ans<<endl;
            }
            else if(n<=45)
            {
            int a=9;
            int b=8;
            int c=7;
            int d=6;
            int e=5;
            int f=4;
            int g=3;
            int h=2;
            int i=n-(a+b+c+d+e+f+g+h);
            ll ans=i*100000000+h*10000000+g*1000000+f*100000+e*10000+d*1000+c*100+b*10+a;
            cout<<ans<<endl;
            }
            
            
            
        }
    
}