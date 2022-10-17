#include <iostream>

using namespace std;



int main()
{
   long long t,x,y,a=0,b=0,gcd,r,lcm;
   cin>>t;
   while(t--)
   {

       cin>>x>>y;
       a=x;
       b=y;
       while(b!=0)
       {
           r=a%b;
           a=b;
           b=r;
       }
       gcd=a;
       lcm=(x*y)/gcd;
       cout<<gcd<<" "<<lcm<<endl;
   }
   return 0;
}
