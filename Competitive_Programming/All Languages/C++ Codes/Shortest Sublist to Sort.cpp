int solve(vector<int>& nums) {

    vector<int> v(nums);
    sort(v.begin(), v.end());

    int k = 0, l = -1, r = -1;

    for (int i = 0; i < v.size(); i++) 
    {
        if (v[i] != nums[i]) 
        {
            if (k == 0) 
            {
                l = i;
                k++;
            } 
            else
                r = i;
        }
    }
    if (l == -1 && r == -1) 
        return 0;

    return r - l + 1;
}
