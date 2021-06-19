// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array

/*##########################################################################################################################*/
    int majorityElement(int a[], int size)
    {
        if(size==1) return a[0];
        
         sort(a,a+size);
    
    int count = 1, mx = -1, temp = a[0], x, flag=0;
    
    for(int i=1;i<size;i++)
    {
    
        if(temp==a[i])
        {
            count++;
        }
        else
        {
            count = 1;
            temp = a[i];
        }
   
        if(mx<count)
        {
            mx = count;
            x = a[i];
            
            if(mx>(size/2))
            {
                flag = 1;
                break;
            }
        }
    }
    return (flag==1 ? x : -1);
        
    }
/*##################################################################################################################################*/
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends