int solve(string s, string t) 
{
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
    }
    int ans = 0;
    for (int i = 0; i < t.length(); i++) 
    {
        if (count[t[i] - 'a']) 
        {
            count[t[i] - 'a']--;
        } 
      else 
      {
            ++ans;
      }
    }
    return ans;
}
