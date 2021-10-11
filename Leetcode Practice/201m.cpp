/*201. Bitwise AND of Numbers Range*/

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int k=0;
        while(left!=right){
            left=left>>1;
            right=right>>1;
            k++;
        }
        int sol=left<<k;
        return sol;
    }
};