// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int convertFive(int n);
 
// Driver program to test above function
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	cout<<convertFive(n)<<endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int calculateAddedValue(int number)
{

    int result = 0;
 
    int decimalPlace = 1;
     
    if (number == 0) 
    {
        result += (5 * decimalPlace);
    }
 
    while (number > 0)
    {
        if (number % 10 == 0)
        {
            result += (5 * decimalPlace);
 
        }
         
        number /= 10;
        decimalPlace *= 10;
    }
    return result;
}
 
int convertFive(int number)
{
    return number += calculateAddedValue(number);
}
 
