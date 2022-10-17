class Solution {
public:
   bool detectCapitalUse(string word) {
        int capitalCount = 0;
        for(char ch : word){
            if(ch >= 'A' and ch <= 'Z') capitalCount++;
        }
        
        if(capitalCount == 0 || capitalCount == word.length() || (capitalCount == 1 and word[0] >= 'A' and word[0] <= 'Z')) return true;
        
        return false;

    }
};
