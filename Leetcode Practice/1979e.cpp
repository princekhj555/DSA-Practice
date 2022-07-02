//1979. Find Greatest Common Divisor of Array

class Solution {
public:
    int gcd(int a, int b)
{
    
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    if (a == b)
        return a;

    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
    int findGCD(vector<int>& nums) {
        int mx=INT_MIN,mn=INT_MAX;
        
        for(auto a: nums){
            if(mx<a) mx=a;
            if(mn>a) mn=a;
        }
        return gcd(mn,mx);
    }
};