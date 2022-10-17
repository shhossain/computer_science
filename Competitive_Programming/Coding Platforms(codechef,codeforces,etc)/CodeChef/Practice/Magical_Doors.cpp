#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int count=0;
        string s;
        cin>>s;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i]!=s[i-1])
                count++;
            else
                continue;
        }
        if (s[0]=='0')
            cout<<count+1<<endl;
        else
            cout<<count<<endl;
    }
    return 0;
}
