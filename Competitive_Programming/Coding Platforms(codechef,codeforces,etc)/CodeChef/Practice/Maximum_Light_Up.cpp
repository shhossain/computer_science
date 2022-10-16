#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        unsigned long long int p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;
        if (a*x + b<=a*y + c)
            cout<<p/(a*x + b)<<endl;
        else
            cout<<p/(a*y + c)<<endl;   
    }
    return 0;
}