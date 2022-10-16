bool solve(vector<int>& nums, vector<int>& target) 
{
    unordered_map<int, int> mp;

    for (int& x : nums) {
        mp[x]++;
    }
    for (int& x : target) {

        if (--mp[x] == 0) {
            mp.erase(x);
        }
    }
    if(mp.size() == 0)
    return true;

    else 
    return false;
}
