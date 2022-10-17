int solve(vector<int>& tasks, vector<int>& people)
{
    sort(tasks.begin(), tasks.end());
    sort(people.begin(), people.end());

    int n1 = people.size();
    int n2 = tasks.size();

    if (n2 == 0) 
        return 0;

    int i = 0,j=0;
 
    while (i < n2 && j < n1) 
    {
        if (tasks[i] <= people[j])
        {
            i++;
            j++;
        } else
            j++;
    }
    return i;
}
