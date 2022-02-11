/*2011. Final Value of Variable After Performing Operations*/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& opp) {
        int x=0;
        for(int i=0;i<opp.size();i++)
        {
            if(opp[i][1]=='+')
                x++;
            if(opp[i][1]=='-')
                x--;
        }
        return x;
    }
};