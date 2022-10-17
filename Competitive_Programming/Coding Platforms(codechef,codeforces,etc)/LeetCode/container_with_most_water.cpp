class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0;
        int r=h.size()-1;
        int area=0;
        while(l<r)
        {
            int lh=h[l];
            int rh=h[r];
            int len=r-l;
            int height=min(lh,rh);
            area=max(area,height*len);
            if(lh<rh)l++;
            else
                r--;
            
        }
        return area;
    }
};
