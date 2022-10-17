class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int maxi = 0;
        int res = INT_MIN;
        int j = 0;
        for(int i = 1; i< prices.size(); i++)
        {
            profit = prices[i] - prices[i-1];
            maxi += profit;
            res = max(res, maxi);
            if(maxi < 0)
            {
                profit = 0;
                maxi = 0;
                j++;
            }
        }
        if(res > 0)
        return res;
        else
            return 0;
    }
};
