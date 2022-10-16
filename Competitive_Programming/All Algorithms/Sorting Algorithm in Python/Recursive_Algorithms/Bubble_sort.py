def recursive_sort(array, n):
    if n == 1:
        return array
    comparisions = 0
    for i in range(n-1):
        if array[i]>array[i+1]:
            array[i], array[i+1] = array[i+1], array[i]
            comparisions += 1
    if comparisions == 0:
        return array
    return recursive_sort(array, n-1)
  
array = [64, 34, 25, 12, 22, 11, 90]

new_array = recursive_sort(array, len(array))
    
print("Sorted array :\n", new_array)