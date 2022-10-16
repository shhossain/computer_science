#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,p,x,y,cx=0,cy=0;
        cin>>n>>p>>x>>y;
        int arr[101];
        for (int i = 1; i <= n; i++)
            cin>>arr[i];
        for (int i = 1; i <= p; i++)
        {
            if (arr[i]==0)
                cx++;
            else
                cy++;
        }
        cout<<cx*x+cy*y<<endl;
    }
    return 0;
}