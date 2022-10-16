string solve(string s) 
{
    stringstream ss(s);
    string word;

    vector<string> v;
    int i;
    while (ss >> word) 
    {
        v.push_back(word);
    }

    string sf = "";
    for (i = v.size() - 1; i >= 0; --i) 
    {
        sf += v[i];
        if (i != 0) sf += " ";
    }

    return sf;
}
