/*****************************************************************
 * Problem : Given two sorted arrays nums1 and nums2, return the median of the two sorted arrays.
 * URL : https://leetcode.com/problems/median-of-two-sorted-arrays/
 * ***************************************************************/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double med=0;
        int m=nums1.size();
        int n=nums2.size();
        vector<int> newAr;
        if((m>=0 && m<=1000) && (n>=0 && n<=1000)){
            int i=0,j=0;
            while(true){
                if(i==m && j==n)
                    break;
                else if(i==m){
                    newAr.push_back(nums2[j]);
                    j++;
                }
                else if(j==n){
                   newAr.push_back(nums1[i]);
                   i++;
                }
                else{
                    if(nums1[i] < nums2[j]){
                        newAr.push_back(nums1[i]);
                        i++;
                    }
                    else{
                        newAr.push_back(nums2[j]);
                        j++;
                    }
                }
            }
            if(newAr.size()%2 == 0){
                med = (double)(newAr[newAr.size()/2] + newAr[(newAr.size()/2) - 1])/2;
            }
            else{
                med = newAr[newAr.size()/2];
            }
        }
        return med;   
    }
};