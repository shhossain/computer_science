vector<int> solve(vector<int>& a, vector<int>& b) 
{
    int p=0,q=0;
    vector<int> ans;
    while(p < a.size() && q < b.size())
    ans.push_back(((a[p] < b[q]) ? a[p++] : b[q++] ));

    while(p<a.size())
    ans.push_back(a[p++]);

    while(q<b.size())
    ans.push_back(b[q++]);

    return ans;

    
}
