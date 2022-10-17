#include <iostream>
#include "trie.h"
using namespace std;

int main()
{
    string words[] = {"hello", "he", "apple", "aple", "news"};
    Trie t;
    for (auto word : words)
    {
        t.insert(word);
    }
    cout << "Enter the value to be searched :";
    string key;
    cin >> key;
    cout << t.search(key) << endl;

    return 0;
}