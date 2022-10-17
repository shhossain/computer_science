#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a > 0 && b > 0)
        {
            cout << "Solution\n";
        }
        else if (a == 0)
        {
            cout << "Liquid\n";
        }
        else if
            (b == 0) { cout << "Solid\n"; }
    }
    return 0;
}