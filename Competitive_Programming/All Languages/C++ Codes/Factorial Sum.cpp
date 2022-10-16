bool solve(int n) 
{
    if (n == 1) 
    return true;

    vector<long long int> fact;

    long long int p = 1;
    int i = 1;

    while (p < n) 
    {
        p *= i;
        i++;
        fact.push_back(p);
    }
    int size = fact.size() - 1;

    while (size >= 0 and n) 
    {
        if (n >= fact[size]) n -= fact[size];

        size--;
    
    }
    return n == 0;
}
