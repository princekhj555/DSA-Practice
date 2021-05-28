// to merge 2 sorted arrays in sorted manner without using extra space...... aux space : O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void merge(int a1[], int a2[], int n, int m) {
	     int i = 0, j = 0, k = n - 1;
   
    while (i <= k and j < m) {
        if (a1[i] < a2[j])
            i++;
        else {
            swap(a2[j++], a1[k--]);
        }
    }
        sort(a1,a1+n);
	    sort(a2,a2+m);
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends