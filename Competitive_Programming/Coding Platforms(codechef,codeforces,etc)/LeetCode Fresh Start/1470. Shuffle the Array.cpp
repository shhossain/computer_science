class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s = 0;
        int e = n;
        
        vector<int> v;
        
        while(s<e)
        {
            v.push_back(nums[s]);
            v.push_back(nums[n]);
            s++; 
            n++;
        }
        return v;
    }
};
