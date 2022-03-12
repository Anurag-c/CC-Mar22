class Solution:
                
        
    def camelMatch(self, queries: List[str], pat: str) -> List[bool]:
        
        
        def isMatch(st, pat):
        
            n = len(st)
            m = len(pat)
        
            idx = 0
        
            for i in range(0,n):
            
                if(idx < m and pat[idx] == st[i]):
                    idx = idx + 1
                elif(st[i].isupper()):
                    return False
        
            return idx == m
        
        n = len(queries)
        
        ans = []
        
        for i in range(0,n):
            ans.append(isMatch(queries[i],pat));
        
        return ans
        
        
        