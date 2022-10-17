int solve(string s) {
    int a = 0;
    for (auto i : s) {
        if (i == '1')
            a++;
        else
            a--;
    }
    return abs(a);
}
