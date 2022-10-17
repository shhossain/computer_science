class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> box(9);

        for(int i=0 ; i<9 ; i ++){
            for(int j=0 ; j<9 ; j++){
                char val=b[i][j];
                if(val=='.')continue;
                if(row[i].find(val)!=row[i].end())return false;
                row[i].insert(val);
                if(col[j].find(val)!=col[j].end())return false;
                col[j].insert(val);
                int id=(i/3)*3+j/3;
                if(box[id].find(val)!=box[id].end())return false;
                box[id].insert(val);
            }
        }
        return true;
    }
};
