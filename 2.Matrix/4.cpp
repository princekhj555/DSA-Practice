/*    Row with max 1s   */


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

/*##########################################################################################################*/
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > a, int n, int m) {
	  pair<int,int> chk;
	  chk.first=INT_MAX;
	  chk.second=INT_MAX;
	  for(int i=0;i<n;i++)
	  {
	     for(int j=0;j<m;j++)
	     if(a[i][j]!=0 && chk.first>j)
	     {
	         chk.first=j;
	         chk.second=i;
	         break;
	     }
	     
	  }
	  if(chk.second== INT_MAX)
	  return -1;
	  else
	  return chk.second;
	}
	  

};
/*###########################################################################################################*/

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends