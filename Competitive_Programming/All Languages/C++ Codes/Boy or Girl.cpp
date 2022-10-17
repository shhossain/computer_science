#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    set<char> st;
    string s;
    while(cin >> s)
    {
        for(int i = 0; i < s.length(); ++i)
            st.insert(s[i]);
        if(st.size() & 1)
            cout << "IGNORE HIM!" << '\n';
        else
            cout << "CHAT WITH HER!" << '\n';
        st.clear();
    }
    return 0;
