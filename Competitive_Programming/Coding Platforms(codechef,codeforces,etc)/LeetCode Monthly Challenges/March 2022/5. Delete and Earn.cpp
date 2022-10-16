class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(10001, 0);
        for(auto num : nums) freq[num]++;
        int max_val = 0, prev_max = 0;
        for(int i = 0; i <= 10000; i++) {
            int cur_max = max(max_val, prev_max + i * freq[i]);
            prev_max = max_val;
            max_val = cur_max;
        }
        return max_val;
    }
};
