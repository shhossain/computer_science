class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
         vector<pair<int,vector<int>>> vp;
        
          for(int i =0; i<points.size(); i++){
              int x = points[i][0];
              int y = points[i][1];
              
              vp.push_back({x*x + y*y,points[i]});
          }
         sort(vp.begin(), vp.end());
          vector<vector<int>> ans;
         
          int i = 0;
          while(k--){
              ans.push_back(vp[i].second);
             i++;
          }
        return ans;
    }
};
