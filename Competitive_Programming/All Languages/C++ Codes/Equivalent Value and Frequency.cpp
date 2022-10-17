bool solve(vector<int>& nums) {

    unordered_map<int, int> M;

    for (auto n : nums) M[n]++;
    for (auto m : M) 
    {
        if (m.first == m.second) 
        return true;
    }
    return false;
}
