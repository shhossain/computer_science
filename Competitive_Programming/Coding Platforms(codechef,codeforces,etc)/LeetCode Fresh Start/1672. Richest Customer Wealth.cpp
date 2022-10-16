class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       
        int maxWealthSoFar = 0;
        
        for (vector<int>& account : accounts) {
           
            int currCustomerWealth = 0;
            for (int money : account) {
                currCustomerWealth += money;
            }
          
            maxWealthSoFar = max(maxWealthSoFar, currCustomerWealth);
        }
        return maxWealthSoFar;
    }
};
