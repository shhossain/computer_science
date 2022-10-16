#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    while (q--)
    {
        long long x, y;
        cin >> x >> y;
        long long ans = n * (x - 1) + y;
        ans = (ans + 1) / 2;
        long long sum = x + y;
        ans += (sum % 2 == 1) ? (n * n + 1) / 2 : 0;
        cout << ans << endl;
    }
    return 0;
}
