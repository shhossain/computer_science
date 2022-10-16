#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int sol=0;
        for(int i=0;i<n;i++)
        {
            int t,d;
            cin>>t>>d;
            if(k>=t)
            {
                k=k-t;
            }
            else{
                sol=sol+(t-k)*d;
                k=0;
            }
        }
        cout<<sol<<endl;
    }
    return 0;
}
