int solve(string s) 
{
    int curr = 0, ret = 0;

    for (auto &ch : s) 
    {
        if (isdigit(ch)) 
        {
            curr = curr * 10 + ch - '0';
        } 
        else 
        {
            ret += curr;
            curr = 0;
        }
    }
    ret += curr;
    return ret;
}
