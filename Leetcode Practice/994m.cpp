/*994. Rotting Oranges*/
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>> rotten;
        int total=0,count=0,time=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0) total++;
                if(grid[i][j]==2) rotten.push({i,j}); //insert initiall rotten 
            }
        }
        
        int dX[]={1,0,0,-1};
        int dY[]={0,1,-1,0};
        //top={-1,0}
        //bottom{1,0}
        //left{0,-1}
        //right{0,1}
        while(!rotten.empty())
        {
            int size=rotten.size();
            count+=size; //count the rottened
            while(size--){
                pair<int,int> temp=rotten.front();
                rotten.pop();
                int x=temp.first;
                int y=temp.second;
                for(int i=0;i<4;i++){
                    int nX=x+dX[i];
                    int nY=y+dY[i];
                    if(nX<0 || nX>=m || nY<0 || nY>=n || grid[nX][nY]!=1) continue;
                    else{
                        grid[nX][nY]=2; //makes rotten
                        rotten.push({nX,nY});
                    }
                }
                
            }
            if(!rotten.empty()) time++;
        }
        if(total== count)
            return time;
        return -1;
        
    }
};