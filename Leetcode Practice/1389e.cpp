/*1389. Create Target Array in the Given Order*/

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> v;
        for(int i=0;i<index.size();i++){
                 v.insert(v.begin()+index[i],nums[i]);
      }
        return v;
    }
};