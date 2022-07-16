
//1636. Sort Array by Increasing Frequency
class Solution {
static bool comp(vector<int>& a , vector<int>& b){
        if(a[1] == b[1]) return a[0]>b[0];
        else return a[1]<b[1];
    }
public:
    vector<int> frequencySort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int> > v;
        int l = nums.size(),c;
        for(int i=0; i<l; ++i){
            c = 1;
            while(i+1<l && nums[i] == nums[i+1]){
                ++c;
                ++i;
            }
            v.push_back({nums[i],c});
        }
        if(v.size()>1)
            sort(v.begin(),v.end(),comp);
        vector<int> u;
        for(int i=0; i<v.size(); ++i){
            for(int j=0; j<v[i][1]; ++j){
                u.push_back(v[i][0]);
            }
        }
        return u;
    }
};