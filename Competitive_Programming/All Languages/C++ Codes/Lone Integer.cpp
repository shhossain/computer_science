int solve(vector<int>& nums) {
    int n=0,ans=0;

    while(n<32)
    {
        int zeros=0,ones=0;

        for(int num : nums)
        {
        int val = (num>>n) & 1;
        
        if (val==1)
        ones += 1;
        
        else
        zeros += 1;
        }

        if (ones % 3 != 0)
        {
            ans +=(1<<n);
        }
        n+= 1;
    }
    return ans;
}
