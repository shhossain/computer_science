class Solution {
    public:
    bool solve(string s) 
    {
        string want = "binarysearch";

        for (int i = 0; i < s.size(); i++) 
        {
            for (int d = 1; i + 11 * d < s.size(); d++) 
            {
                bool valid = true;

                for (int k = 0; valid && k < want.size(); k++) 
                {
                    valid = want[k] == s[i + d * k];
                }

                if (valid) 
                {
                    return true;
                }
            }
        }
        return false;
    }
};

bool solve(string s) 
{
    return (new Solution())->solve(s);
}
