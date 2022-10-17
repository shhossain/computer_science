int solve(vector<string>& words, string letters) 
{
    map<char, int> mp, temp;
    int ans = INT_MIN;

    for (int i = 0; i < letters.size(); i++) 
    {
        mp[letters[i]]++;
    }

    for (string s : words) 
    {
        temp = mp;
        int count = 0;

        for (char c : s) 
        {
            if (temp.find(c) != temp.end() && temp[c] > 0) 
            {
                temp[c]--;
                count++;
            }
        }

        if (count == s.length()) 
        {
            ans = max(ans, count);
        }
    }
    if (ans != INT_MIN) 
    {
        return ans;
    }
    return 0;
}
