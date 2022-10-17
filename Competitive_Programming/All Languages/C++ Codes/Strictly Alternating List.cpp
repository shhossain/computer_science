bool solve(vector<int>& nums) {
    int n= nums.size();
    for(int i=1;i<n;i++)
    {
        if(nums[i] == nums[i-1])
            return false;
         if (i == 1 and nums[i] < nums[i - 1]) 
            return false;
    }
    return true;

}
