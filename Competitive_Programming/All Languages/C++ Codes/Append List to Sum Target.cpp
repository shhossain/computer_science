int solve(vector<int>& nums, int k, int target) {

    int cs = accumulate(nums.begin(), nums.end(), 0);

    target = target - cs;

    if (target < 0) target *= -1;

    return (target + k - 1)/k; 
}
