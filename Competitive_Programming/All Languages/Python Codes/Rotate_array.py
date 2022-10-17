from sys import stdin
def sumOfTwoArrays(arr1, n, arr2, m, output) :
    i = n - 1
    j = m - 1
    carry = 0
    k = max(n, m)
    #k is the current index output array 
    while i >= 0 and j >= 0 :
        SUM = arr1[i] + arr2[j] + carry 
        output[k] = SUM % 10
        carry = SUM // 10 
        i -= 1 
        j -= 1
        k -= 1 
    while i >= 0 :
        SUM = arr1[i] + carry 
        output[k] = SUM % 10 
        carry = SUM // 10 
        i -= 1 
        k -= 1 
    while j >= 0 : 
        SUM = arr2[j] + carry 
        output[k] = SUM % 10 
        carry = SUM // 10 
        j -= 1
        k -= 1 
        output[0] = carry 

def takeInput() :
    n = int(input()) 
    if n == 0 : 
        return list(), 0 
    arr = list(map(int, input().rstrip().split(" "))) 
    return arr, n 
def printList(arr, n) : 
    for i in range(n) : 
        print(arr[i], end = " ") 
    print() 
    
t = int(input().rstrip()) 
while t > 0 :
    arr1, n = takeInput()
    arr2, m = takeInput() 
    outputSize = (1 + max(n, m)) 
    output = outputSize * [0] 
    sumOfTwoArrays(arr1, n, arr2, m, output) 
    printList(output, outputSize) 
    
    t -= 1
