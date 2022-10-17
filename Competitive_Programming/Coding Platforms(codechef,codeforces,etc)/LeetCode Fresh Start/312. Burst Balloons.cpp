class Solution {
public:
    int maxCoins(vector<int>& nums) {
        nums.push_back(1);
        nums.insert(nums.begin(), 1);
        vector<vector<int> > dp(nums.size(), vector<int>(nums.size(), 0));
        for (int i = nums.size() - 3; i >= 0; i --) {
            for (int j = i + 2; j < nums.size();j ++) {
                for (int k = i + 1; k < j; k ++)
                    dp[i][j] = max(dp[i][j], dp[i][k] + dp[k][j] + nums[i] * nums[k] * nums[j]);
            }
        }
        return dp[0][nums.size() - 1];
    }
};
