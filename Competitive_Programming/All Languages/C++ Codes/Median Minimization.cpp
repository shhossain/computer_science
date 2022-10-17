int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int diff = 0;
    diff = abs(nums[n / 2 - 1] - nums[n / 2]);
    return diff;
}
