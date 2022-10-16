class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        res.push_back({1});
        if(numRows==1) 
            return res;
        res.push_back({1,1});
        if(numRows==2) 
            return res;
        for(int i=2;i<numRows;i++)
        {
            vector<int> temp(res[res.size()-1].size()+1);
                temp[0]=1;
                temp[temp.size()-1]=1;
            for(int j=1;j<temp.size()-1;j++) 
                temp[j]=res[res.size()-1][j-1]+res[res.size()-1][j];   
            res.push_back(temp);
        }
        return res;
    }
};
