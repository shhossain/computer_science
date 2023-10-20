# Knuth-Morris-Pratt(KMP)
The Knuth-Morris-Pratt (KMP) algorithm is a pattern-matching algorithm that efficiently finds occurrences of a given pattern within a longer text. 
It uses a precomputed array called the Longest Prefix Suffix (LPS) to avoid unnecessary comparisons

 
## Complete Code:
 ```   
  def calculate_lps(pattern): #Calculates the Longest Prefix Suffix(LPS) for the given pattern
     #Args:
     #pattern(str):The pattern string 
     #list:LPS array for the pattern
    length=len(pattern)
    lps = [0] * length  # Initialize the LPS array with zeros
    j = 0

    for i in range(1, length):
        while j > 0 and pattern[i] != pattern[j]: # Update j based on previous values of j and the current character in the pattern.
            j = lps[j - 1] # Move j to the previous prefix suffix.

        if pattern[i] == pattern[j]:
            j += 1 # Increment j if there is a match for the current character.

        lps[i] = j  # Assign the length of the longest prefix suffix for the current position.

    return lps

      #Args:
        #text (str): The text to search in.
        #pattern (str): The pattern to search for.
        
        #Search for occurrences of the pattern in the given text using the Knuth-Morris-Pratt algorithm.
def kmp_search(text, pattern):
    if not text or not pattern:
        return []

    n = len(text)
    m = len(pattern)
    lps = calculate_lps(pattern)
    results = []
    j = 0 # Initialize j, the length of the matched prefix suffix.

    for i in range(n):
        # Update j based on previous values of j and the current characters in text and pattern.
        while j > 0 and text[i] != pattern[j]:
            j = lps[j - 1] # Move j to the previous prefix suffix.

        if text[i] == pattern[j]:
            j += 1 # Increment j if there is a match for the current character.

        if j == m:
             # Pattern found at index i - m + 1
            results.append(i - m + 1)
            j = lps[j - 1] # Move j to the previous prefix suffix.

    return results


# Example usage
if __name__ == "__main__":
    text = "ABABABCABABABCABABABC"
    pattern = "ABAB"

    print("Text:", text)
    print("Pattern:", pattern)
    print("Occurrences:", kmp_search(text, pattern))

 ```
# Explaining via an example
```
 lets explain what the following code does through an example
 assume you have to search a string assume ABAB in the text ABABABCABABABCABABABC 
 A few assumptions M is the length of the pattern and N is the length of the pattern
 Step 1 Calculate LPS Array (Longest Prefix Suffix):
For pattern "ABAB":
LPS: [0, 0, 1, 2]
The LPS array tells us the length of the longest proper prefix that is also a suffix for each position in the pattern.

Step 2 KMP Search:
Start comparing the pattern with the text from left to right, keeping track of a pointer j for the pattern.

 At index 0:

 Compare pattern[0] (A) with text[0] (A). Match.
 Move to the next character in both pattern and text.
 At index 1:

 Compare pattern[1] (B) with text[1] (B). Match.
 Move to the next character in both pattern and text.
 At index 2:

 Compare pattern[2] (A) with text[2] (A). Match.
 Move to the next character in both pattern and text.
 At index 3:

 Compare pattern[3] (B) with text[3] (B). Match.
 Pattern fully matched at index 3. Add the starting index (3 - length of pattern + 1 = 0) to the result.
 Continue searching for other occurrences in a similar manner.
```

# Result:
Text: ABABABCABABABCABABABC

Pattern: ABAB

Occurrences: [0, 2, 7, 9, 14, 16]
