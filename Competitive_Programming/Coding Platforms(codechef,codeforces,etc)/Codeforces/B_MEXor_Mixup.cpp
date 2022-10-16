#include<bits/stdc++.h>
using namespace std;

int Xor(int n)
{
    int rem = n%4;
    if(rem==0)
        return n;
    if(rem==1)
        return 1;
    if(rem==2)
        return n+1;
    if(rem==3)
        return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, x;
        cin>>a>>b;

        int rem = (a-1)%4;
        if(rem==0)
        {
            x = a-1;
            if(b==x)
                cout<<a<<"\n";
            else if(x==0 && a!=b)
                cout<<a+1<<"\n";
            else if(a!=b && (x^b)==a)
                cout<<a+2<<"\n";
            else if(a==b&&a==1)
                cout<<3<<"\n";
            else
                cout<<a+1<<"\n";
        }
        else if(rem==1)
        {
            x = 1;
            if(b==x)
                cout<<a<<"\n";
            else if((x^b)==a)
                cout<<a+2<<"\n";
            else
                cout<<a+1<<"\n";
        }
        if(rem==2)
        {
            x = a;
            if(b==x)
                cout<<a<<"\n";
            else if(b==0)
                cout<<a+2<<"\n";
            else
                cout<<a+1<<"\n";
        }
        if(rem==3)
        {
            x = 0;
            if(b==0)
                cout<<a<<"\n";
            else if(b==a)
                cout<<a+2<<"\n";
            else
                cout<<a+1<<"\n";
        }

    }
}