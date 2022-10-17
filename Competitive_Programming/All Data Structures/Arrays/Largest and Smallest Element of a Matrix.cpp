#include<iostream>

using namespace std;

int main()
{
    int m,n,a[10][10],i,j,high,low;
    cout<<"Enter no. of rows :: ";
    cin>>m;
    cout<<"\nEnter no. of coloumns :: ";
    cin>>n;
    cout<<"\nEnter Elements to Matrix Below :: \n";

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;++j)
        {
            cout<<"\nEnter a["<<i<<"]["<<j<<"] Element :: ";
            cin>>a[i][j];
        }

    }

    cout<<"\nThe given matrix is :: \n\n";
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                cout<<"\t"<<a[i][j];
            }
            printf("\n\n");
        }

    high=a[0][0];
    low=a[0][0];

    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            if(a[i][j]>high)
                high=a[i][j];
            else
                if(a[i][j]<low)
                    low=a[i][j];
        }
    }

    cout<<"\nHighest Element :: "<<high<<"\n\nLowest Element :: "<<low<<"\n";

    return 0;
}