/* to find median in row wise sorted matrix*/
#include <bits/stdc++.h>
using namespace std;



class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        vector<int> a;
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<r;j++)
            {
                a.push_back(matrix[j][i]);
            }
        }sort(a.begin(),a.end());
        return a[a.size()/2];
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends