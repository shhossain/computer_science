#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int check(int n, string a[], char target)
{
    int count[n] = {0};
    for (int i = 0; i < n; i++)
    {
        for (char c : a[i])
        {
            if (c == target)
                count[i]++;
            else
                count[i]--;
        }
    }
    sort(count, count + n);
    int ans = 0;
    int sum = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (count[i] <= 0)
            break;

        ans++;
        sum += count[i];
    }

    if (ans == 0)
        return 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (count[i] > 0)
            continue;

        if (sum > -count[i])
        {
            sum += count[i];
            ans++;
        }
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = -1;

    for (char now = 'a'; now <= 'e'; now++)
        ans = max(ans, check(n, a, now));

    cout << ans << endl;
}

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}