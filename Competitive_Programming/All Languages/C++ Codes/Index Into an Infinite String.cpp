string solve(string s, int i, int j) 
{
    string res = "";

    int n = s.length();

    while (i < j) 
    {
        res.push_back(s[i % n]);
        i++;
    }

    return res;
}
