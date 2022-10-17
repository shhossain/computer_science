def SelectionSort(L):
   size = len(L)
   if size < 1:
      return(L)
   for i in range(size):
      min_pos = i  
      for j in range(i+1,size):
        if L[j] < L[min_pos]:
           min_pos = j
      (L[i],L[min_pos]) = (L[min_pos],L[i])
   return(L)

a=[]
a=[int(item) for item in input('Enter the list to be sorted: ').split()]

print('Before Sorting:')
print(a)
SelectionSort(a)
print('After Sorting:')
print(a)
