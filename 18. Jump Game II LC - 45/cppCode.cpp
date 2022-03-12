class Solution {
public:
    int jump(vector<int>& nums)
    {
        
        int n = nums.size();
        
        int jumps = 0;
        int farthest = 0;
        int maxJumpEnd = 0;
        
        //TC - O(n)

        for(int i = 0; i < n - 1; i++)
        {
            farthest = max(farthest,i + nums[i]);
        
            if(i == maxJumpEnd)
            {
                
                jumps++;
                maxJumpEnd = farthest;
            }
        }
        return jumps;
    }
};