#include <bits/stdc++.h>
using namespace std;
bool isValid(string s) {
        stack<char> st;
        int flag = 1;
        bool ans;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            if(s[i] == ')')
            {
               
                if(st.size()==0)
                {
                    flag = 0;
                    break;
                }
                
                if(st.top() == '(')
               {
                   st.pop();
               }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if(s[i] == '}')
            {
               
                if(st.size()==0)
                {
                    flag = 0;
                    break;
                }
                
                if(st.top() == '{')
               {
                   st.pop();
               }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if(s[i] == ']')
            {
               
                if(st.size()==0)
                {
                    flag = 0;
                    break;
                }
                
                if(st.top() == '[')
               {
                   st.pop();
               }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 0 || st.size()!=0)
            ans = false;
        else if(flag == 1)
            ans = true;
        return ans;
    }

int main()
{
    string s = "{()}[]";
    if (isValid(s))
        cout << "Balanced expression";
    else
        cout << "Not a Balanced expression";
    return 0;
}
