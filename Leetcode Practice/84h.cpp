/*84. Largest Rectangle in Histogram*/

class Solution {
public:
    int largestRectangleArea(vector<int>& ht) {
        int n=ht.size();
        vector<int> lSmall(n);
        vector<int> rSmall(n);
        stack<int> st;
        
        //Get the leftSmall 
        for(int i=0;i<n;i++)
        {
            while(!st.empty() and ht[st.top()]>=ht[i])
                st.pop();
        
        if(st.empty()) lSmall[i]=0;
        else lSmall[i]=st.top()+1;
        st.push(i);
        }
        //clear the stack to reuse
        while(!st.empty())
            st.pop();
        
        //Get the rightSmall
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() and ht[st.top()]>=ht[i])
                st.pop();
        
        if(st.empty()) rSmall[i]=n-1;
        else rSmall[i]=st.top()-1;
        st.push(i);
        }
        int sol=0;
        //compute the max sol
        for(int i=0;i<n;i++){
            sol=max(sol,ht[i]*(rSmall[i]-lSmall[i]+1));
        }
        return sol;
    }
};