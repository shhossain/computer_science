int solve(vector<int>& nums, int target) 
{
    sort(nums.begin(), nums.end());

    int ret = nums[0] + nums[1];

    assert(ret < target);

    int lhs = 0;

    int rhs = nums.size() - 1;

    while (lhs < rhs)
    {
        int candSum = nums[lhs] + nums[rhs];

        if (candSum >= target)
            rhs--;
        else 
        {
            ret = max(ret, candSum);
            lhs++;
        }
    }
    return ret;
}
