/*Print all Possible Subsequences of a string*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:vector<string> sol;
		vector<string> solve(string t,int i,int n,string s){
			
			if(i==n)
				sol.push_back(t);
			else{
				solve(t,i+1,n,s);
				t+=s[i];
				solve(t,i+1,n,s);
			}
			return sol;
		}
		vector<string> AllPossibleStrings(string s){
		   return solve("",0,s.length(),s);
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<"\n";
		cout << "\n";

		cout<<"Total Number of Substrings = "<<res.size();

	}
	return 0;
}  // } Driver Code Ends