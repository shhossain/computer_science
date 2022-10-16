class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,pair<int,int>>m;
        int c=0,mx=0,i=0,pos=0;
        for(i=0;i<s.size();i++)
        {
            if(m[s[i]].first<pos)m[s[i]].second=0;
            if(m[s[i]].second==0)c++;
            else{
                c=i-m[s[i]].first;
                pos=m[s[i]].first;
            }
            m[s[i]].first=i;
            m[s[i]].second=1;
			mx=max(c,mx);
        }return mx;
    }
};
