class MinimumStack 
{
    public:
    stack<int> s;
    int mini;
    MinimumStack() 
    {
        mini = -1;
    }

    void append(int val) 
    {
        if (s.empty() || mini == -1) 
        {
            s.push(val);
            mini = val;
        } 
        else if (val < mini) 
        {
            s.push(2 * val - mini);
            mini = val;
        } 
        else 
        {
            s.push(val);
        }
    }

    int peek() 
    {
        if (s.top() < mini)
        {
            return mini;
        }
        return s.top();
    }

    int min() 
    {
        return mini;
    }

    int pop() 
    {
        if (s.top() < mini) 
        {
            int k = 2 * mini - s.top();
            s.pop();
            int ret = mini;
            mini = k;
            return ret;
        }
        int a = s.top();
        s.pop();
        return a;
    }
};
