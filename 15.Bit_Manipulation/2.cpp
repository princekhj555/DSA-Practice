// to find 2 non repeating numbers 

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> a) 
    {
        int n=a.size();
        int Xor=0, res1=0,res2=0;
        for(int i=0;i<n;i++) Xor=Xor^a[i]; // stores XOR of 2 non repeating no. only.. the repeating no. cancels itself as X^X=0 and X^0=X 
        int rbit=Xor & ~(Xor-1);  // to get rightmost set bit and assign to a var which will have only set bit as righmost set bit of XXoe var.
        for(int i=0;i<n;i++)
        {
            if((a[i] & rbit)!=0)
                res1=res1^a[i];
            else res2=res2^a[i];
        }
        vector<int> sol;
        if(res2<res1)
        {
        sol.push_back(res2);
        sol.push_back(res1);
        }
        else {
            sol.push_back(res1);
        sol.push_back(res2);
        }
        return sol;
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
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends