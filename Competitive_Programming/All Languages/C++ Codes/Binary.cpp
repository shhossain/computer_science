 
#include <iostream>
#include<string.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l,r;
    l=r=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='z')
            l++;
        else if(s[i]=='n')
            r++;
    }
    while(r)
    {
        cout<<1<<" ";
        r--;
    }
    while(l)
    {
        cout<<0<<" ";
        l--;
    }
    cout<<endl;
    return 0;
}
