/*1295. Find Numbers with Even Number of Digits*/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int sol=0;
        for(auto a: nums)
        {
            int tmp=to_string(a).length();
            if(tmp%2==0) sol++;
        }
        return sol;
    }
};