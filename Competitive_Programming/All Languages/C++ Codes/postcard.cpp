#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    int cc = 0, sf = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '*')
        {
            sf++;
        }
        else if (s[i] == '?')
        {
            cc++;
        }
    }
    int n = s.size() - cc - sf;
    string ans;
    if (n > k)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*' or s[i] == '?')
            {
                if (n > k)
                {
                    ans = ans.substr(0, ans.size() - 1);
                    n--;
                }
            }
            else
            {
                ans += s[i];
            }
        }
        if (n != k)
        {
            ans = "Impossible";
        }
    }
    else if (n < k)
    {
        if (sf > 0)
        {
            bool ok = true;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != '*' and s[i] != '?')
                {
                    ans += s[i];
                }
                else if (ok and s[i] == '*')
                {
                    int left = k - n;
                    while (left--)
                    {
                        ans += s[i - 1];
                    }
                    ok = false;
                }
            }
        }
        else
        {
            ans = "Impossible";
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '*' and s[i] != '?')
            {
                ans += s[i];
            }
        }
    }
    cout << ans << endl;
    return 0;
}
