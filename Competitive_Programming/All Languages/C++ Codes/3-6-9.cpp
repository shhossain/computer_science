vector<string> solve(int n) {
    vector<string>v;
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0)
        {
            v.push_back("clap");
        }
        else
        {
            string s=to_string(i);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='3' || s[i]=='6' || s[i]=='9')
            {
                flag=1;
                v.push_back("clap");
                break;
            }
        }
        if(flag==0)
        {
            v.push_back(s);
        }
        else
        {
            flag=0;
        }
        }
    }
    return v;
}
