/*11. Container With Most Water*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int res=0,ans=0;
        while(i<=j){
          ans=(j-i)*(min(height[i],height[j]));
            res=max(res,ans);
        if(height[i]<height[j])
              i++;
        else
               j--;
        }
      return res;  
    }
};