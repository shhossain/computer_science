class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int len = nums.size();
        if (len < 3) return 0;
        int res = 0, idx = 0;
        while (idx < len) {
            int idx2 = idx + 2;
            while (idx2 < len && nums[idx2] - nums[idx2 - 1] == nums[idx2 - 1] - nums[idx2 - 2]) {
                idx2++;
            }
            int count = idx2 - idx - 2;
            res += count * (count + 1) / 2;
            idx = idx2 - 1;
        }
        return res;
    }
};
