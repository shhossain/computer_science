class Solution:
    def summing(self, nums: list, funct, answer) -> int:
        for j in range(len(nums)):
            answer += j*nums[j]
        funct = max(funct, answer)
        
    def maxRotateFunction(self, nums: List[int]) -> int:
        for i in range(len(nums)):
            funct = 0
            answer = 0
            self.summing(nums, funct, answer)
            nums.insert(0, nums[len(nums)-1])
            nums.pop(len(nums)-1)
            
        if len(nums) == 1:
            return 0
        
        return funct
        
