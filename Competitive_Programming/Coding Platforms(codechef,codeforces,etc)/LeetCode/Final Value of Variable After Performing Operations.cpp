//  LINK -- https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        int x=0;
        for(auto it:operations)
        {
            if(it[1]=='+')
                x++;
            else
                x--;
        }
        return x;
    }
};
