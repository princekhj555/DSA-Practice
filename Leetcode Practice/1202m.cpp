// 1202. Smallest String With Swaps
class Solution {
public:
   void dfs(vector<int>graph[],vector<bool>&vis,vector<int>&index,vector<char>&letters,int node,string &s){
          if(vis[node]==true) return;
           vis[node]=true;
           letters.push_back(s[node]);
           index.push_back(node);
          for(auto it:graph[node]){
              if(vis[it]==false){
                  dfs(graph,vis,index,letters,it,s);
              }
          }
      }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
     
           int n=s.size();
           vector<int>graph[n];
           for(int i=0;i<pairs.size();i++){
               int s=pairs[i][0];
               int d=pairs[i][1];
               graph[s].push_back(d);
               graph[d].push_back(s);
           }
           vector<bool>vis(n,false);
           for(int i=0;i<n;i++){
                 vector<int>index;
                 vector<char>letters;
               for(auto it:graph[i]){
                   if(vis[it]==false){
                       dfs(graph,vis,index,letters,it,s);
                   }
               }
                sort(index.begin(),index.end());
                sort(letters.begin(),letters.end());
               for(int j=0;j<index.size();j++){
                   s[index[j]]=letters[j];
               } 
           }
        return s;   
    }
};