class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minm=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            minm=min(minm,prices[i]);
            int profit=prices[i]-minm;
            maxprofit=max(maxprofit,profit);
            
        }
        return maxprofit;
    }
};
