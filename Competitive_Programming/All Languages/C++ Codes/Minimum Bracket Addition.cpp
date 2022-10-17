int solve(string s) {

    stack<char> st;
    int cnt = 0;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == '(')
            st.push(s[i]);
        else {
            if (st.empty())
                cnt++;
            else
                st.pop();
        }
        
    }
    return cnt + st.size();
}
