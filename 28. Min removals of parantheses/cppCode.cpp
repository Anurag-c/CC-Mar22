class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        int n = s.length();
        stack<int>st;
        
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
                st.push(i);
            
            else if(s[i] == ')')
            {
                if(!st.empty() && s[st.top()] == '(') st.pop();
                else st.push(i);
            }
        }
        
        unordered_set<int>hm;
        while(!st.empty())
        {
            hm.insert(st.top());
            st.pop();
        }
        
        string ans;
        for(int i = 0; i < n; i++)
        {
            if(hm.find(i) == hm.end())
                ans += s[i];
        }
        
        return ans;
    }
};