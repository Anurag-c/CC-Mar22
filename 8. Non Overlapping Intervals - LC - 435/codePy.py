class Solution:
    def eraseOverlapIntervals(self, arr: List[List[int]]) -> int:
        
        arr.sort()
        
        ans = []
        n = len(arr)
        count = 0
        
        ans.append(arr[0])
        
        for i in range(1,n):
            
            m = len(ans)
            
            if(arr[i][0] < ans[m - 1][1]):
                if(arr[i][1] < ans[m - 1][1]): ans[m - 1] = arr[i]
                count = count + 1
            else: ans.append(arr[i])
        
        return count 
        