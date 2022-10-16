int solve(vector<int>& nums) {
    int n = nums.size();
      vector<int> op(n);
      int ret = 0;
      for (int i = 0; i < nums.size(); i++) {
         if (i - 1 >= 0) {
            op[i] += op[i - 1];
         }
         if ((nums[i] + op[i]) & 1) {
            op[i]++;
            ret++;
         }
      }
      return ret;
   }  
