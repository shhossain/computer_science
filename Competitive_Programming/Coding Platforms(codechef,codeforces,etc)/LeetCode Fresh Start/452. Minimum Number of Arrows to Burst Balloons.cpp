class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
     
        const int START=0, END=1;
     
        sort( points.begin(), points.end(), []( vector<int>& a, vector<int>& b){ return a[START] < b[START]; } );
        
        vector<long> prevBalloon = { LONG_MIN, LONG_MIN};
        
        int arrow = 0;
        
        for(auto balloon : points ){
            
            if( balloon[START] <= prevBalloon[END] ){
                
                
                prevBalloon[START] = max( prevBalloon[START], long(balloon[START]) );
                prevBalloon[END] = min( prevBalloon[END], long(balloon[END]) );
            
            }
            else{
                prevBalloon[START] = balloon[START];
                prevBalloon[END] = balloon[END];
            
                arrow += 1;
            }
        }
        
        return arrow;
    }
};
