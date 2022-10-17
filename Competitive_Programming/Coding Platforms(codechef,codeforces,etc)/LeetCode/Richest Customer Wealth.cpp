class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> sum;
        for(int i=0; i<accounts.size(); i++)
        {
            int s = 0;
            for(int j=0; j<accounts[i].size(); j++)
            {
                s+=accounts[i][j];
            }
            sum.push_back(s);
        }
        return *max_element(sum.begin(), sum.end());
    }
};
