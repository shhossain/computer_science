#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        ll el;
        cin >> el;

        if (dq.front() > el)
            dq.push_front(el);
        else
            dq.push_back(el);
    }
    for (auto i = dq.begin(); i != dq.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}