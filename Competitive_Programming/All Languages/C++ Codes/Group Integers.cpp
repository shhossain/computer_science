int gcd(int a, int b) {
    
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

bool solve(vector<int>& nums) 
{
 
    unordered_map<int, int> counter;

    int n = nums.size(); 


    for (int i = 0; i < n; i++) 
    {
        counter[nums[i]] += 1;
    }

 
    int cgcd = counter[nums[0]];
    for (auto it = counter.begin(); it != counter.end(); it++)
        cgcd = gcd(cgcd, it->second);

    return cgcd > 1;
}
