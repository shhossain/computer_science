class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size(), m = p.size();
        vector<int> ans;
        vector<int> p_count(26, 0);
        vector<int> s_count(26, 0);
        
        if(m > n) {
            return {};
        }
        
        for(int i = 0; i < m; i++) {
            p_count[p[i]-'a']++;
            s_count[s[i]-'a']++;
        }
        
        int left = 0, right = m-1;
        while(right < n) {
            if(p_count == s_count) {
                ans.push_back(left);
            }
            s_count[s[left]-'a']--;
            right++;
            if(right != n) {
                s_count[s[right]-'a']++;
            }
            left++;
        }
        
        return ans;
    }
};
