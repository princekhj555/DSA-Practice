//29. Divide Two Integers
class Solution {
public:
    int divide(long long dividend, long long divisor){       
        double c = dividend / divisor;
        if (c < INT_MIN) return INT_MIN;
        if (c > INT_MAX) return INT_MAX;        
        return c;
    }
};