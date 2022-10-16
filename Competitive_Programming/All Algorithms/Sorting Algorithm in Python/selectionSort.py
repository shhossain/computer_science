# SELECTION SORT
# Find the smallest element from array, append it to resultArray and delete from initialArray
#       and do this until initialArray has no elements.

# For Example: --- MIN = 2 (start element) --- initialArray = [ 2, 5, 1, 6, 3, 7 ] --- resultArray = [ ]
# Step 1: Is 2 < MIN? NO:  MIN = 2
# Step 2: Is 5 < MIN? NO:  MIN = 2
# Step 3: Is 1 < MIN? YES: MIN = 1
# Step 4: Is 6 < MIN? NO:  MIN = 1
# Step 5: Is 3 < MIN? NO:  MIN = 1
# Step 6: Is 7 < MIN? NO:  MIN = 1

# Smallest Element is 1.. so append "MIN" to resultArray and Delete "MIN" from initialArray
# --- MIN = 1 --- initialArray = [ 2, 5, 6, 3, 7 ] --- resultArray = [ 1 ]

# Now we have got 1 element in resultArray and length of our initialArray has decreased by 1.
# Next we have to do same process until no elements are left in initialArray
# So the time complexity: n+(n-1)+(n-2)+...+2+1 = n*(n-1)/2 = n^2

# Time Complexity: O(n^2)

# ------------------------------------------------- CODE -------------------------------------------------
import random

def selectionSort(sortingList):

    sortedList = []

    for x in range(len(sortingList)):

        min = sortingList[0]

        for i in sortingList:
            if i < min:
                min = i

        sortedList.append(min)
        sortingList.remove(min)

    return sortedList

sortList = random.sample(range(11, 11111), 9999)
print(selectionSort(sortList))