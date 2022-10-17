bool solve(vector<int>& nums) 
{
    for (int i = 0; i < nums.size() && 2 * i + 1 < nums.size(); i++) 
    {
        if (nums[i] < nums[2 * i + 1]) 
            return false;

        if (2 * i + 2 < nums.size() && nums[i] < nums[2 * i + 2])           
            return false;
    }

    return true;
}
