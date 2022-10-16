class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return 0;
        unordered_map<int,vector<int>> mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]].push_back(i);
        }
        queue<int> q;
        int steps = 0;
        q.push(0);
        while(!q.empty()){
            steps++;
            int size = q.size();
            while(size--){
                int a = q.front();
                q.pop();
                if(a-1 >= 0 && mp.find(arr[a-1])!=mp.end()) q.push(a-1);
                if(a+1 < n && mp.find(arr[a+1])!=mp.end()){
                    if(a+1 == n-1) return steps;
                    q.push(a+1);
                }
                if(mp.find(arr[a])!=mp.end()){
                    for(auto k : mp[arr[a]])
                        if(k!=a){
                            if(k == n-1) return steps;
                            q.push(k);
                        }
                            
                }
                mp.erase(arr[a]);
            }
        }
        return steps;
    }
};
