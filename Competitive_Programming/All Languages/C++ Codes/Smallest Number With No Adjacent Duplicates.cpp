string solve(string s) {
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '?') {
            ans += s[i];
        } 
        else {
         int can = 1;
            while (true) {
                if (i > 0 && ans[i - 1] - '0' == can) {
                    can++;
                    continue;
                }
                if (i + 1 < s.size() && s[i + 1] - '0' == can) {
                    can++;
                    continue;
                }
                break;
            }
            ans += to_string(can);
        }
    }
    return ans;
}
