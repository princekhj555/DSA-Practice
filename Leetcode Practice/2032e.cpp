//2032. Two Out of Three
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        int n1=nums1.size();
    int n2=nums2.size();
    int n3=nums3.size();
    unordered_map<int,int>m1,m2,m3;
    vector<int>ans;
    for(auto x:nums1){
        m1[x]++;
    }
      for(auto x:nums2){
        m2[x]++;
    }
      for(auto x:nums3){
        m3[x]++;
    }
    for(auto x:m1){
        if(m2.find(x.first)!=m2.end()||m3.find(x.first)!=m3.end()){
            ans.push_back(x.first);
        }
    }
    for(auto x:m2){
        if(m1.find(x.first)!=m1.end()||m3.find(x.first)!=m3.end()){
            ans.push_back(x.first);
        }
    }
    unordered_set<int>s;
    for(auto x:ans){
        s.insert(x);
    }
    ans.clear();
    for(auto x:s){
        ans.push_back(x);
    }
    return ans;
    
    }
};