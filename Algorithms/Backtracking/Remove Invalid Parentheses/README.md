# Remove Invalid Parentheses

## Problem Statement : 
An expression will be given which can contain open and close parentheses and optionally some characters. No other operator will be there in string. We need to remove minimum number of parentheses to make the input string valid. If more than one valid output are possible removing same number of parentheses then print all such output. 

## Examples
```
Input  : str = “()())()” -
Output : ()()() (())()
There are two possible solutions
"()()()" and "(())()"

Input  : str = (v)())()
Output : (v)()()  (v())()
```

## Explanation & steps of algorithm
As we need to generate all possible output we will backtrack among all states by removing one opening or closing bracket and check if they are valid if invalid then add the removed bracket back and go for next state. We will use BFS for moving through states, use of BFS will assure removal of minimal number of brackets because we traverse into states level by level and each level corresponds to one extra bracket removal. Other than this BFS involve no recursion so overhead of passing parameters is also saved. 
Below code has a method isValidString to check validity of string, it counts open and closed parenthesis at each index ignoring non-parenthesis character. If at any instant count of close parenthesis becomes more than open then we return false else we keep update the count variable. 

## C++ Code
```
/* C/C++ program to remove invalid parenthesis */
#include <bits/stdc++.h>
using namespace std;

// method checks if character is parenthesis(open
// or closed)
bool isParenthesis(char c)
{
	return ((c == '(') || (c == ')'));
}

// method returns true if string contains valid
// parenthesis
bool isValidString(string str)
{
	int cnt = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
			cnt++;
		else if (str[i] == ')')
			cnt--;
		if (cnt < 0)
			return false;
	}
	return (cnt == 0);
}

// method to remove invalid parenthesis
void removeInvalidParenthesis(string str)
{
	if (str.empty())
		return ;

	// visit set to ignore already visited string
	unordered_set<string> visit;

	// queue to maintain BFS
	queue<string> q;
	string temp;
	bool level;

	// pushing given string as starting node into queue
	q.push(str);
	visit.insert(str);
	while (!q.empty())
	{
		str = q.front(); q.pop();
		if (isValidString(str))
		{
			cout << str << endl;

			// If answer is found, make level true
			// so that valid string of only that level
			// are processed.
			level = true;
		}
		if (level)
			continue;
		for (int i = 0; i < str.length(); i++)
		{
			if (!isParenthesis(str[i]))
				continue;

			// Removing parenthesis from str and
			// pushing into queue,if not visited already
			temp = str.substr(0, i) + str.substr(i + 1);
			if (visit.find(temp) == visit.end())
			{
				q.push(temp);
				visit.insert(temp);
			}
		}
	}
}

// Driver code to check above methods
int main()
{
	string expression = "()())()";
	removeInvalidParenthesis(expression);

	expression = "()v)";
	removeInvalidParenthesis(expression);

	return 0;
}
```

## Output : 
```(())()
()()()
(v)
()v
```
