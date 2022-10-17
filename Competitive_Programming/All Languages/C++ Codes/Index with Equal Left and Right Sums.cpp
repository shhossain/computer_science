int solve(vector<int>& nums) 
{
    int sum = 0;
    int l = nums.size();

    for (int i = 0; i < l; i++) 
    {
        sum = sum + nums[i];
    }

    int sum2 = 0;

    for (int j = 0; j < l; j++) 
    {
        if (sum2 == sum - sum2 - nums[j]) 
        {
            return j;
        }
        
        sum2 = sum2 + nums[j];
    }
    return -1;
}
