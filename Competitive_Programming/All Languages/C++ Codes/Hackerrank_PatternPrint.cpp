//Hacker rank pattern printing problem
#include <iostream>
using namespace std;

/*(Enter any number you wish)
if you enter 3 as input then output :
3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
*/
int main()
{
int n;
cout<<"Enter Number :";//enter number for printing pattern
cin>>n;
int size=2*n-1;
int start=0;
int end=size-1;
int a[size][size];
while(n!=0)
{
    for(int i=start;i<=end;i++)
    {
        for(int j=start;j<=end;j++)
        {
            if(i==start || j==start || i==end || j==end)
            {
                a[i][j]=n;
            }
        }
    }
    ++start;
    end--;
    --n;
}
 for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
               cout<<a[i][j]<<" ";
        }
        printf("\n");
    }
}

