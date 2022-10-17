int solve(vector<int>& arr) {

    unordered_map<int, int> mp;

    for (int i : arr) mp[i]++;

    int n = arr.size();

    int ans = 0;

    for (int i = 0; i < 32; i++) 
    {
        int sum = 1 << i;
        for (int i = 0; i < n; i++) 
        {
            ans += mp[sum - arr[i]];
            if (sum - arr[i] == arr[i]) 
                ans--;
        }
    }
    return ans / 2;
}
