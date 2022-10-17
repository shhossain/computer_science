vector<string> solve(string s, int n) {
    int len = s.length();

    vector<string> ans(n);

    for (int i = 0; i < len; i++) 
    {
       ans[i % n].push_back(s[i]);
    }
    return ans;
}
