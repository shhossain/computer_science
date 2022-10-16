class Solution {
public:
    int dp[11][2][99];
    int solve(set<int> &st, vector<int> &arr, int pos, bool strictly, int sum){
        if(pos==arr.size()){ 
            if(sum!=0) return 1;
            else return 0;
        }
        
        if(dp[pos][strictly][sum]!=-1) return dp[pos][strictly][sum];
        
        int cur=0;
        if(strictly){
            for(int i=0; i<=arr[pos]; ++i){
                if(i==0 and sum==0) cur += solve(st,arr,pos+1,false,sum); //leading zeros
                else if(i==arr[pos] and st.find(i)!=st.end()) cur+=solve(st,arr,pos+1,true,sum+i);
                else if(st.find(i)!=st.end()) cur+=solve(st,arr,pos+1,false,sum+i);
                else continue;
            }
        }else{
            for(int i=0; i<=9; ++i){
                if(i==0 and sum==0) cur += solve(st,arr,pos+1,false,sum); //leading zeros
                else if(st.find(i)!=st.end()) cur+=solve(st,arr,pos+1,false,sum+i);
                else continue;
            }
        }
        return dp[pos][strictly][sum]=cur;
    }
    
    
    
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        vector<int> arr;
        while(n){
            arr.push_back(n%10);
            n/=10;
        }
        reverse(arr.begin(),arr.end());
        
        set<int> st;
        for(auto &d : digits) st.insert(stoi(d));
        
        memset(dp,-1,sizeof(dp));
        return solve(st,arr,0,true,0);
    }
};
