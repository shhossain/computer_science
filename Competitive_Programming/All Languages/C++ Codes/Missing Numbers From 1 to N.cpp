vector<int> solve(vector<int>& nums) 
{
    for (int val:nums) 
    {
        int idx = abs(val) - 1;
        nums[idx] = nums[idx] < 0 ? nums[idx] : -nums[idx];
    }
    int count = 0;

    for (int i = 0; i < nums.size(); ++i)
        if (nums[i] > 0) 
        {
            nums[count++] = i + 1;
        }   
    nums.resize(count);
    return nums;
}
