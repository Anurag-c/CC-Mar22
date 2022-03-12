class Solution {
public:
    
    int eraseOverlapIntervals(vector<vector<int>>&v) {
        sort(v.begin(),v.end());
        
        vector<vector<int>> ans(1);
        
        int count = 0;
        int n = v.size();
        
        ans[0] = v[0];
        
        for(int i = 1; i < n; i++){
            
            int len = ans.size();
            
            if(v[i][0] < ans[len - 1][1]){
                
                if(ans[len - 1][1] > v[i][1]) ans[len - 1] = v[i];
                count++;
                
            }
            else ans.push_back(v[i]);
            
        }
        
        return count;
        
    }
};