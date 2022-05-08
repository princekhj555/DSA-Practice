// 456. 132 Pattern
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       stack<pair<int, int>> st;
        int st_min=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            while(!st.empty() && nums[i] >= st.top().first){
                st.pop();
            }
            if(!st.empty() && nums[i] > st.top().second)
                return true;
            st_min = min(st_min, nums[i]);
            st.push({nums[i], st_min});
        }
        return false; 
    }
};