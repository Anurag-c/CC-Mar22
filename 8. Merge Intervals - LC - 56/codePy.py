class Solution:
    def merge(self, arr: List[List[int]]) -> List[List[int]]:
        
        arr.sort()
        
        ans = []
        n = len(arr)
        
        ans.append(arr[0])
        
        for i in range(1,n):
            
            m = len(ans)
            
            if(arr[i][0] <= ans[m - 1][1]): ans[m - 1][1] = max(ans[m -1][1],arr[i][1])
            else: ans.append(arr[i])
        
        return ans
            
        
        