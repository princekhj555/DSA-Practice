/*1539. Kth Missing Positive Number*/
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
         int n = arr.size();
        int l=0;
        int h = n;
        while(l<h){
            int m = l + (h-l)/2;
            int p = arr[m]-m-1;
            if(p<k){
                l=m+1;
            }else{
                h=m;
            }
        }
        return l+k;
    }
};