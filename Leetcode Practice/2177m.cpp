/*2177. Find Three Consecutive Integers That Sum to a Given Number*/

class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> sol;
        if(num%3) return sol;
        
        sol.push_back(num/3-1);
        sol.push_back(num/3);
        sol.push_back(num/3+1);
        
        return sol;
    }
};