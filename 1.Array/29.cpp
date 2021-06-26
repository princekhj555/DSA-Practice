/*Trapping the Rainwater Problem*/

// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        int left=0; int right=n-1;
        int res=0;
        int maxLeft=0,maxRight=0;
         while(left<=right){
             if(arr[left]<=arr[right]){
                 if(arr[left]>=maxLeft) maxLeft=arr[left];
                 else res+=maxLeft-arr[left];
                 
                 left++;
             }
             else {
                 if(arr[right]>=maxRight) maxRight=arr[right];
                 else res+=maxRight-arr[right];
                 
                 right--;
             }
         }
         return res;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends