class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int lenS1 = s1.size(), lenS2 = s2.size();
        if (lenS1 > lenS2) return false;

        vector<int> countS1(26, 0), countS2(26, 0);
        for (int i = 0; i < lenS1; ++i) {
            countS1[s1[i] - 'a']++;
            countS2[s2[i] - 'a']++;
        }
        if (countS1 == countS2) return true;
        for (int i = lenS1; i < lenS2; ++i) {
            countS2[s2[i] - 'a']++;
            countS2[s2[i - lenS1] - 'a']--;
            if (countS1 == countS2) return true;
        }
        return false;
    }
};
