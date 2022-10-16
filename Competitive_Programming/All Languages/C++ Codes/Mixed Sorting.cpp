vector<int> solve(vector<int>& nums)
 {
    vector<int> odd;
    vector<int> even;
    for (int i = 0; i < nums.size(); i++) 
    {
        if (nums[i] % 2 == 0) 
        {
            even.push_back(nums[i]);
        } 
        
        else 
        {
            odd.push_back(nums[i]);
        }
    }


    sort(even.begin(), even.end());
    sort(odd.rbegin(), odd.rend());

    int o = 0;
    int e = 0;

    for (int i = 0; i < nums.size(); i++) 
    {
        if (nums[i] % 2 == 0) 
        {
            nums[i] = even[e];
            e++;
        }
        else 
        {
            nums[i] = odd[o];
            o++;
        }
    }
    return nums;
}
