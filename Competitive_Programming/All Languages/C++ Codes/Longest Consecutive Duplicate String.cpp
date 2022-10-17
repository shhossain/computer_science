int solve(string s) {
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n;) {
        int j = i + 1;
        while (j < n && s[i] == s[j]) {
            ++j;
        }
        ans = max(ans, j - i);
        i = j;
    }

    return ans;
}
