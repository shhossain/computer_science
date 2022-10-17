class TwoSum {
    private:
    vector<int> nums;

    public:
    TwoSum() {
        vector<int> temp;
        nums = temp;
    }

    void add(int val) {
        nums.push_back(val);
    }

    bool find(int val) {
        sort(nums.begin(), nums.end());
        if (nums.size() <= 1 || nums.empty()) return false;
        int i = 0, r = nums.size() - 1;
        while (i < r) {
            if (nums[i] + nums[r] == val)
                return true;
            else if (nums[i] + nums[r] > val)
                r--;
            else
                i++;
        }
        return false;
    }
};
