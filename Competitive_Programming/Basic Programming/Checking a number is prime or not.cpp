#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter Number:";
    cin>>number;
    bool isPrime=true;
    for(int i=2; i*i<=number; i++)
    {
        if(number%i==0)
        {
            isPrime=false;
        }
    }
    if(isPrime)
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not Prime Number"<<endl;
    }
}
