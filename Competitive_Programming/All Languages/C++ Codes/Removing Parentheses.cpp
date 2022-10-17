int solve(string s) 
{
    int c = 0, o = 0;
    for (char d : s) 
    {
        if (d == '(')
            ++o;
        else {
            if (o == 0)
                ++c;
            else
                --o;
        }
    }
    return c + o;
}
