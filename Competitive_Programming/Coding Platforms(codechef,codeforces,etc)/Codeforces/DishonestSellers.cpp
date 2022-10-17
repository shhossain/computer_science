//Author: Sundar

//Problem Link : https://codeforces.com/problemset/problem/779/C

#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int  n, m;
    cin >> n >> m;
   
    int ans = 0, sum = 0;
    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        c[i] = a[i] - b[i];    //Storing the difference of the two prices because if it is -ve then previous price is lesser and will be bought before discoudn
        sum += b[i];
    }
    ans = sum;
    sort(c, c + n);

    for (int i = 0; i < m || c[i] < 0; i++)
     { //We will take all the -ve values and if i is still lesser than m then we would take lesser +ve as they would have the least decrement after discount
        ans += c[i];
    }

    cout << ans << endl;

    return 0;
}
