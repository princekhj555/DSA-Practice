/*  54. Spiral Matrix  */

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> sol;
        int top=0,bottom=matrix.size()-1,left=0,right=matrix[0].size()-1,dir=0;
        
        while(top<=bottom && left<=right)
        {
            if(dir==0)
            {   
                for(int i=left;i<=right;i++)
                    sol.push_back(matrix[top][i]);
                top++;    
            }
           else if(dir==1)
            {   
                for(int i=top;i<=bottom;i++)
                    sol.push_back(matrix[i][right]);
                right--;    
            }
            else if(dir==2)
            {   
                for(int i=right;i>=left;i--)
                    sol.push_back(matrix[bottom][i]);
                bottom--;    
            }
            else if(dir==3)
            {   
                for(int i=bottom;i>=top;i--)
                    sol.push_back(matrix[i][left]);
                left++;    
            }
        dir=(dir+1)%4;    
            
        }
        return sol;
    }
};