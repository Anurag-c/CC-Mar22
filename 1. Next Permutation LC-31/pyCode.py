class Solution(object):
    def nextPermutation(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        swapIdx = -1
        
        for i in range(n - 2, -1, -1):
            if nums[i] < nums[i + 1]:
                swapIdx = i
                break
        
        if swapIdx != -1:
            for i in range(n - 1, swapIdx, -1):
                if nums[i] > nums[swapIdx]:
                    nums[i], nums[swapIdx] = nums[swapIdx], nums[i]
                    break
        
        nums[swapIdx + 1 : n] = nums[swapIdx + 1 : n][::-1]