string solve(string s) {
  if (s.empty()) 
    return "";

    string res;
    res += s[0];

    for (int i=1;i< s.size();i++) 
    {
        if (s[i] != s[i-1])res += s[i];//x
    }

    return res;  
}
