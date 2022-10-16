# MERGE SORT - Recursion method for sorting
# Here we break array from center recursively until we reach a base case and then 
#       we start merging them by comparing.

# For Example:                              [2 5 1 6 3 7]
# Breaks into:                          [2 5 1] ----- [6 3 7]
# Breaks into:                   [2 5] --- [1] ------- [6 3] --- [7]
# Breaks into:              [2] -- [5] --- [1] ------- [6] -- [3] ---- [7]
# Merges into:                   [2 5] --- [1] ------- [3 6] --- [7]
# Merges into:                          [1 2 5] ----- [3 6 7]
# Merges into:                              [1 2 3 5 6 7]

# Here it looks like we are doing this in exact n steps.. but as we get longer array this will take much more steps

# Here as you can see we are decreasing length of array again and again by half
# This can be calculated as "logn" and merging array costs us "n".
# So Time Complexity: merging logn broken arrays = n.logn

# Time Complexity: O(n.logn)

# ------------------------------------------------- CODE -------------------------------------------------
import random

def mergeSort(sortingList):
    if len(sortingList) <= 1:
        return sortingList

    mid = len(sortingList) // 2

    left = mergeSort(sortingList[:mid])
    right = mergeSort(sortingList[mid:])

    return merge(left, right)


def merge(leftList, rightList):

    rightIndex = leftIndex = 0
    mergedList = []
    
    while leftIndex < len(leftList) and rightIndex < len(rightList):

        if leftList[leftIndex] < rightList[rightIndex]:
            mergedList.append(leftList[leftIndex])
            leftIndex += 1
        else:
            mergedList.append(rightList[rightIndex])
            rightIndex += 1
    
    mergedList += leftList[leftIndex:]
    mergedList += rightList[rightIndex:]

    return mergedList

sortList = random.sample(range(11, 11111), 9999)
print(mergeSort(sortList))