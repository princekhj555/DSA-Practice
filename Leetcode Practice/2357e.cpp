//2357. Make Array Zero by Subtracting Equal Amounts
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> ump;
        for(auto a: nums)
            { if(a!=0)
            ump.insert(a);}
        return ump.size();
    }
};
