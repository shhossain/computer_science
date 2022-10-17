// ----------------------------- || ** Hacktober 2021 ** || -------------------------------
/*
 * Author : Umesh Kumar
 * Date : 09/10/2021
 * Problem : https://www.codechef.com/OCT21C/problems/DIGITREM
 */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int n, d, i, j;
        cin >> n >> d;

        string num = to_string(n);
        int len = num.size();
        if (d == 0)
        {
            string s(len, '1');
            for (int i = 0; i < num.length(); i++)
            {
                if (num[i] == '0')
                    break;
                s[i] = num[i];
            }
            cout << stoll(s) - n << endl;
        }
        else if (d == 9)
        {
            if (num[0] == '9')
            {
                string s(len + 1, '0');
                s[0] = '1';
                cout << stoll(s) - n << endl;
            }
            else
            {
                string s(len, '0');
                int i = 0;
                bool found = false;
                while (i < len)
                {
                    if (num[i] >= '8')
                    {
                        j = i;
                        while (j < len && num[j] >= '8')
                        {
                            if (num[j] == '9')
                            {
                                if(i==0)
                                    s = '1' + s;
                                else
                                    s[i-1] += 1;
                                found = true;
                                break;
                            }
                            j++;
                        }
                    }
                    if(found)
                        break;
                    s[i] = num[i];
                    i++;
                }
                cout << stoll(s) - n << endl;
            }
        }
        else
        {
            string s(len, '0');
            for (int i = 0; i < len; i++)
            {
                if (num[i] - '0' == d)
                {
                    s[i] = (num[i] + 1);
                    break;
                }
                s[i] = num[i];
            }
            cout << stoll(s) - n << endl;
        }
    }
    return 0;
}
