bool solve(vector<int>& nums, int k)
 {
    int lhs = 0;
    int rhs = nums.size()-1;
    while (lhs < rhs) 
    {
    int sum = nums[lhs] + nums[rhs];
    if (sum == k) return true;
    if (sum < k)
        lhs++;
    else
        rhs--;
    }
    return false;
}
