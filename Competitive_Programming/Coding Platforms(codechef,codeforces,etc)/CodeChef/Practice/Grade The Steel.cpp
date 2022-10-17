#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define loop(i, a, b) for (int i = a; i < b; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        float x;
        cin>>n>>x>>k;
        int f1=0,f2=0,f3=0;
        if(n>50)
        {
            f1=1;
        }
        if(x<0.7)
        {
            f2=1;
        }
        if(k>5600)
        {
            f3=1;
        }
        if(f1==1&&f2==1&&f3==1)
        {
            cout<<"10"<<"\n";
        }
        else if(f1==1&&f2==1)
        {
            cout<<"9"<<"\n";
        }
        else if(f2==1&&f3==1)
        {
            cout<<"8"<<"\n";
        }
        else if(f1==1&&f3==1)
        {
            cout<<"7"<<"\n";
        }
        else if(f1==1||f2==1||f3==1)
        {
            cout<<"6"<<"\n";
        }
        else
        {
            cout<<"5"<<"\n";
        }
    }
}
