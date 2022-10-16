vector<int> solve(vector<int>& nums) {
    int n = nums.size();

    if (n == 0) return {};

    sort(nums.begin(), nums.end());

    vector<int> res(n);

    int i = 0, j = n - 1, k = 0;

    while (k < n) {
        res[k++] = nums[j--];
        res[k++] = nums[i++];
    }

    return res;
}
