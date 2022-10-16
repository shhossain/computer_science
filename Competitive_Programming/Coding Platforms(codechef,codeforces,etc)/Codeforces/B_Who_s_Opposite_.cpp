#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;

        if((a==1&&b==2)||(a==2&&b==1))
        {
            if(c==1)    cout<<"2\n";
            else if(c==2)   cout<<"1\n";
            else    cout<<"-1\n";
        }

        else
        {
            int diff = abs(a-b);
            if(a<=2*diff && b<=2*diff && c<=2*diff)
            {
                if(c-diff>=1)
                    cout<<c-diff<<"\n";
                else    cout<<c+diff<<"\n";
            }
            else
                cout<<"-1\n";
        }
    }
}

//AC