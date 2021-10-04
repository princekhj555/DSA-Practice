/*153. Find Minimum in Rotated Sorted Array*/
class Solution {
public:
    int findMin(vector<int>& n) {
        int st=0,end=n.size()-1;
        while(st<end){
            int mid=st+(end-st)/2;
            if(n[mid]>n[end]) st=mid+1;
            if(n[mid]<n[end]) end=mid;
           
        }
        return n[st];
    }
};