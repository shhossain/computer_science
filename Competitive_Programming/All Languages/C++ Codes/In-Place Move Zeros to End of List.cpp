bool solve(string s) 
{
    string p = s + s;

    int n = s.size();
    
    for (int i = 1; i < n; i++)

        if (substr(i, n) == s) 
        return true;

    return false;
}
