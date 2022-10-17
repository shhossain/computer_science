bool solve(string s, int k) 
{
    int i, j, f = 0, ans = 0;
    for (j = 0; j < s.size(); j++) 
    {
        if (s[j] == 'x') 
        {
            if (f == 0)
                if (ans >= (k)) 
                    return true;

                if (ans >= (2 * (k - 1)) + 1)
                    return true;
            else
                ans = 0;
            f = 1;
        } 
        else
            ans++;
    }
    if (ans >= (k)) 
        return true;
        
    return false;
}
