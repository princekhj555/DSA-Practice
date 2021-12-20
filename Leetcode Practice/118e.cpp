/*118. Pascal's Triangle*/

class Solution {
public:
     vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        int i,j;
        for(i=0;i<numRows;i++){
            vector<int> temp;
            for(j=0;j<i+1;j++){
                if(j==0||j==i)
                    temp.push_back(1);
                else
                    temp.push_back(res[i-1][j-1]+res[i-1][j]);
            }
            res[i]=temp;
        }
        return res;
    }
};