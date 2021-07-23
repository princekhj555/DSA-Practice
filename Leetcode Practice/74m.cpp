/* 74. Search a 2D Matrix */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int k=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]>target)break;
            for(int j=0;j<m;j++){
                if(matrix[i][j]==target) {k=1;break;}
            }
            if(k==1) break;
        }
        if(k==1) return 1;
        else return 0;
    }
};


/*
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[i].size();j++)
                if(matrix[i][j]==target) return true;
        return false;
    }
};

*/