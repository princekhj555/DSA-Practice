// To generate Power Set of a given string 

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
			vector<string> AllPossibleStrings(string s){
		   int n=s.size();
		   int powSize=pow(2,n);
		   string str;
		   vector<string> sol;
		   for(int counter=1;counter<powSize;counter++)
		   {        str="";
		       for(int i=0;i<n;i++)
		       {
		           if((counter & (1<<i))!=0) //to check the set bit
		              str+=s[i];  
		       }
		       sol.push_back(str);
		   }
		   sort(sol.begin(),sol.end()); //for lexicographically -sorted order 
		   return sol;
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
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends