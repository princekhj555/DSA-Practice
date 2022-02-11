/*1431. Kids With the Greatest Number of Candies*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& cd, int ex) {
        int mx=0;
        for(int i=0;i<cd.size();i++)
            mx=max(mx,cd[i]);
        vector<bool> sol;
        for(int i=0;i<cd.size();i++)
        {
            bool tmp=false;
            if(cd[i]+ex>=mx)
                tmp=true;
            cout<<tmp;
            sol.push_back(tmp);
        }
        return sol;
    }
};