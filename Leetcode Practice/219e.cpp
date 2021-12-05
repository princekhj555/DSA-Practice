/*219. Contains Duplicate II*/
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>m;
    int size = nums.size(), j;
    
    for(int i = 0; i < size; i++){
        m[nums[i]].push_back(i);
    }
    
    for(auto &p:m){
        vector<int>v = p.second;
        size = v.size();
        for(int i = 0, j = 1; j != size; i++, j++){
            if(abs(v[i] - v[j]) <= k){
                return true;
            }
        }
    }
    return false;
    }
};