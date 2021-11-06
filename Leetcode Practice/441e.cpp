//441. Arranging Coins

class Solution {
public:
    int arrangeCoins(int n) {
        int i=0;
        while(n-i>=0)
            {n-=i;
            i++;}
        return --i;
    }
};