int solve(string s, int k) 
{
    set<char> s1;
    
    for (auto i : s) 
    {
        s1.insert(i);
    }

    int n = s1.size();

    int x = k >> 1;

    if (k & 1) 
    x++;

    return pow(n, x);
}

