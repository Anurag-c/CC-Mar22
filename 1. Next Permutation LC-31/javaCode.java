class Solution 
{
    private void reverse(int[] nums, int start) 
    {
        int i = start, j = nums.length - 1;
        while (i < j) 
        {
            swap(nums, i, j);
            i++;
            j--;
        }
    }

    private void swap(int[] nums, int i, int j) 
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    
    public void nextPermutation(int[] nums) 
    {
        int n = nums.length;
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
                    swap(nums, i, swapIdx);
                    break;
                }
            }
        }
        
        reverse(nums, swapIdx + 1);
    }
}