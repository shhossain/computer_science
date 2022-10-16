#include<iostream>
using namespace std;

class Time
{
    public:
    int N;
    int A;
    int B;
    char *c;
    int sum;
    Time()
    {
        sum = 0;
    }
};

int main()
{
    int x;
    cin>>x;
    Time t[x];
    for(int i = 0;i<x;i++)
    {
        cin>>t[i].N>>t[i].A>>t[i].B;
        t[i].c = new char[t[i].N];
        cin>>t[i].c;
    }
    for(int i = 0;i<x;i++)
    {
        for(int j = 0;j<t[i].N;j++)
        {
            if(t[i].c[j] == '0')
            {
                t[i].sum+=t[i].A;
            }
            else if(t[i].c[j] == '1')
            {
                t[i].sum+=t[i].B;
            }
        }
        cout<<t[i].sum<<endl;
    }
    return 0;
}
