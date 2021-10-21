//Flood fill

class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor,int r,int c,int source){
        if(sr<0 ||sr>=r ||sc<0||sc>=c) //out of bound
            return;
        else if(image[sr][sc]!=source) return;
        
        image[sr][sc]=newColor;
        
        dfs(image,sr-1,sc,newColor,r,c,source); //top
        dfs(image,sr+1,sc,newColor,r,c,source); //bottom
        dfs(image,sr,sc+1,newColor,r,c,source); //right
        dfs(image,sr,sc-1,newColor,r,c,source); //left
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(newColor==image[sr][sc])
            return image;
        int r=image.size();
        int c=image[0].size();
        int source=image[sr][sc];
        dfs(image,sr,sc,newColor,r,c,source);
        return image;
    }
};