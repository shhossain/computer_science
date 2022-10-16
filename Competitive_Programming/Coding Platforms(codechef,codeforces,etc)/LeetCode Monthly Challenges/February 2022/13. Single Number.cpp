class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int i = 0;
        unordered_map<int,int> mp;
        for(i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++; 
        }
        for(auto &it:mp)
        {
            if(it.second==1)
            {
                i = it.first;
                break;
            }
        }
        return i;
    }
};
