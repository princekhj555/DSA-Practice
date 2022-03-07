/*1359. Count All Valid Pickup and Delivery Options*/

class Solution {
public:
    int countOrders(int n) {
       long long int mod = 1e9+7;
        long long int res = 1;
        int len = 2;
        for(int i=2;i<=n;i++){
            res = (res*(len+1)*(len+2)/2);
            res%=mod;
            len+=2;
        }
        return res;
    }
};