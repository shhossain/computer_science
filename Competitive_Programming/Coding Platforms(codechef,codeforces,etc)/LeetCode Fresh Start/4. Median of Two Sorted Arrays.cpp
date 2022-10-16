class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int i = 0;
        int j = 0;
        int count = 0;
        int target = (nums1.size() + nums2.size());
        int prev = 0;
        
        while(true) {
            
            int n = 0;
            
            int x = INT_MAX;
            int y = INT_MAX;
            
            if(i < nums1.size()) x = nums1[i];
            if(j < nums2.size()) y = nums2[j];
            
            if(x == INT_MAX && y == INT_MAX) break;
            
            if(x < y) {
                n = x;
                i++;
            }
            else {
                n = y;
                j++;
            }
            
            if(count == target / 2) {
                if(target % 2 != 0) {
                    return n;
                }
                else {
                    return (double)(prev + n) / 2;
                }
            }
            prev = n;
            count++;
        }
        return 0;
    }
};