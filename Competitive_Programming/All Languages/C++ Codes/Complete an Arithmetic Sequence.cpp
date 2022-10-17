int solve(vector<int>& v) {
    int i, sum1 = 0, sum2 = 0;

    for (i = 0; i < v.size(); ++i) {
        sum1 += v[i];
    }

    sum2 = ((v.size() + 1) * (v[0] + v[v.size() - 1])) / 2;
    return sum2 - sum1;
}
