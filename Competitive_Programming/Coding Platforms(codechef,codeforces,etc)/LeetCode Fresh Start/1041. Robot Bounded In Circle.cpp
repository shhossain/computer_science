class Solution {
public:
    bool isRobotBounded(string I) {
        int d[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        int di = 0, x = 0, y = 0;
        
        for (int i = 0; i < I.size(); i ++) {
            switch (I[i])
            {
                case 'L': 
                    di = (di + 1) % 4; 
                    break;
                case 'R': 
                    di = (di + 3) % 4;
                    break;
                default:
                    x = x + d[di][0];
                    y = y + d[di][1];
            }
        }
        if (x == 0 && y == 0 || di > 0)
            return true;
        return false;
    }
};
