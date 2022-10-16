int solve(vector<int>& nums) 
{
    int mn = 1000000, ans = 0;
    for (auto x : nums) 
    {
        ans += x + 100000;
        mn = min(mn, x + 100000);
    }
    return ans - mn * nums.size();
}
