class Solution{
  public:
    int longestKSubstr(string s, int k) 
    {
        int n = s.length();
        int start = 0, end = 0;
        int ans = -1, distinct = 0;

        vector<int>hm(256, 0);

        while(end < n)
        {
            if(++hm[s[end++]] == 1) 
                distinct++;

            while(distinct > k)
                if(--hm[s[start++]] == 0) 
                    distinct--;

            if(distinct == k)
                ans = max(ans, end - start);
        }

        return ans;
    }
};