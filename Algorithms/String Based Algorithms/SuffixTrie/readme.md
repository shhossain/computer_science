# Suffix Trie
It is a data structure that stores all the prefixes of a certain string after those have been pre computed we can match if a given pattern 
ever exists in the string or not by simply matching with the precomputed suffixes.

## Complete Code
```
class SuffixTrieNode:
    def __init__(self):
        self.children = [None] * 256
        self.indexes = []
    def insert_suffix(self, suffix, index):
        self.indexes.append(index)
        if suffix:
            c_index = ord(suffix[0])
            if not self.children[c_index]:
                self.children[c_index] = SuffixTrieNode()
            self.children[c_index].insert_suffix(suffix[1:], index + 1)   
    def search(self, pat):
        if not pat:
            return self.indexes
        c_index = ord(pat[0])
        if self.children[c_index]:
            return self.children[c_index].search(pat[1:])
        return None
class SuffixTrie:
    def __init__(self, txt):
        self.root = SuffixTrieNode()
        for i in range(len(txt)):
            self.root.insert_suffix(txt[i:], i)
    def search(self, pat):
        result = self.root.search(pat)
        if not result:
            print("Pattern not found")
        else:
            pat_len = len(pat)
            for i in result:
                print(f"Pattern found at position {i - pat_len}")
 
if __name__ == "__main__":
    # Let us build the suffix trie for text "geeksforgeeks.org"
    txt = "geeksforgeeks.org"
    st = SuffixTrie(txt)
    # Let us search for different patterns
    pat = "forgeeks"
    print(f"Search for '{pat}'")
    st.search(pat)
    print()
```
## Result
Search for 'forgeeks'
Pattern found at position 5
