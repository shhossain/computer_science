bool solve(vector<int>& nums) 
{

   unordered_set<int> s;

    for (int i : nums) 
    {
        if (s.find(i) != s.end()) 
            return true;

        if (i / 3.0 == i / 3) 
            s.insert(i / 3);

        s.insert(i * 3);
    }
    
    return false;  
}
