class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int n = nums.size();
        int swapIdx = -1;
        
        for(int i = n - 2; i >= 0; i--)
        {
            if(nums[i] < nums[i + 1])
            {
                swapIdx = i;
                break;
            }
        }
        
        if(swapIdx != -1)
        {
            for(int i = n - 1; i > swapIdx; i--)
            {
                if(nums[i] > nums[swapIdx])
                {
                    swap(nums[i], nums[swapIdx]);
                    break;
                }
            }
        }
        
        reverse(nums.begin() + swapIdx + 1, nums.end());
    }
};