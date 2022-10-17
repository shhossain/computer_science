# BUBBLE SORT
# Compare two elements and sort them.. compare next two and sort them.. and so on

# For Example: 2 5 1 6 3 7        n = 6
# Step 1: Compare 2 & 5.. they are already sorted.. so continue.. ResultArray: 2 5 1 6 3 7
# Step 2: Compare 5 & 1.. they are not sorted.. so swap.. ResultArray: 2 1 5 6 3 7
# Step 3: Compare 5 & 6.. they are already sorted.. so continue.. ResultArray: 2 1 5 6 3 7
# Step 4: Compare 6 & 3.. they are not sorted.. so swap.. ResultArray: 2 1 5 3 6 7
# Step 5: Compare 6 & 7.. they are already sorted.. so continue.. ResultArray: 2 1 5 3 6 7

# After this many steps largest element has been placed at correct position
# Here we had to look for n elements.. for sorting 1 element
# Do this process again & again till the array is completely sorted

# So now one element is sorted now we have to look for (n-1) elements.. next (n-2) then (n-3).. until 1
# So the time complexity: n+(n-1)+(n-2)+...+2+1 = n*(n-1)/2 = n^2

# Time Complexity: O(n^2)

# ------------------------------------------------- CODE -------------------------------------------------
import random

def bubbleSort(sortingList):

    for i in range(len(sortingList)):
        for j in range(len(sortingList) - i - 1):
            if sortingList[j] > sortingList[j+1]:
                sortingList[j], sortingList[j+1] = sortingList[j+1], sortingList[j]

    return sortingList

sortList = random.sample(range(1, 11111), 9999)
print(bubbleSort(sortList))