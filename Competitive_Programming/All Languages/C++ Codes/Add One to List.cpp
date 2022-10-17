vector<int> solve(vector<int>& nums) {
   if (nums.empty()) 
   return nums;

    int i = nums.size() - 1;

    while (nums[i] == 9 && i != 0) 
    {
        nums[i] = 0;
        i--;
    }

    if (nums.size() == 100000 && nums[i] == 9) 
    return nums;

    if (nums[i] == 9) 
    {
        nums[i] = 1;
        nums.push_back(0);
    } 
    
    else
        nums[i] += 1;

    return nums; 
}
