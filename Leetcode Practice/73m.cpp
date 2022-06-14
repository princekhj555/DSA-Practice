//73. Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        set<pair<int,int>> st;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0 and st.count({i,j})==0){
                    for(int k=0;k<n;k++){
                        if(matrix[i][k]!=0) {matrix[i][k]=0; st.insert({i,k});}
                    }
                    for(int l=0;l<m;l++){
                        if(matrix[l][j]!=0) {matrix[l][j]=0; st.insert({l,j});}
                    }
                }
            }
        }
    }
};