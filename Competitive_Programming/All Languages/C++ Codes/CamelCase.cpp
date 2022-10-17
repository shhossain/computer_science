string solve(vector<string>& words) {
    string ans = "";
    for (int i = 0; i < words.size(); i++) 
    {
        for (int j = 0; j < words[i].length(); j++) 
        {
            if (i == 0) 
            {
                ans += tolower(words[i][j]);
            } 
            else 
            {
                if (j == 0)
                    ans += toupper(words[i][j]);
                 else
                    ans += tolower(words[i][j]);
               
            }
        }
    }

    return ans;
