class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int, int>hm;
        int n = nums.size();
        
        int prefix = 0;
        int ans = 0;
        hm[0] = 1;
        
        for(int i = 0; i < n; i++)
        {
            prefix += nums[i];
            if(hm.find(prefix - k) != hm.end())
                ans += hm[prefix - k];
            
            hm[prefix]++;
        }
        
        return ans;
    }
};