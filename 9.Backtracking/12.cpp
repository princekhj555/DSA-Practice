//Combination Sum 
class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void solve(vector<int>&A,int B, int sum, vector<int>arr, vector<vector<int>>&ans,int index){
       //base case
       if(sum==B){
           ans.push_back(arr);
           return;
       }
       for(int i =index;i<A.size();i++){
           if(A[i]+sum<=B){
               sum+=A[i];
               arr.push_back(A[i]);
               solve(A,B,sum,arr,ans,i);
               sum-=A[i];     //backtracking
               arr.pop_back();
           }
       }
       return;
       
   }
   vector<vector<int> > combinationSum(vector<int> &A, int B) {
       // Your code here
       
       //remove duplicates and sort the array
       sort(A.begin(),A.end());
       A.erase(std::unique(A.begin(),A.end()),A.end());
       vector<vector<int>>ans;
       int sum=0;
       vector<int>arr;
       solve(A,B,sum,arr,ans,0);
       return ans;
       
   }
};