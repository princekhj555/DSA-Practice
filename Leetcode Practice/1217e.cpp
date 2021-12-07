//1217. Minimum Cost to Move Chips to The Same Position

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int freq[2]={0};
        for(int i=0;i<position.size();i++)  freq[position[i]%2]++;
        return min(freq[0],freq[1]);
    }
};