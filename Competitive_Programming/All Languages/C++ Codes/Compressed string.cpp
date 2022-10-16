string solve(string s) {
    string reduced;
    char top = 0;
    for (char c : s)
        if (top != c) 
        {
            reduced.push_back(c);
            top = c;
        }
    return reduced;
}
