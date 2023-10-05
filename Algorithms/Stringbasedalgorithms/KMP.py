
#The following is an idea to implement Knuth Morris Pratt Algorithm in Python

def calculate_lps(pattern):
    length = len(pattern)
    lps = [0] * length
    j = 0

    for i in range(1, length):
        while j > 0 and pattern[i] != pattern[j]:
            j = lps[j - 1]

        if pattern[i] == pattern[j]:
            j += 1

        lps[i] = j

    return lps

def kmp_search(text, pattern):
    if not text or not pattern:
        return []

    n = len(text)
    m = len(pattern)
    lps = calculate_lps(pattern)
    results = []
    j = 0

    for i in range(n):
        while j > 0 and text[i] != pattern[j]:
            j = lps[j - 1]

        if text[i] == pattern[j]:
            j += 1

        if j == m:
            results.append(i - m + 1)
            j = lps[j - 1]

    return results

# Example usage
text = "ABABABCABABABCABABABC"
pattern = "ABAB"

print("Text:", text)
print("Pattern:", pattern)
print("Pattern found at indices:", kmp_search(text, pattern))

#In this program, we first define a function calculate_lps to calculate the Longest Prefix Suffix (LPS) array for the pattern. 
# Then, we define a function kmp_search to perform the pattern search using the KMP algorithm. 
# Finally, we demonstrate how to use the KMP search with an example.
