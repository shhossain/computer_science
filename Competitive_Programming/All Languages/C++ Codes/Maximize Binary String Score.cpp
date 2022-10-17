int solve(string s) 
{
    int left_0 = 0, right_1 = 0;

    for (auto &ch : s) 
    {
        right_1 += ch == '1';
    }
    int ans = 0;

    for (int i = 0; i < s.length() - 1; i++) 
    {
        right_1 -= s[i] == '1';
        left_0 += s[i] == '0';
        ans = max(ans, left_0 + right_1);
    }
    return ans;
}
