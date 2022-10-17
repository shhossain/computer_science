/*There are n students standing in a row for a drill. They are given Red(R), Blue(B) and Green(G) colored tshirts. The instructor wanted to remove some students from the row such that two neighboring students don't have the same color tshirts. Students in a row are considered neighboring if there are no other students between them.

Input variables:
int t: No. of test cases
String : string comprising the symbols (R,B,G) for students arranged in a row

Input Description:-
- First line of input consists of t, the number of test cases
- Next t lines each consists of:
String s, which represents the colors of the students. We'll consider the students in the row numbered from 1 to n from left to right. Then the i-th character s equals "R", if the i-th student has red tshirt, "G", if it's green and "B", if it's blue.

Output Description:-
Print the integer denoting the number of students to be removed from the row

Constraints:-
2<=no of students<=50

Sample Input:-
3
RRG
RRRRR
BRBG

Sample Output:-
1
4
0 */
#include <iostream>
#include <string>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin>>a;
        int count = 0;
        for (int j = 0; j < a.length() - 1; j++)
        {
            if (a.at(j) == a.at(j + 1))
            {
                count++;
            }
        }
        cout << count << endl;
        
    }
}