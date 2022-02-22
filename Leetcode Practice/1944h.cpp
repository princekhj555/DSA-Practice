/*1944. Number of Visible People in a Queue*/
class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        
        int n = heights.size();
        heights.push_back(INT_MAX);
        stack<int> s;
        s.push(n);
        vector<int> ans(n);
        for(int i = n - 1;i>=0;i--) {
            int seen = 0;
            while(!s.empty() && heights[i] > heights[s.top()]) {
                s.pop();
                seen++;
            }
            ans[i] = seen;
            if(!s.empty() && s.top() != n) ans[i]++;
            s.push(i);
        }
        return ans;
    }
};