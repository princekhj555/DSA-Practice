/*2120. Execution of All Suffix Instructions Staying in a Grid*/
class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int> sol;
        
        for(int j=0;j<s.size();j++)
        {
            int x=startPos[0];
        int y=startPos[1];
        int count =0;
        for(int i=j;i<s.size();i++)
        {
            if(s[i]=='R'){
                y++;
                if(y<n)
                    count++;
                else break;
            }
            if(s[i]=='L'){
                y--;
                if(y>=0)
                    count++;
                else break;
            }
            if(s[i]=='U'){
                x--;
                if(x>=0)
                    count++;
                else break;
            }
            if(s[i]=='D'){
                x++;
                if(x<n)
                count++;
                else break;
            }
            
            }
            sol.push_back(count);
        }
        return sol;
    }
    
};