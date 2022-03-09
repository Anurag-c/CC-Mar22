class Solution {
public:
    
    static bool compare(int a, int b)
    {
        string first = to_string(a);
        string second = to_string(b);
        
        string fs = first + second;
        string sf = second + first;
        
        return sf < fs;
    }
    
    string largestNumber(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end(), compare);
        
        if(nums[0] == 0) return "0";
        
        string ans;
        for(int num : nums)
            ans.append(to_string(num));
        
        return ans;
    }
};