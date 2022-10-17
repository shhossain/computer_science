class Solution {
public:
    int getHours(vector<int>& piles, int m){
        int hours=0;
        for(int i=0; i<piles.size(); i++){
            hours += ceil(1.0*piles[i]/m);
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxVal = piles[0], n = piles.size();
        for(auto const& c: piles) maxVal = max(maxVal, c);
        if(h==n) return maxVal;
        
        int l=1, r=maxVal, ans=maxVal;
        while(l<=r){
            int mid = (l + r) / 2;
            int hours = getHours(piles, mid);
            if(hours<=h){
                ans = min(ans, mid);
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
};
