## Decode Ways

You have intercepted a secret message encoded as a string of numbers. The message is decoded via the following mapping:

```
"1" -> 'A'
"2" -> 'B'
...
"25" -> 'Y'
"26" -> 'Z'
```

However, while decoding the message, you realize that there are many different ways you can decode the message because some codes are contained in other codes ("2" and "5" vs "25").

For example, "11106" can be decoded into:

- "AAJF" with the grouping (1, 1, 10, 6)
- "KJF" with the grouping (11, 10, 6)
- The grouping (1, 11, 06) is invalid because "06" is not a valid code (only "6" is valid).

Note: there may be strings that are impossible to decode.

Given a string s containing only digits, return the number of ways to decode it. If the entire string cannot be decoded in any valid way, return 0.

The test cases are generated so that the answer fits in a 32-bit integer.

**Example 1:**
```
Input: s = "12"

Output: 2

Explanation:

"12" could be decoded as "AB" (1 2) or "L" (12).
```

**Example 2:**
```
Input: s = "226"

Output: 3

Explanation:

"226" could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).
```

**Example 3:**
```
Input: s = "06"

Output: 0

Explanation:

"06" cannot be mapped to "F" because of the leading zero ("6" is different from "06"). In this case, the string is not a valid encoding, so return 0.
```

**Constraints:**
- 1 <= s.length <= 100
- s contains only digits and may contain leading zero(s).

## Solution

```cpp
// C++ program to solve Decode Ways problem
class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();

        // If string begins with '0', no valid way to decode.
        if(s[0] - '0' == 0){
            return 0;
        }
        vector<int> dp(n+2 , 0);
        // Initialize dp[0] as 1 -- only one way to decode a string with length of 1.
        dp[0] =1;
    
        // Loop through the length of the string.
        for(int i = 0 ; i < n ; i++){
            // If s[i] is nonzero, it can be included as a single digit.
            if(s[i] != '0'){        
                dp[i+1] += dp[i];
            // If s[i] and s[i+1] form a valid two-digit number, add dp[i] to dp[i+2].
            if( i<n-1 && ((s[i] -'0')*10 + s[i+1] - '0') <=26 ){
              dp[i+2] += dp[i];
            }
        }
        }
        // Contains the number of ways to decode the string.
        return dp[n];
    }
};
```

## Company Tags

```
Amazon
Apple
Bloomberg
Commonvault
Google
Microsoft
Salesforce
TikTok
```

## Detailed Explanation

[Click Here](https://prepfortech.io/leetcode-solutions/decode-ways)
