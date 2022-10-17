/*
There are N children standing in a line where each child is assigned a rating value. You are giving candies to these children subjected to the following requirements:

Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
What is the minimum candies you must give?

Problem Note

Input: An array A[] of N integers representing the ratings of each student

Example 1

Input: A[] = [1,2,2]
Output: 4
Explanation: You can allocate to the first, second and third child with 1, 2, 1 candies respectively. The third child gets 1 candy because it satisfies the above two conditions.
Example 2

Input: A[] = [1, 5, 2, 1]
Output: 7
Explanation: Candies given = [1, 3, 2, 1] 
*/

class solution{
     public:
      int mincandy(vector<int> a[])
      {
        int n=a.size();    //size of array represntng child rating
        if(n==0)
        return 0;
        vector<int> dp1(n,1),dp2(n,1);   // vector representing increasing and decreasing seq
        for(int i=0;i<n;i++)
        {
            if(a[i]>a[i-1])               // candies given from left to right
            dp1=dp1[i-1]+1;
        }
        for(int i=n-2;i>=0;i--)
        {
          if(a[i]>a[i+1])                //candies given from right to left
          dp2=dp2[i+1]+1;
        }
        int ans=0;
          
        for(int i=0;i<n;i++)               // max from both give right ans
          ans += max(dp1[i],dp2[i]);
          
        return ans;
      }
};
