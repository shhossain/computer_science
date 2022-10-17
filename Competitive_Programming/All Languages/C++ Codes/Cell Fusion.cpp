int solve(vector<int>& cells)
 {
    priority_queue<int> 

    pq(cells.begin(), cells.end());

    while (pq.size() > 1) 
    {
        int a = pq.top();
        pq.pop();
        
        int b = pq.top();
        pq.pop();

        if (a != b) 
        pq.push((a + b) / 3);
    }
    return pq.empty() ? -1 : pq.top();
}
