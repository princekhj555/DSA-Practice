//To find those elements whose value is equal to their index place (staring from 1)
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

	vector<int> valueEqualToIndex(int a[], int n) {
	    vector<int> sol;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==i+1) sol.push_back(a[i]);
	    }
	    return sol;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x: ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends