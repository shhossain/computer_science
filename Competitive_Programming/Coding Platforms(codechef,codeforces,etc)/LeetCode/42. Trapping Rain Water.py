'''
Intuition:


In brute force,
we iterate over the left and right parts again and again just to find the highest bar size upto that index.
But, this could be stored. Voila, dynamic programming.

Algorithm:
    Find maximum height of bar from the left end upto an index i in the array left_max.
    Find maximum height of bar from the right end upto an index i in the array right_max.
    Iterate over the height array and update ans:
        Add min(left_max[i],right_max[i]) - height[i] to ans
'''

class Solution:
    def trap(self, h: List[int]) -> int:
        # calculating running max from left to right.
        lmax=list(accumulate(h,max))
        # calculating running max from right to left.
        rmax=list(accumulate(h[::-1],max))[::-1]
        
        # print(lmax)
        # print(h)
        # print(rmax)
        
        # return the sum of indivisual water store in i.
        
        # indivisual water stored is difference of
        # i'th height from min of max heights of left and right 
        return sum(min(l,r)-i  for l,i,r in zip(lmax,h,rmax))
        
        #TC : O(n) for 3 times linear traversal.
        #SC : O(n) for 2 running list