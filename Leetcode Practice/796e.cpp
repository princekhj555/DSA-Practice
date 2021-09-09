/*796. Rotate String*/

class Solution {
public:
    bool rotateString(string s, string goal) {
      int n=s.length();
        int m=goal.length();
        if(m!=n) return false;
        string temp=s+s;	
        return (temp.find(goal)!=string::npos);
    }
};