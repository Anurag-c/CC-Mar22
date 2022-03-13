int maxSubArray(vector<int>& nums) 
{
    int currSubarray = 0;
    int maxSubarray = INT_MIN;
    int n = nums.size();
    
    for(int i = 0; i < n; i++)
    {
        currSubarray += nums[i];
        maxSubarray = max(maxSubarray, currSubarray);
        if(currSubarray < 0) currSubarray = 0;
    }
    
    return maxSubarray;
}