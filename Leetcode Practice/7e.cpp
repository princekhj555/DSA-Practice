/*  7. Reverse Integer   */

class Solution {
public:
int reverse(int x) {
        if(x == 0) return 0;
        int y = x;
        if(x < 0) x = abs(x);
        long ans = 0;
        while(x > 0) {
            int tmp = x%10;
            ans = ans*10 + tmp;
            x /= 10;
        }
        if(ans < -2147483648 || ans > 2147483647) return 0;
        if(y < 0) ans = -ans;
        return ans;
    }
};