/*Count pairs with given sum  */


#include <bits/stdc++.h>
using namespace std;


/*##################################################################################################*/
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int>mp;
        int counter=0;
        for(int i=0;i<n;i++)
        {
            if(mp.find(k-arr[i]) !=mp.end())
            counter+=mp[k-arr[i]];
            mp[arr[i]]++;
        }
        return counter;
    }
};
/*#####################################################################################################3*/

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends




/*################################################################################################################*/
//Approcah 2
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
       unordered_map<int, int> m;
 
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
 
    int count = 0;
 
    for (int i = 0; i < n; i++) {
            count += m[k - arr[i]];
 
        // if (arr[i], arr[i]) pair satisfies the condition,
        // then we need to ensure that the count is
        // decreased by one such that the (arr[i], arr[i])
        // pair is not considered
        if (k - arr[i] == arr[i])
                count--;
    }
    return count / 2;
    }
};
/*###############################################################################################################3*/