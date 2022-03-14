class Solution 
{
    bool checkOpen(char ch)
    {
        return (ch == '(' || ch == '{' || ch == '[');
    }
    
    void checkAndPop(stack<char>& st, char ch)
    {
        if(ch == ')')
        {
            if(!st.empty() && st.top() == '(') st.pop();
            else st.push(ch);
        }
        else if(ch == '}')
        {
            if(!st.empty() && st.top() == '{') st.pop();
            else st.push(ch);
        }
        else if(ch == ']')
        {
            if(!st.empty() && st.top() == '[') st.pop();
            else st.push(ch);
        }
        return;
    }
    
public:
    
    bool isValid(string s) 
    {
        int n = s.length();
        stack<char>st;
        
        for(int i = 0; i < n; i++)
        {
            if(checkOpen(s[i])) st.push(s[i]);
            else checkAndPop(st, s[i]); 
        }
        
        return (st.size() == 0);
    }
};