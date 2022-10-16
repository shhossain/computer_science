class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size(),maxi = 0;
        int index = find(flowerbed.begin(),flowerbed.end(),1) - flowerbed.begin();
        if(index==m){
            maxi = (m+1)/2;
            return n<=maxi;
        }
        int cnt = 1;
        maxi = index/2;
        for(int i=index+1;i<m;i++){
            if(flowerbed[i]==flowerbed[i-1])
                cnt++;
            else{
                if(!flowerbed[i-1])
                    maxi += (cnt-1)/2;
                cnt = 1;
            }
        }
        if(!flowerbed.back())
            maxi += cnt/2;
        return n<=maxi;
    }
};
