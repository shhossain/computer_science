vector<int> solve(vector<int>& nums) 
{
    map<int, int> hmap;

    for (auto i : nums) 
        hmap[i]++;

    vector<int> res;

    for (int i = nums.size() - 1; i >= 0; i--) 
    {
        if (hmap[nums[i]] > 1) 
        {
            hmap[nums[i]] = 1;
        } 
        else 
        {
            res.push_back(nums[i]);
        }
    }
    reverse(res.begin(), res.end());

    return res;
}
