int solve(int n) {
    string S = to_string(n);
    for (auto& s : S) {
        if (s != '3') {
            s = '3';
            break;
        }
    }
    return stoi(S);
}
