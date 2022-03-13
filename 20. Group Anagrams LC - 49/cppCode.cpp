vector<vector<string>> groupAnagrams(vector<string>& strs) 
{
    vector<string>sorted;
    int n = strs.size();
    for(int i = 0; i < n; i++)
    {
        string temp = strs[i];
        sort(temp.begin(), temp.end());
        sorted.push_back(temp);
    }
    
    unordered_map<string, vector<string>>hm;
    for(int i = 0; i < n; i++)
        hm[sorted[i]].push_back(strs[i]);
    
    vector<vector<string>>ans;
    for(auto p : hm)
        ans.push_back(p.second);
    
    return ans;
}