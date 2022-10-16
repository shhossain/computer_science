bool solve(string dictionary, string s) {
    bool ans = false;
    unordered_map<char, int> ump;
    for (int i = 0; i < dictionary.size(); i++) {
        ump.insert({dictionary[i], i + 1});
    }
    string str;
    for (int i = 0; i < s.size(); i++) {
        if (ump.find(s[i]) != ump.end()) {
            str += s[i];
        }
    }
    for (int i = 1; i < str.size(); i++) {
        int prev = ump[str[i - 1]];
        int curr = ump[str[i]];
        cout << ump[str[i-1]] << ump[str[i]] << endl;

        if (prev > curr) return false;
    }
    return true;
}
    
