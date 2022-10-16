#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, sheep = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
            sheep++;
    }
    if (sheep == 1 || sheep == 0)
    {
        cout << 0 << endl;
        return;
    }
    int midSheep = (sheep + 1) / 2;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
            temp++;
        if (temp == midSheep)
        {
            midSheep = i;
            break;
        }
    }
    int countSheep = 0, ans = 0;
    for (int i = 0; i < midSheep; i++)
    {
        if (s[i] == '*')
            countSheep++;
        else
            ans += countSheep;
    }
    countSheep = 0;
    for (int i = n - 1; i > midSheep; i--)
    {
        if (s[i] == '*')
            countSheep++;
        else
            ans += countSheep;
    }
    cout << ans << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
