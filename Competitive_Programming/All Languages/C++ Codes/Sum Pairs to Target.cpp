int solve(vector<int>& nums, int target) 
{
    int ans = 0, i = 0, j = nums.size() - 1;
    sort(nums.begin(), nums.end());

    while (i < j) 
    {
        if (nums[i] + nums[j] == target) 
        {
            i++;
            j--;
            ans += 1;
        } 
        else if (nums[i] + nums[j] > target) 
        {
            j -= 1;
        } 
        else 
        {
            i += 1;
        }
    }
    
    return ans;
}
