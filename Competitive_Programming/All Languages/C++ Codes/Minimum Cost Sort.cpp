bool desc_compare(int a, int b);

int solve(vector<int>& nums) 
{
    vector<int> copy = nums;

    sort(copy.begin(), copy.end());

    int asc = 0;

    for (int i = 0; i < copy.size(); i++) 
    {
        asc += abs(nums[i] - copy[i]);
    }

    sort(copy.begin(), copy.end(), desc_compare);

    int dsc = 0;
    for (int i = 0; i < copy.size(); i++) 
    {
        dsc += abs(nums[i] - copy[i]);
    }

    return min(dsc, asc);
}
bool desc_compare(int a, int b) 
{
    return a > b;
}
