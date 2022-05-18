//1351. Count Negative Numbers in a Sorted Matrix
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int answer=0;
        
        for(int i=0;i<grid.size();i++){
            int ans=0;
            int s=0;
            int e=grid[i].size()-1;
            int mid = s+(e-s)/2;
            while(s<=e){
            if(grid[i][mid]<0){
               ans=grid[i].size()-mid;
               e=mid-1; 
            }
            else{
                s=mid+1;
            }
                mid=s+(e-s)/2;
        }
            answer=answer+ans;
        }
        
        return answer;
    }
};