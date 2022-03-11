class Solution:
    def minMoves(self, nums: List[int]) -> int:
        
        n = len(nums)
        
        total = sum(nums,0)
        minEle = min(nums)
        
        return total - n * minEle