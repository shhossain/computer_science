int solve(vector<int>& nums) {

    int most = 0, cand = -1;

    unordered_map<int, int> m;

    for (int n : nums) {
        m[n]++;
        if (m[n] > most) {
            cand = n;
            most = m[n];
        }
    }
    return most;
}
