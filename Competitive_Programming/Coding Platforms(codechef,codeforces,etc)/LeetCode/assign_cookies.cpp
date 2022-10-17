class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int cnt=0, i=0, j=0;
        
        while(i<g.size() && j<s.size()) {
            if(g[i]<=s[j]) {
                j++;
                i++;
                cnt++;
            } else if(g[i]>s[j]) {
                j++;
            }
        }
        return cnt;
        
    }
};
