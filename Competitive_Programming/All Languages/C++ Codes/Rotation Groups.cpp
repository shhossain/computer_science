int solve(vector<string>& words)
 {
    unordered_set<string> w;

    for (string& s : words) {
        for (int i = 0; i < s.size(); i++) {
            rotate(s.begin(), s.begin() + 1, s.end());
            if (w.count(s)) break;
        }
        w.insert(s);
    }

    return w.size();
}
