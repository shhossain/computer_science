int solve(vector<int>& nums) 
{
    sort(nums.begin(), nums.end());
    int diff = 0;
    for (int i = 1; i < nums.size(); i++) 
    {
        if ((nums[i] - nums[i - 1]) > diff) 
        {
            diff = nums[i] - nums[i - 1];
        }
    }
    return diff;
}
