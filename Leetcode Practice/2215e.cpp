//2215. Find the Difference of Two Arrays
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1,mp2;
        for(auto it:nums1){
            mp1[it]++;
        }
        for(auto it:nums2){
            mp2[it]++;
        }
        int i = 0;
        for(auto it:mp1){
            if(mp2.find(it.first)==mp1.end()){
                nums1[i++] = it.first;
            }
        }
        int rem = nums1.size()-i;
        while(rem--){
            nums1.pop_back();
        }
        i = 0;
        for(auto it:mp2){
            if(mp1.find(it.first)==mp1.end()){
                nums2[i++] = it.first;
            }
        }
        rem = nums2.size()-i;
        while(rem--){
            nums2.pop_back();
        }
        vector<vector<int>> ans;
        ans.push_back(nums1);
        ans.push_back(nums2);
        return ans;
    }
    
};