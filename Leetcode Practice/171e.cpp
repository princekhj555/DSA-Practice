/*171. Excel Sheet Column Number*/

class Solution {
public:
    int titleToNumber(string col) {
        int sol=0;
        for(int i = 0; i < col.length(); ++i){
            sol*=26;
            sol += (col[i] - 'A') + 1;
        }
        return sol;
    }
};