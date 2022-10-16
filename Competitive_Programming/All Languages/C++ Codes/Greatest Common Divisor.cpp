int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}
int solve(vector<int>& nums) {
    int p = 0;
    for (auto it : nums) {
        p = gcd(p, it);
    }
    return p;
}
