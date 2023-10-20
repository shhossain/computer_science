# Rabin Karp 
 The following code snippet implements Rabin Karp ALgorithm in Python
 Rabin karp is kind of a string hashing implementation where there are also chances of spurious hits
 What this algorithm does is that it calculates hash values of strings in such a fashion that the chances of collision two strings having the same hash values are zero to none
One can understand it even clearly after learning about the concept of rolling hash

## Complete code : 
  ```
class RabinKarp:
    def __init__(self, text, pattern):
        self.text = text
        self.pattern = pattern
        self.text_length = len(text)
        self.pattern_length = len(pattern)
        self.prime = 101  # A prime number to use for hashing
        self.base = 256  # Number of possible characters in the input
    def calculate_hash(self, string, length):
        # Calculate the hash value for a given substring of specified length
        hash_value = 0
        for i in range(length):
            hash_value = (hash_value * self.base + ord(string[i])) % self.prime
        return hash_value
        

    def rabin_karp_search(self):
        if self.pattern_length > self.text_length:
            return []

        results = []
        pattern_hash = self.calculate_hash(self.pattern, self.pattern_length)
        text_hash = self.calculate_hash(self.text, self.pattern_length)

        for i in range(self.text_length - self.pattern_length + 1):
            if text_hash == pattern_hash and self.text[i:i+self.pattern_length] == self.pattern:
                results.append(i)

            if i < self.text_length - self.pattern_length:
                # Update the rolling hash for the next window
                text_hash = (self.base * (text_hash - ord(self.text[i]) * (self.base**(self.pattern_length - 1))) + ord(self.text[i + self.pattern_length])) % self.prime

                # Ensure the hash value is non-negative
                if text_hash < 0:
                    text_hash += self.prime

        return results


#Example usage
text = "ABABABCABABABCABABABC"
pattern = "ABAB"

rk = RabinKarp(text, pattern)
print("Text:", text)
print("Pattern:", pattern)
print("Pattern found at indices:", rk.rabin_karp_search())

```
# Explanation via example
```
Let's go through the example where we are searching for the pattern "ABAB" in the text "ABABABCABABABCABABABC" using the Rabin-Karp algorithm:

Initialization:

We create an instance of the RabinKarp class with the given text and pattern.
text = "ABABABCABABABCABABABC"
pattern = "ABAB"
text_length = 21
pattern_length = 4
prime = 101 (a chosen prime number for hashing)
base = 256 (number of possible characters)
Calculate Hash for the Pattern:

Using the calculate_hash method, we calculate the hash value for the pattern "ABAB" (length = 4).
The hash value for the pattern "ABAB" is computed using the rolling hash algorithm.
Iterate Over the Text:

We iterate over the text in a sliding window manner, considering substrings of length equal to the pattern length (4 in this case).
Calculate Hash for Current Text Window:

For each window, we calculate the hash value for the current substring.
Compare Hashes and Patterns:

We compare the hash value of the current substring with the hash value of the pattern.
If the hash values match, we further verify if the substring matches the pattern.
Update Rolling Hash:

We use the rolling hash formula to update the hash for the next window efficiently.
Collect Matched Indices:

We collect the indices where the pattern matches the substring in the text.
Print Results:

We print the text, pattern, and the indices where the pattern is found.
```
## Result
Text: ABABABCABABABCABABABC

Pattern: ABAB

Pattern found at indices: [0, 2, 7, 9, 14, 16]
