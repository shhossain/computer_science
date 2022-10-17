class Solution {
public:
    int maxProfit(vector<int>& a) {
        vector<int> dp(a.size(), 0);
        int minValue = a[0];
        a[0] = 0;
        
        for (int i = 1; i < a.size(); i++) {
            minValue = min(minValue, a[i]);
            dp[i] = max(dp[i - 1], a[i] - minValue);
        }   
        
        return dp[a.size() - 1];
    }
};
