int solve(vector<int>& nums, vector<int>& values) {
    int jsum = INT_MIN, isum = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {
        int sum = nums[i] + values[i];
        jsum = max(jsum, sum);
        sum = values[i] - nums[i];
        isum = max(isum, sum);
    }
    return isum + jsum;
}
