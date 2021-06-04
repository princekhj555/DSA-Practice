// to find Median in array after sort

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
	public:
	int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());
		    int size=v.size()-1;
		    if((size+1)%2!=0)
		        return(v[size/2]);
		        
		    else return((v[(size/2)+1]+v[size/2])/2);
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}
  // } Driver Code Ends