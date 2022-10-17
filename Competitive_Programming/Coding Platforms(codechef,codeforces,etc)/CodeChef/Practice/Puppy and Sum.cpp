#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    sum+=i;
    
    return sum;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int d, n;
        cin>>d>>n;
        for(int i=1;i<=d;i++)
        {
            n=sum(n);
        }
        cout<<n<<endl;
    }    
    return 0;
}
