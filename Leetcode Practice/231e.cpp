/* 231. Power of Two    ::::::::::::::::::   https://leetcode.com/problems/power-of-two/    */

class Solution {
public:
    bool isPowerOfTwo(int n) {
   if(n==0) return 0;
    if(n==INT_MIN || n==INT_MAX) return 0;
        long long nn=n;
        int x=(n&n-1);
        return x==0;
    }
};