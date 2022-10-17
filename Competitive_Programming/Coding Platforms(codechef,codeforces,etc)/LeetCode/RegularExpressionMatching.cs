using System.Collections.Generic;
using System.Linq;
using System;
using System.Text;

namespace RegularExpressionMatching
{
   /// <summary>
   /// Leetcode problem # 10. Regular Expression Matching (HARD)
   /// https://leetcode.com/problems/regular-expression-matching/
   /// </summary>
   public class Solution
   {
      //Straightforward extension of the solution for problem #44. (Wildcard Matching)
      //more on: https://github.com/pakosel/leetcode-solutions/tree/master/44.%20Wildcard%20Matching
      public bool IsMatch(string s, string p)
      {
         int sLen = s.Length;
         int pLen = p.Length;
         bool[,] memo = new bool[pLen + 1, sLen + 1];

         memo[0, 0] = true;
         for (int i = 1; i <= pLen; i++)
            memo[i, 0] = p[i - 1] == '*' && i > 1 ? memo[i - 2, 0] : false;

         for (int i = 1; i <= pLen; i++)
            for (int j = 1; j <= sLen; j++)
            {
               if (s[j - 1] == p[i - 1] || p[i - 1] == '.')
                  memo[i, j] = memo[i - 1, j - 1];
               else if (p[i - 1] == '*' && i > 1)
                  memo[i, j] = p[i - 2] == '.' || p[i - 2] == s[j - 1] ? memo[i - 1, j] || memo[i, j - 1] || memo[i - 2, j] : memo[i - 2, j];
            }

         return memo[pLen, sLen];
      }
   }
}
