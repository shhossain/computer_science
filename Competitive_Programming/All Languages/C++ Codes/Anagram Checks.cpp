bool solve(string s0, string s1) {
  int n1 = s0.length();
    int n2 = s1.length();
 
    if (n1 != n2)
        return false;

    sort(s0.begin(), s0.end());
    sort(s1.begin(), s1.end());

    for (int i = 0; i < n1; i++)
        if (s0[i] != s1[i])
            return false;
 
    return true;
}   
