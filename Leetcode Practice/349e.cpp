/*349  Intersection of Two Arrays*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int> hashset(nums1.begin(),nums1.end());
        vector<int> ans;
        for (int key : nums2) 
        {
            if(hashset.count(key)==1)
            {
                ans.push_back(key);
                hashset.erase(key);
            }
        }
        return ans;
        
    }
};