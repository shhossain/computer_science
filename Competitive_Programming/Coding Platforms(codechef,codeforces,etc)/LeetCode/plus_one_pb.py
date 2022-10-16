import math
#fucntion for adding one to number 
def incrementVetor(a):
    n = len (a)
    # add one to the last digit and also find thye carry
    a[n-1] += 1
    carry = a[n-1]/10 
    a[n-1] = a[n-1]%10
    # transverse from 2nd last digit
    for i in range(n-2,-1,-1):
        if(carry == 1):
            a[i] += 1
            carry + a[i]/10
            a[i] = a[i]%10
    #if the carry =1 , we need to add a 1 at beginning
    if (carry == 1):
       a.insert(0,1)

#driver
v=[1,7,8,9]
incrementVetor(v)
for i in range(0, len(v)):
    print (vect[i], end=" ")       
