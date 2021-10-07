/*209. Minimum Size Subarray Sum*/
class Solution {
public:
    int minSubArrayLen(int k, vector<int>& arr) {
        int n= arr.size();
        int i =0;
        int j=0;
        int mi = INT_MAX;
        int sum =0;
        while(i<=j and j<n){
            while(sum <k and j<n){
                sum += arr[j++];
            }
			// The sum is greater than or equal to target
			
            while(sum >= k and i<j){
                mi = min(mi , j-i);
                sum -=arr[i];
                i++;
            }
        }
        if(mi !=INT_MAX){
            return mi;
        }else{
            return 0;
        }

    }
};