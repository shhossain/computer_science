int solve(vector<int>& nums, int k) 
{
    for (int i = 1; i < nums.size(); i++) 
    {
        nums[i] += nums[i - 1];
    }
    
    for (int i = nums.size() - 1; i >= 0; i--) 
    {
        if (nums[i] <= k) 
        return i;
    }
    return -1;
}
