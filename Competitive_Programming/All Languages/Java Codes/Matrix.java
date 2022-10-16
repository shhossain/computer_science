/*Given a square matrix, calculate the absolute difference between the sums of its opposite rows and opposite columns.
   For example, the square matrix arr is shown below:
   1 2 3
   7 5 6 
   9 8 9
   The sum of the rows = 1+2+3+9+8+9= 32. The sum of the columns = 1+7+9+3+6+9= 35. Their absolute difference is |32-35|=3.
   
   Output:-
   int: the absolute difference
   
   Input Format:-
  - The first line consists t number of test cases
  - The second line contains a single integer, n, the number of rows and columns in the square matrix arr.
   Each of the next n lines describes a row, arr[i], and consists of n space-separated integers arr[i][j].
   
   Constraints:-
   - 1<=t<=45
   - 1 <= n <= 4
   - -100<=arr[i][j]<=100
   
   Sample Input:-
   1
   3
   11 2 4
   8 5 6 
   10 8 -12
   
   Sample Output:-
   4
   
   Explanation:-
   Sum across the rows = 11+2+4+10+8-12=23
   Sum across the columns = 11+8+10+4+6-12=27
   Absolute difference = |23-27|=4 */
import java.util.*;
class Row
{
    public static void main (String[] args)
    {
        Scanner ob= new Scanner(System.in);
        int t=ob.nextInt();
       
        while(t!=0)
        {
            int n=ob.nextInt();
            int sumr=0,sumc=0;
            int[][] arr = new int[4][4];
        	 for(int i=0;i<n;i++)
               {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=ob.nextInt();
            }
                }
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {   
                if(i==0 || i==n-1){
                    sumr += arr[i][j];
                }
                if(j == 0 || j == n-1){
                    sumc += arr[i][j];
                }
            }
           
        }
            int ans = Math.abs(sumr-sumc);
         System.out.println(ans);
         t--;
        
        }

    }
}