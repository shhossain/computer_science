def insertionSortRecursive(array,n):
	if n == 1:
		return
	insertionSortRecursive(array,n-1)
	last = array[n-1]
	j = n-2
	while (j>=0 and array[j]>last):
		array[j+1] = array[j]
		j = j-1
	array[j+1]=last
	
array = [12,11,13,5,6]
insertionSortRecursive(arr, len(array))
print(array)