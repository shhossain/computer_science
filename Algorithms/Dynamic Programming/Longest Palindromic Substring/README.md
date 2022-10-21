## Longest Palindromic Substring

## Problem Statement

Given a string, we have to find the longest palindromic substring(substring is a sequence of characters that is contiguous within a string. For example, the string “Competitive”, "ive" , “Comp”, “pet”,... etc are substrings, but not “tv” as both these characters are not continuous. Whereas palindrome is a word that reads the same backward as forwards. Examples include abba, zzzz, xyyx.

_Approach_

1. Maintain a boolean table[n][n] that is filled in bottom up manner.
2. The value of table[i][j] is true, if the substring is palindrome, otherwise false.
3. To calculate table[i][j], check the value of table[i+1][j-1], if the value is true and str[i] is same as str[j], then we make table[i][j] true.
4. Otherwise, the value of table[i][j] is made false.
5. We have to fill table previously for substring of length = 1 and length =2 because as we are finding , if table[i+1][j-1] is true or false , so in case of (i) length == 1 , lets say i=2 , j=2 and i+1,j-1 doesn’t lies between [i , j] (ii) length == 2 ,lets say i=2 , j=3 and i+1,j-1 again doesn’t lies between [i , j].

_Python Code_

```python

class Solution:
    def longestPalindrome(self, s: str) -> str:

        n = len(s)

        if n == 1:
            return s

        def expandOutwards(start, end):

            i = start
            k = end

            if s[i] != s[k]:
                return ""

            while(i-1 >= 0 and k+1 < n and s[i-1] == s[k+1]):
                i-=1
                k+=1

            return s[i:k+1]

        pal1 = ""
        pal2 = ""
        longPal = ""

        for i in range(0, n-1):

            pal1 = expandOutwards(i, i)
            pal2 = expandOutwards(i, i+1)
            temp = pal1 if len(pal1) > len(pal2) else pal2

            if len(temp) > len(longPal):
                longPal = temp

        return longPal
```

## Time Complexity

The worst case time complexity is O(n^2). As we may need to check all values in a string everytime. You could probably visual this with an input like "aaaaaaaaa", where all values are always equal, so it checks everything. Notice that our program needs to check a string n^2 that can be easily confirmed as a palindrome, possible room for improvement.

## Space Complexity

This one can be tricky, but our space complexity is O(n) worst case. Pay close attention to the variable temp, i and k. They are all allocated within a local space that iterates for at most n times. Because each iteration needs a new area in memory, the space each requires directly correlates to the size of the input. In reality the space complexity is closer to 5n, but we remove the constant and just say n.
