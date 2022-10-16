int solve(vector<int>& nums) {

    unordered_set<int> s;

    for (int i = 0; i < nums.size(); i++) 
    {
        s.insert(nums[i]);
    }
    return s.size();
}
