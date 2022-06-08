//1332. Remove Palindromic Subsequences
class Solution {
public:
    int removePalindromeSub(string s) {
        string ss=s;
        reverse(ss.begin(),ss.end());
        return (ss==s) ?1 :2;
    }
};