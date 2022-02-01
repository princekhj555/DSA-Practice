/*970. Powerful Integers*/

class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
      int i=0;
      unordered_set<int>s;
      while(pow(x,i)<bound){
          i++;
          if(x==1){
              break;
          }
      }
      int j=0;
      while(pow(y,j)<bound){
          j++;
          if(y==1){
              break;
          }
      }
      for(int a=0;a<i;a++){
          for(int b=0;b<j;b++){
              if(pow(x,a)+pow(y,b)>bound){
                  break;
              }
              s.insert(pow(x,a)+pow(y,b));
          }
      }
      
      return (vector<int>(s.begin(),s.end()));  
    }
};