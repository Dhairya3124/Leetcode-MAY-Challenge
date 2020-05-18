# Day : 12

class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        if len(nums)==1: return nums[0]
        for i in range(0,len(nums),2):
            if i == len(nums)-1:
                return nums[i]
            if not nums[i]==nums[i+1]: 
                return nums[i]
            
            
        return 0
