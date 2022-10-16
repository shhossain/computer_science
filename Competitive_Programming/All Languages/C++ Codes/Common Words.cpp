string lo(string s) {
    string t = "";
    for (int i = 0; i < (int)s.length(); ++i) t += tolower(s[i]);
    return t;
}
int solve(string s0, string s1) {
    unordered_map<string, bool> m, n;
    int nt = 0;
    stringstream a(s0);
    stringstream b(s1);
    string s, t;
    while (a >> s) m[(lo(s))] = true;
    while (b >> t) {
        string x = lo(t);
        if (m[x] == true && n[x] == false) {
            ++nt;
            n[x] = true;
        }
    }

    return nt;
}
