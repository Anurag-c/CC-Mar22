class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();

        int res = 0;
        
        for (int i = 0; i < n; i++) 
        {
            vector<int>hm(256, 0);
            for (int j = i; j < n; j++) 
            {
                if(hm[s[j]] > 0) break;
                res = max(res, j - i + 1);
                hm[s[j]]++;
            }
        }

        return res;
    }
};

int lengthOfLongestSubstring(string s) 
{
    int n = s.length();
    int start = 0;
    int end = 0;
    int repeat = 0;
    int ans = 0;
    vector<int>hm(256, 0);
    
    while(end < n)
    {
        if(++hm[s[end++]] == 2) 
            repeat++;
        
        while(repeat > 0)
        {
            if(--hm[s[start++]] == 1)
                repeat--;
        }
        
        ans = max(ans, end - start);
    }
    
    return ans;
}