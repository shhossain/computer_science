class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        int minValue=INT_MAX;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]>=nums[start])
            {
 minValue=min(minValue,nums[start]);
                start=mid+1;
            }
            else 
            {
                minValue=min(minValue,nums[mid]);
                end=mid;
            }
                
        }
        return minValue;
    }
};