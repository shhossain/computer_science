string solve(string s) 
{
    vector<int> helper(s.size());

    for (int i=s.size()-1, j=i; i>=0; i--) 
    {
        if (s[j] > s[i]) 
        j=i; 
        
        helper[i] = j;
    }

    for (int i=0; i<s.size(); i++) 
    {
        if (s[i] <= s[helper[i]]) 
         continue;
        
        swap(s[i], s[helper[i]]);
        break;
    }
    return s;
}
