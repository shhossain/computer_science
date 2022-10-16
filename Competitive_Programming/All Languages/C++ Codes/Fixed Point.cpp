int solve(vector<int>& nums) 
{
    if(nums.size() == 0)
    return -1;

    int low=0;
    int high =nums.size() - 1;

    while(low<high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] >= mid)
            high = mid;
        else
            low = mid + 1;
    }
    if(nums[low]==low)
    return low;

   return -1; 
}
