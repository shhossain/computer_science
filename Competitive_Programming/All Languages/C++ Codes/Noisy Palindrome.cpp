bool solve(string s) {

    int l = 0, r = s.length() - 1;
    string str;

    for (int i = 0; i <= r; i++) {
        if (s[i] - 'a' >= 0 && s[i] - 'z' <= 26) {
            str.push_back(s[i]);
        }
    }

    l = 0, r = str.length() - 1;

    while (l <= r) {
        if (str[l] != str[r]) return false;
        l++, r--;
    }
    return true;
}
