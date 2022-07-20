//1748. Sum of Unique Elements

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> ump;
        for(auto a: nums) ump[a]++;
        int sol=0;
        for(auto a: ump){
            if(a.second ==1) sol+=a.first;
        }
        return sol;
    }
};