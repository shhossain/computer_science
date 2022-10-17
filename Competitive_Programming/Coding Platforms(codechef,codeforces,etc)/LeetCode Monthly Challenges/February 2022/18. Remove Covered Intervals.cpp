class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int> &a,const vector<int> &b){
            if(a[0]!=b[0]){
                return a[0]<b[0];
            }else {
                return a[1]>b[1];
            }
        });
        
        int num=0;
        bool check = 0;
        int l,r;
        int i=0;
        while(i<intervals.size()){
            if(check){
                if(intervals[i][0]>=l and intervals[i][1]<=r){
                    i++;
                }else{
                    check=0;
                }
            }
            else{
                num++;
                check=1;
                l=intervals[i][0],r=intervals[i][1];
                i++;
            }
        }
        return num;
    }
};
