/*1926. Nearest Exit from Entrance in Maze*/

class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m=maze.size();
        int n=maze[0].size();
        int x=entrance[0];
        int y=entrance[1];
        queue<pair<int,int>> q;
        q.push({x,y});
        maze[x][y]='+';
        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
        int sol=0;
        while(!q.empty()){
            int cnt=q.size();
            while(cnt--){
                pair<int,int>p=q.front(); q.pop();
                     if((p.first==0 ||p.second==0||p.first==m-1||p.second==n-1)&&sol>0){
                        return sol;
                    }
                for(int l=0;l<4;l++){
                    int x=p.first+dx[l];
                    int y=p.second+dy[l];
                    if(x<0 || y<0 || x>=m|| y>=n || maze[x][y]=='+')
                        continue;
                   
                    maze[x][y]='+';
                    q.push({x,y});
                    } 
                    
                }
            sol++;
        }
        return -1;
    }
};