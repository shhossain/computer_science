bool solve(vector<int>& nums)
 {
    int n = nums.size();

    if (n % 2 != 0) 
    return false;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 1; i += 2) 
    {
        if (nums[i] != nums[i + 1]) 
        return true;
    }

    return false;
}
