class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     vector<int> tmp(nums2.size());
        tmp=nxtGtr(nums2);
        unordered_map<int,int> ump;
        for(int i=0;i<nums2.size();i++){
            ump[nums2[i]]=tmp[i];
        }
        vector<int> ans;
        for(auto a: nums1)
        {
            ans.push_back(ump[a]);
        }
        
        return ans;
      
    }
    vector<int> nxtGtr(vector<int> n){
        stack<int> st;
         vector<int> ans(n.size());
        for(int i=n.size()-1;i>=0;i--)
        {
            while(st.size()>0 and st.top()<n[i])
                st.pop();
            ans[i]= st.size()>0? st.top():-1;
            st.push(n[i]); 
        }
        return ans;
    }
};