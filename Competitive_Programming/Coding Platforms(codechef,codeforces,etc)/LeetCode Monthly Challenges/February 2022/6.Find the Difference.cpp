class Solution {
public:
char findTheDifference(string s, string t) {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            ans-=s[i];
            ans-=t[i];
        }
        ans+=t[s.size()];  
        return ans;
    }
};
