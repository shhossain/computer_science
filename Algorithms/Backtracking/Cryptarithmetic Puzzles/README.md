##  Cryptarithmetic Puzzles

### Problem Statement
The goal here is to assign each letter a digit from 0 to 9 so that the arithmetic works out correctly. The rules are that all occurrences of a letter must be assigned the same digit, and no digit can be assigned to more than one letter.

First, create a list of all the characters that need assigning to pass to Solve
If all characters are assigned, return true if puzzle is solved, false otherwise
Otherwise, consider the first unassigned character


### Steps of solution

for (every possible choice among the digits not in use)
make that choice and then recursively try to assign the rest of the characters
if recursion successful, return true
if !successful, unmake assignment and try another digit

If all digits have been tried and nothing worked, return false to trigger backtracking

### Code Solution : 

```
bool ExhaustiveSolve(puzzleT puzzle, string lettersToAssign)
{
    if (lettersToAssign.empty()) // no more choices to make
        return PuzzleSolved(puzzle); // checks arithmetic to see if works
    for (int digit = 0; digit <= 9; digit++)   // try all digits
    {
        if (AssignLetterToDigit(lettersToAssign[0], digit))
        {
            if (ExhaustiveSolve(puzzle, lettersToAssign.substr(1)))
                return true;
            UnassignLetterFromDigit(lettersToAssign[0], digit);
        }
    }
    return false;  // nothing worked, need to backtrack
}

```


### Final verdict : 

The algorithm above actually has a lot in common with the permutations algorithm, it pretty much just creates all arrangements of the mapping from characters to digits and tries each until one works or all have been successfully tried. For a large puzzle, this could take a while.
A smarter algorithm could take into account the structure of the puzzle and avoid going down dead-end paths. For example, if we assign the characters starting from the one’s place and moving to the left, at each stage, we can verify the correctness of what we have so far before we continue onwards. This definitely complicates the code but leads to a tremendous improvement in efficiency, making it much more feasible to solve large puzzles.

Below pseudocode, in this case, has more special cases, but the same general design
