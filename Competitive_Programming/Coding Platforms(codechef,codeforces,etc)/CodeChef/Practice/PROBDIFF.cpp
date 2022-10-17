#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[11];
        for (int i = 0; i < 11; i++)
        {
            a[i] = 0;
        }
        for (int i = 0; i < 4; i++)
        {
            int x;
            cin >> x;
            a[x]++;
            cout<<a[x]<<endl;
        }
        
    }
}