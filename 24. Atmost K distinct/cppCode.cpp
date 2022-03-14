class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string &s, int k) 
    {
        int n = s.length();
        int start = 0, end = 0;
        int ans = 0, distinct = 0;

        vector<int>hm(256, 0);

        while(end < n)
        {
            //1. Expansion
            /*hm[s[end]]++;
            if(hm[s[end]] == 1) distinct++;
            end++;*/

            if(++hm[s[end++]] == 1) distinct++;

            //2. Compression
            while(distinct > k)
            {
                /*hm[s[start]]--;
                if(hm[s[start]] == 0) distinct--;
                start++;*/
                if(--hm[s[start++]] == 0) distinct--;
            }

            //3. Calculate
            ans = max(ans, end - start);
        }

        return ans;
    }
};