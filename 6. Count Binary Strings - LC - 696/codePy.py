class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        
        n = len(s)
        arr = []
        count = 1
        
        for i in range(1,n):
            
            if(s[i - 1] == s[i]):
                count = count + 1
            else:
                arr.append(count)
                count = 1
        
        arr.append(count)
        
        ans = 0
        for i in range(1,len(arr)):
            ans = ans + min(arr[i - 1],arr[i])
        
        return ans
                
        
        