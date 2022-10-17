class HitCounter 
{
    queue<int> q;

    public:
    HitCounter() 
    {
    }

    void add(int timestamp) 
    {
        q.push(timestamp);
    }

    int count(int timestamp)
    {
        while (!q.empty() && q.front() < timestamp - 60) q.pop();
        return q.size();
    }
};
