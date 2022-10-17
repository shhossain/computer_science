int solve(vector<int>& nums, int k) {

    int l = nums.size();

    if (l < 1) return 0;
    sort(nums.begin(), nums.end());

    int i, sum = 0;
    for (i = 0; i < l; i++) {
        if (nums[i] >= 0 || k <= 0) break;
        nums[i] *= -1;
        k--;
        sum += nums[i];
    }

    if (k % 2) 
    {
        if (i == l)
            sum -= 2 * nums[i - 1];
        else if (i == 0)
            sum -= 2 * nums[i];
        else
            sum -= 2 * min(nums[i - 1], nums[i]);
    }
    
    for (; i < l; i++) sum += nums[i];
    return sum;
}
