/*Find the product array of all except the number at ith position  ======== product of all the elements of nums except nums[i].*/

// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        vector<long long int> sol;
        long long int prod=1;
        for(int i=0;i<n;i++)
        {
            prod=nums[i]*prod;
            sol.push_back(prod);
        }
         prod=1;
        for(int i=n-1;i>0;--i)
        {
            sol[i]=sol[i-1]*prod;
            prod=prod*nums[i];
        }
        sol[0]=prod;
        return sol;
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends