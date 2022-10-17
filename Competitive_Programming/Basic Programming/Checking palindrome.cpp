#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number,n,i=0,j=0;
    cout<<"Give a number:";
    cin>>number;
    int digits=0;
    n=number;
    while(n!=0)
    {
        n/=10;
        digits++;
    }
    int arr[digits];
    n=number;

    while(n!=0)
    {
        arr[i]=n%10;
        n/=10;
        i++;
    }
    i=0;
    j=digits-1;
    bool isPalindrome=true;
    while(i<digits/2)
    {
        if(arr[i]!=arr[j])
        {
            isPalindrome=false;
        }

        i++;
        j--;
    }
    if(isPalindrome)
    {
        cout<<"Palindrome Number"<<endl;
    }
    else
    {
        cout<<"Not Palindrome Number"<<endl;
    }



}
