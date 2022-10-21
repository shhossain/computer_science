## Largest number in K swaps

Given a dictionary of distinct words and an M x N board where every cell has one character. Find all possible words from the dictionary that can be formed by a sequence of adjacent characters on the board. We can move to any of 8 adjacent characters

**Example 1:**

```
Input:
N = 1
dictionary = {"CAT"}
R = 3, C = 3
board = {{C,A,P},{A,N,D},{T,I,E}}
Output:
CAT
Explanation:
C A P
A N D
T I E
Words we got is denoted using same color.
```

**Example 2:**

```
Input:
N = 4
dictionary = {"GEEKS","FOR","QUIZ","GO"}
R = 3, C = 3
board = {{G,I,Z},{U,E,K},{Q,S,E}}
Output:
GEEKS QUIZ
Explanation:
G I Z
U E K
Q S E
Words we got is denoted using same color.
```

## Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool search(vector<vector<char> >& board, const string& word, int index, int x,
            int y) {

    // If position of the cell is out of boundary of board or
    // letter in current cell does not match letter of word
    if (x < 0 || x == board[0].size() || y < 0 || y == board.size() ||
        word[index] != board[y][x])
        return false;

    // Base case : each character of the word has been matched
    if (index == word.length() - 1) return true;

    // mark the current cell as visited
    char cur = board[y][x];
    board[y][x] = '#';
    bool found = search(board, word, index + 1, x + 1, y)        // bottom
                 || search(board, word, index + 1, x - 1, y)     // top
                 || search(board, word, index + 1, x, y + 1)     // right
                 || search(board, word, index + 1, x, y - 1)     // left
                 || search(board, word, index + 1, x + 1, y + 1) // bottom right
                 || search(board, word, index + 1, x - 1, y + 1) // top right
                 || search(board, word, index + 1, x + 1, y - 1) // bottom left
                 || search(board, word, index + 1, x - 1, y - 1); // top left

    // revert the current cell back to its original state
    board[y][x] = cur;
    return found;
}

bool exist(vector<vector<char> >& board, string word) {
    if (board.size() == 0) return false;

    // Consider every character cell and look for all words
    // starting with this character
    for (int i = 0; i < board[0].size(); i++)
        for (int j = 0; j < board.size(); j++)
            if (search(board, word, 0, i, j)) return true;

    return false;
}

vector<string> wordBoggle(vector<vector<char> >& board,
                      vector<string>& dictionary) {
    vector<string> result;

    // Iterate through every word in the dictionary
    for (int i = 0; i < dictionary.size(); ++i) {
        string word = dictionary[i];
        if (exist(board, word)) result.push_back(word);
    }
    return result;
}
};
```

## Company Tags

```
Amazon
Google
MakeMyTrip
FaceBook
Nvdia
Microsoft
Directi
Yahoo
```

## Detailed Explanation

[Click Here](https://www.geeksforgeeks.org/boggle-find-possible-words-board-characters/)
