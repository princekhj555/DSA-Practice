/*2037. Minimum Number of Moves to Seat Everyone*/

class Solution {
public:
    int minMovesToSeat(vector<int>& s, vector<int>& s1) {
        sort(s.begin(),s.end());
        sort(s1.begin(),s1.end());
        int sum=0;
        for(int i=0; i<s.size(); i++){
            sum = sum+abs(s[i]-s1[i]);

             }
        return sum;
    }
};