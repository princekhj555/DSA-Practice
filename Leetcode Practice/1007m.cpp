//1007. Minimum Domino Rotations For Equal Row
class Solution {
public:
    int minDominoRotations(vector<int>& t, vector<int>& b) {
    unordered_map<int,int>mp1,mp2;
    for(auto it : t)
      mp1[it]++;
    for(auto it : b)
      mp2[it]++;
    int mx1=0,mx2=0,val1,val2;
   for(auto it : mp1){
      if(mx1<it.second){
        mx1=it.second;
        val1=it.first;
      }
   }
   for(auto it : mp2){
      if(mx2<it.second){
        mx2=it.second;
        val2=it.first;
      }
   }
   int req1=t.size()-mx1;
   int req2=b.size()-mx2;
   int c1=0,c2=0; 
   for(int i=0;i<t.size();i++){
      if(val1 != t[i] && val1 == b[i])
        c1++;
   }
    for(int i=0;i<b.size();i++){
      if(val2 != b[i] && val2 == t[i])
        c2++;
   }
   int ans=INT_MAX;
   if(c1 == req1){
     ans=min(ans,req1);
   }
   if(c2== req2){
     ans=min(ans,req2);
   }
   return ans==INT_MAX ? -1 : ans; 
}
};