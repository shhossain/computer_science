# The following code snippet implements Rabin Karp ALgorithm in Python
# Rabin karp is kind of a string hashing implementation where there are also chances of spurious hits

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


# Example usage
text = "ABABABCABABABCABABABC"
pattern = "ABAB"

rk = RabinKarp(text, pattern)
print("Text:", text)
print("Pattern:", pattern)
print("Pattern found at indices:", rk.rabin_karp_search())
