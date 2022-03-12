class Solution {
public:
    int minimumSwap(string s1, string s2){
        
        int n = s1.size();
        int m = s2.size();
        
        if(n != m) return -1;
        
        int cnt1 = 0;
        int cnt2 = 0;
        
        for(int i=0;i<n;i++){
            
            if(s1[i] == 'x' && s2[i] == 'y') cnt1++;
            else if(s1[i] == 'y' && s2[i] == 'x') cnt2++;
            
        }
        
        if(cnt1 % 2 != cnt2 % 2) return -1;
        
        int ans = cnt1 / 2 + cnt2 / 2;
        
        if(cnt1 & 1) ans += 2;
        
        return ans;
        
    }
};