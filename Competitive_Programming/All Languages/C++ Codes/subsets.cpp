class Solution {
public:
    vector<vector<int>> ans;
    void generate(vector<int> nums,vector<int> &cur,int n){
        if(n==nums.size()){
            ans.push_back(cur);
            return;
        }
        generate(nums,cur,n+1);
        cur.push_back(nums[n]);
        generate(nums,cur,n+1);
        cur.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> cur;
        generate(nums,cur,0);
        return ans;
    }
};
