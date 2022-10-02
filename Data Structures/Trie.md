# Trie

Trie data structure is defined as a Tree based data structure that is used for storing some collection of strings and performing efficient search operations on them. The word Trie is derived from reTRIEval, which means finding something or obtaining it.

Trie follows some property that If two strings have a common prefix then they will have the same ancestor in the trie. A trie can be used to sort a collection of strings alphabetically as well as search whether a string with a given prefix is present in the trie or not.

# Need for Trie Data Structure?

A Trie data structure is used for storing and retrieval of data and the same operations could be done using another data structure which is Hash Table but Trie can perform these operations more efficiently than a Hash Table.  
Moreover, Trie has its own advantage over the Hash table. A Trie data structure can be used for prefix-based searching whereas a Hash table can’t be used in the same way.

# Advantages of Trie Data Structure over a Hash Table:

The A trie data structure has the following advantages over a hash table:

- We can efficiently do prefix search (or auto-complete) with Trie.
- We can easily print all words in alphabetical order which is not easily possible with hashing.
- There is no overhead of Hash functions in a Trie data structure.
- Searching for a String even in the large collection of strings in a Trie data structure can be done in O(L) Time complexity, Where L is - the number of words in the query string. This searching time could be even less than O(L) if the query string does not exist in the trie.

# Properties of a Trie Data Structure

Now we already know that Trie has a tree-like structure. So, it is very important to know its properties.
Below are some important properties of the Trie data structure:

- There is one root node in each Trie.
- Each node of a Trie represents a string and each edge represents a character.
- Every node consists of hashmaps or an array of pointers, with each index representing a character and a flag to indicate if any string ends at the current node.
- Trie data structure can contain any number of characters including alphabets, numbers, and special characters. But for this article, we will discuss strings with characters a-z. Therefore, only 26 pointers need for every node, where the 0th index represents ‘a’ and the 25th index represents ‘z’ characters.
- Each path from the root to any node represents a word or string.
