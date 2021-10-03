/*5871. Convert 1D Array Into 2D Array*/
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& orr, int m, int n) {
        vector<vector<int>> sol;
        int k=orr.size();
        if(k!=m*n) return sol;
        vector<int> tmp;
        for(int i=0;i<k;i++)
        {
            if(tmp.size()<n){
                tmp.push_back(orr[i]);
            }
            if(tmp.size()==n){
                sol.push_back(tmp);
                tmp.clear();
            }
        }
        return sol;
    }
};