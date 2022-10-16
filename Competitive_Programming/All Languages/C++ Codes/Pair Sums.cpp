int solve(vector<int>& nums) {
    int odd = 0, even = 0;
    for (int x = 0; x < nums.size(); x++) {
        if (nums[x] % 2 == 0)
            even++;
        else
            odd++;
    }
   int c= even * odd;
   return c;
}
