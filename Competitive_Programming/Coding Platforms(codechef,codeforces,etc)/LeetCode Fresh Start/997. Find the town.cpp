class Solution {
public:
        int findJudge(int n, vector<vector<int>>& trust) {
		if(trust.empty() && n==1)
            return 1;
		
		vector<int> out(n+1,0);
		vector<int> in(n+1,0);
        
		for(auto edge : trust){
            out[edge[0]]++;
            in[edge[1]]++;
        }
        
		for(int i=0;i<=n;i++){
            if(out[i]==0 && in[i]==n-1)
                return i;
        }
	
        return -1;
    }

};
