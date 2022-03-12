class Solution {
public:
    int maxProfit(vector<int>& nums){
        
        int mi = nums[0];
        int n = nums.size();
        int ans = 0;
        
        for(int i = 1; i < n; i++){
            
            if(mi < nums[i]){
                
                ans += nums[i] - mi;
                mi = nums[i];
                
            }
            else mi = min(mi,nums[i]);
            
        }
        
        return ans;
        
    }
};