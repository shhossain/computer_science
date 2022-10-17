#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        a[i] = {d, i};
    }
    vector<pair<int, int>> ac(a);
    sort(ac.rbegin(), ac.rend());
    vector<int> c(n, 0);
    int color = 1;
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += ac[i].first;
        c[ac[i].second] = color++;
    }
    vector<int> t(k, 0);
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        t[index]++;
        if (c[i] != 0)
        {
            int j;
            for (j = i + 1; j < n; j++)
            {
                if (c[j] != 0)
                {
                    break;
                }
                t[index]++;
            }
            i = j - 1;
            index++;
        }
    }
    cout << ans << endl;
    for (int i = 0; i < k; i++)
    {
        cout << t[i] << " ";
    }
    cout << endl;
    return 0;
}
