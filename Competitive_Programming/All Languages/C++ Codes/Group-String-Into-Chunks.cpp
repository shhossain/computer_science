vector<string> solve(string s, int n) 
{
    vector<string> ans;
    int x = 0;
    string y = "";

    for (int i = 0; i < s.size(); i++) 
    {
        if (x == n) 
        {
            ans.push_back(y);

            y = "";
            x = 0;
        }

        x += 1;
        y += s[i];
    }

    if (!y.empty())
     ans.push_back(y);

return ans;
}
