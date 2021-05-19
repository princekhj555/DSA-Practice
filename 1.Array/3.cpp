//to find K-th max in an array
// to find the Kth min we can sort the array in descending order using sort(a,a+n,greater<int>()) and return a[k-1];
#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // n : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int  kthSmallest(int arr[], int l, int n, int k) {
        n++;
        sort(arr,arr+n);  // for Kth min element sort(a,a+n,greater<int>())
        return(arr[k-1]);
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends