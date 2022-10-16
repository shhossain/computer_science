int solve(string s, string t)
 {
    int mini = INT_MAX;

    for (int i = 0; i <= s.size() - t.size(); i++) 
    {
        int cn = 0;
        for (int j = i; j < i + t.size(); j++) 
        {
            if (s[j] == t[j - i]) 
            {
                cn++;
            }
        }

        int p = t.size() - cn;
        mini = min(mini, p);
    }
    return mini;
}
