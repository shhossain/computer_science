bool solve(vector<int>& nums, int k) {
   int n =nums.size();
   map<int,int> m;
   for(int i=0;i<n;i++)
   m[nums[i]]++;
   for(int i=0;i<n;i++){
   m[nums[i]]--;
   if(m[k-nums[i]])
   return true;
   m[nums[i]]++;
   }
   return false;
}
