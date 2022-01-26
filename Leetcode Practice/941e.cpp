/*941. Valid Mountain Array*/

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3) return false;
        int i=0;
        for( i=0;i<n;i++)
        {
            if(arr[i]>=arr[i+1])
                break;
        }
        if(i==n-1 or i==0) return false;
        for(;i<n-1;i++)
        {
            if(arr[i]<=arr[i+1])
                return false;
        }
        return true;
    }
};