/*240. Search a 2D Matrix II*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int i = 0; 
        int j = matrix[0].size()-1; 
         while(i>=0 && j>=0 && i<matrix.size() && j<matrix[0].size()){ 
           if(matrix[i][j] == target)return 1; 
             else if(matrix[i][j] > target)j--; 
             else i++; 
         }
        return 0; 
    }
};