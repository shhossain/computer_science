int solve(vector<int>& nums) 
{
    int count = 0, lo, hi, mid;
    for (int i : nums) 
    {
        lo = 0;
        hi = nums.size() - 1;

        while (lo <= hi) 
        {
            mid = (lo + hi) / 2;
            if (nums[mid] == i) 
            {
                count++;
                break;
            } 
            else if (nums[mid] < i) 
            {
                lo = mid + 1;
            } 
            else 
            {
                hi = mid - 1;
            }
        }
    }

    return count;
}
