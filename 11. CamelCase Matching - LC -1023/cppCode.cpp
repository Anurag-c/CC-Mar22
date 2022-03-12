class Solution {
public:
    
    bool isMatch(string &query,string &pat){
        
        
        int idx = 0;
        int n = pat.size();
        int m = query.size(); 
        
        for(int i=0;i<m;i++){
            
            if(idx < n && pat[idx] == query[i]) idx++;
            else if(isupper(query[i])) return false;
            
        }
            
        return idx == n;
        
    }
    
    vector<bool> camelMatch(vector<string>& queries, string pattern){
        
        int n = queries.size();
        
        vector<bool> ans(n);
        
        for(int i=0;i<n;i++) ans[i] = isMatch(queries[i],pattern);
        
        return ans;
    }
};