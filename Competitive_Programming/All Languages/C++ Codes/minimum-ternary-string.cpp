#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool found = true;
    int two = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '2')
        {
            two = i;
            break;
        }
    }
    string ans = "";
    if (two != -1)
    {
        int zeros = 0, onesbefore = 0;
        for (int i = 0; i < two; i++)
        {
            if (s[i] == '0')
            {
                zeros++;
            }
            else
            {
                onesbefore++;
            }
        }
        while (zeros--)
        {
            ans += string(1, '0');
        }
        while (onesbefore--)
        {
            ans += string(1, '1');
        }
        int onesafter = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i > two and s[i] == '1')
            {
                onesafter++;
            }
        }
        while (onesafter--)
        {
            ans += string(1, '1');
        }
        ans += string(1, '2');
        for (int i = two + 1; i < s.size(); i++)
        {
            if (s[i] != '1')
            {
                ans += string(1, s[i]);
            }
        }
    }
    else
    {
        ans = "";
        int zeros = 0, ones = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                zeros++;
            }
            else
            {
                ones++;
            }
        }
        while (zeros--)
        {
            ans += string(1, '0');
        }
        while (ones--)
        {
            ans += string(1, '1');
        }
    }
    cout << ans << endl;
    return 0;
}
