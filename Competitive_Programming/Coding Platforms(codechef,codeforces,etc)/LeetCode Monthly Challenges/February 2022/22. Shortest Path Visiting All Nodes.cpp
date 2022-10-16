class Solution {
public:
   int shortestPathLength(vector<vector<int>>&mat) 
    {
        int n=mat.size();
        queue<pair<int,int>>q;
        int end=(1<<n)-1;
      
        for(int i=0;i<n;i++)
        {
            q.push({i,1<<i});
        }
        int level=0;
        unordered_set<string>vis;
        while(q.size())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                auto temp=q.front();
                   q.pop();
                int node=temp.first;
                int lt=temp.second;
                if(end==lt)
                {
                    return level;
                }
                string key="##"+to_string(node)+"##"+to_string(lt);
                if(vis.find(key)!=vis.end())
                {
                    continue;
                }
                vis.insert(key);
                for(auto it:mat[node])
                {
                    q.push({it,lt|(1<<it)});
                }
            }
            
            level++;
        }
        return 0;
    }
};
