class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i,j,n = strs.size();
        if (n == 0) return "";
        sort(strs.begin() ,strs.begin() + n);
        for (j = 0; j < strs[0].size() && j < strs[n - 1].size() && strs[0][j] == strs[n - 1][j]; j++);
        return strs[0].substr(0, j);
    }
};
