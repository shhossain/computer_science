#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define frn(n) for (int i = 0; i < n; i++)
#define frnj(n) for (int j = 0; j < n; j++)
#define frni(n, k) for (int i = k; i < n; i++)
#define vctri vector<int>
#define vctrl vector<ll>

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    frn(n)
    {
        string s;
        cin >> s;
        frnj(m)
        {
            arr[i][j] = s[j] - '0';
        }
    }

    frn(n - 1)
    {
        frnj(m - 1)
        {
            int k = arr[i][j] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i][j + 1];
            if (k == 3)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}