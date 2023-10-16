# Naive Searching Algorithm
Naive searching algorithm is one of the simplest algorithms to find if a given pattern is present in a string or not. The concept is pretty simple and we dont have to precompute anything, the drawback being it is very costly in terms of time complexity.

### Sample Code
```
def naive_search(text, pattern):
    """
    Naive string searching algorithm.

    Parameters:
    text (str): The input string to search within.
    pattern (str): The pattern to search for.

    Returns:
    list: A list of indices where the pattern is found in the text.
    """
    indices = []
    text_length = len(text)
    pattern_length = len(pattern)

    for i in range(text_length - pattern_length + 1):
        match = True
        for j in range(pattern_length):
            if text[i + j] != pattern[j]:
                match = False
                break

        if match:
            indices.append(i)

    return indices

# Example usage
text = "ababcababcabc"
pattern = "abc"
result = naive_search(text, pattern)
print("Pattern found at indices:", result)

```

### Result

Pattern found at indices: [2, 7, 10]
