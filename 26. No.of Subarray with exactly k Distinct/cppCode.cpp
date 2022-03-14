class Solution {
    
    int atmost(vector<int>& nums, int k)
    {
        int n = nums.size();
        int start = 0, end = 0;
        int ans = 0, distinct = 0;

        vector<int>hm(20001, 0);

        while(end < n)
        {
            if(++hm[nums[end++]] == 1) distinct++;

            while(distinct > k)
            {
                if(--hm[nums[start++]] == 0) 
                    distinct--;
            }

            ans += end - start;
        }

        return ans;
    }
    
public:
    
    int subarraysWithKDistinct(vector<int>& nums, int k) 
    {
        return atmost(nums, k) - atmost(nums, k - 1);
    }
};