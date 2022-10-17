class RunLengthDecodedIterator {
    private:
    queue <pair<long long,string>>q;
    public:

    RunLengthDecodedIterator(string s)  {
     stringstream ss(s);
     long long cnt;
     char c;

     while(ss >> cnt && ss >> c)
     q.push({cnt,string(1,c)});

    }

    string next() {
        auto& curr = q.front();
        --curr.first;
        if(!curr.first)
        q.pop();
        return curr.second;
    }

    bool hasnext() {
        return !q.empty();
    }
};
