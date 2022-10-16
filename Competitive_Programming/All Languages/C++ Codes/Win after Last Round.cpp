int solve(vector<int>& nums) {
    sort(begin(nums), end(nums));
    int low = 0;
    int n = nums.size();
    int high = n - 1;
    while (low < high) {
        int mid = (low + high) / 2;
        int p = nums[mid] + n;
        int ct = 1;
        int flag = 0;
        for (int i = n - 1; i > mid; i--) {
            if (nums[i] + ct > p) flag = 1;
            ct++;
        }
        if (flag)
            low = mid + 1;
        else
            high = mid;
    }
    return n - low;
}
