class Solution {
public:
    bool search(vector<int> v,int i,int j,int ele){
        for(int p=i+1;p<j;p++){
            if(v[p]==ele) return true;
        }
        return false;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        int n=nums.size();
        if(n==0) return {};

        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=n-1;j>=(i+2);j--){
                if(j<(n-1)&& nums[j]==nums[j+1]) continue;
                int ele=(nums[i]+nums[j])*(-1);
                if(ele>nums[j]) break;
                if(binary_search(nums.begin()+i+1,nums.begin()+j,ele)) {
                    v.push_back({nums[i],ele,nums[j]});
                }
            }
        }
        return v;
    }
};