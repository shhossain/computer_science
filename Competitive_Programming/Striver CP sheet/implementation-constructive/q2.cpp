#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    string in;
    cin>>in;
    int len = in.length();
    int val = in[0]-'0';
    if(val!=9 && val>4)
        in[0]=9-val+'0';
    int i;
    for(i=1;i<len;i++){
        val=in[i]-'0';
        if(val>4)
            in[i]=9-val+'0';
    }
    cout<<in;
    return 0;
}

// int x, a, i = 0, y = 0;
// cin >> x;
// while (x != 0)
// {
//     a = x % 10;
//     x /= 10;
//     if (a == 9 && x == 0)
//         ;
//     else if (a > 4)
//         a = 9 - a;
//     y = a * (int)pow(10, i++) + y;
// }
// cout << y << endl;