/*238. Product of Array Except Self*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l=1,r=1;
        
        int n=nums.size();
        vector<int> sol(n),left(n),right(n);
        for(int i=0;i<n;i++){
            l=l*nums[i];
            left[i]=l;
        }
        for(int i=n-1;i>=0;i--){
            r=r*nums[i];
            right[i]=r;
        }
        sol[0]=right[1];
        sol[n-1]=left[n-2];
        for(int i=1;i<n-1;i++){
            sol[i]=right[i+1]*left[i-1];
        }
        return sol;
    }
};