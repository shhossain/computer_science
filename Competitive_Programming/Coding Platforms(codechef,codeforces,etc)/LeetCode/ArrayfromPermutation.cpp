class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int a = nums.size();
        for(int i = 0; i < a; i++) 
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};