//1465. Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts
class Solution {
public:
    int maxArea(int h, int w, vector<int>& hor, vector<int>& ver) {
         sort(hor.begin() , hor.end());
        sort(ver.begin() , ver.end());
        int mod = 1e9+7;
        long long x=0 , y=0;
        
        x = max(x , 1LL*(hor[0]-0));
        x = max(x , 1LL*(h-hor[hor.size()-1]));
        
        for(int i=1;i<hor.size();i++)
            x = max(x , 1LL*(hor[i]-hor[i-1]));
        
        y = max(y , 1LL*(ver[0]-0));
        y = max(y , 1LL*(w - ver[ver.size()-1]));
        
        for(int i=1;i<ver.size();i++)
            y = max(y , 1LL*(ver[i]-ver[i-1]));
        
        return (x*y*1LL)%mod;
    }
};