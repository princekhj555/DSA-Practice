/*1470. Shuffle the Array*/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> sol(2*n);
        for(int i=0,j=n,k=0;i<n;i++,j++,k+=2){
            sol[k]=nums[i];
            sol[k+1]=nums[j];
        }
        return sol;
    }
};