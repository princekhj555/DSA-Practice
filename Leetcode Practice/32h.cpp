//32. Longest Valid Parentheses
class Solution {
public:
    int longestValidParentheses(string s) {
         int n = s.size();
        int res = 0;
        
        stack<int> st;
        
        for(int i=0;i<n;i++){
            
            if(st.empty() || s[i] == '(') st.push(i);
            else{
                if(s[st.top()] == '(') st.pop();
                else st.push(i);
            }
            
            if(st.empty()) res = i+1;
            else res = max(res , i - st.top());
            
        }
        
        return res;
    }
};