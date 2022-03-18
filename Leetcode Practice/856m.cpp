/*856. Score of Parentheses*/
class Solution {
public:
    int scoreOfParentheses(string s) {
       int n=s.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(s[i]=='(')
            {
                st.push(-1);
            }else {
                if(st.top()==-1) //case ()
                {
                    st.pop();
                    st.push(1);
                }else {     //case (())
                    int tmp=0;
                    while(st.top()!=-1)
                    {
                        tmp+=st.top(); st.pop();
                    }st.pop();
                    st.push(2*tmp);
                }
            }
        }
        int sol=0; 
        while(!st.empty()) // for ()() case
        {
            sol+=st.top();
            st.pop();
        }
        return sol;
    }
};