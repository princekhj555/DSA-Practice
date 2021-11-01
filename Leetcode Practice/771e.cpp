//771. Jewels and Stones
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> uj;
        int sol=0;
        for(auto a: jewels){
            uj.insert(a);
        }
        for(auto a: stones)
        {
            if(uj.count(a))
                sol++;
        }
        return sol;
    }
};