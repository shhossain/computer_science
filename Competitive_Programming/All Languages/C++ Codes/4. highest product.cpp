/*
Given an array A, of N integers A.

Return the highest product possible by multiplying 3 numbers from the array.

NOTE: Solution will fit in a 32-bit signed integer.



Input Format:

The first and the only argument is an integer array A.

Output Format:

Return the highest possible product.

Constraints:

1 <= N <= 5e5

Example:

Input 1:
A = [1, 2, 3, 4]

Output 1:
24

Explanation 1:
2 * 3 * 4 = 24

Input 2:
A = [0, -1, 3, 100, 70, 50]                    

Output 2:
350000

Explanation 2:
70 * 50 * 100 = 350000

*/

class Solution{
  public:
    int mxmprdct(vector<int> &v)
    {
      int n= v.size();
      sort(v.begin(),v.end());                            // product of two neg no and highest +ve no or profuct of 
      return max(v[0]*v[1]*v[n-1], v[n-1]*v[n-2]*v[n-3]); // three highest num ... max b/w them is our ans
     }
 };
