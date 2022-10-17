int solve(vector<int>& nums) { 
    int n = nums.size();
    vector<int> bucket(n + 1, 0);

    for (int value : nums) {
        if (value < n)
            bucket[value]++;
        else
            bucket[n]++;
    }

    int k = 0;
    for (int i = n; i >= 0; i--) {
        k += bucket[i];
        if (k == i) return k;
    }

    return -1;
}
