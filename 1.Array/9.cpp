//Minimize the maximum difference between heights 

#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int getMinDiff(int a[], int n, int k) {
        sort(a,a+n);
        int small=a[0]+k;
        int large=a[n-1]-k;
        int sol=a[n-1]-a[0];
        for(int i=0;i<n-1;i++)
        {
            int mn,mx;
            mn=min(small,a[i+1]-k);
            mx=max(large,a[i]+k);
            if(mn<0) continue;
            sol=min(sol,mx-mn);
        }
      return sol;  
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends