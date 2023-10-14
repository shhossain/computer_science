# String Based Algorithms

String-based algorithms are computational techniques used to perform various operations on strings, such as searching for a substring, pattern matching, and text processing. These algorithms are designed to process and analyze strings efficiently, and their performance is often measured in terms of time complexity, which indicates how the algorithm's runtime scales with the size of the input string.

1. **Naive String Search:**
   - Time Complexity: O(m * n), where m is the length of the pattern and n is the length of the text.
   - Description: The naive string search algorithm compares each character of the pattern with each character of the text, sliding the pattern one position to the right until a match is found or the end of the text is reached. It has a quadratic time complexity.

2. [**Knuth–Morris–Pratt Algorithm (KMP):**](KMP/readme.md)
   - Time Complexity: O(m + n), where m is the length of the pattern and n is the length of the text.
   - Description: The KMP algorithm is used for efficient string matching by avoiding unnecessary character comparisons through the use of a prefix function. It preprocesses the pattern to find a partial match between the pattern and itself and utilizes this information to skip unnecessary comparisons during text matching.

3. **Boyer-Moore Algorithm:**
   - Time Complexity: Best-case O(n/m), Worst-case O(m * n), where m is the length of the pattern and n is the length of the text.
   - Description: The Boyer-Moore algorithm is a popular string-searching algorithm that uses two heuristics to skip large portions of the text during searching. It preprocesses the pattern and utilizes a "bad character" and "good suffix" rule to determine how much the pattern can be shifted during the search.

4. **String Hashing:**
   - Time Complexity: O(n + m), where n is the length of the text and m is the length of the pattern.
   - Description: String hashing algorithms, such as Rabin-Karp, use hash functions to quickly compare patterns and substrings of a text. The Rabin-Karp algorithm, in particular, is based on hashing and is useful for pattern matching. It calculates hash values for the pattern and text substrings, allowing for fast comparisons. [Learn more about Rabin-Karp](RabinKarp/readme.md)

5. **Suffix Trie:**
   - Time Complexity: O(m), where m is the length of the pattern.
   - Description: A suffix trie is a data structure used for advanced string matching and text processing. It preprocesses the text by building a trie containing all the suffixes of the text. Pattern matching can then be done efficiently by traversing the trie based on the pattern. Suffix tries can have high space complexity but offer fast pattern matching.
