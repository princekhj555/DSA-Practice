/*784. Letter Case Permutation*/

class Solution {
public:
    void solve(vector<string> &res, string &s, int k)
	{
		if(k==s.size())
		{
			res.push_back(s);
			return;
		}

		if(isalpha(s[k])) // if alphabet
		{
			s[k] = tolower(s[k]);
			solve(res,s,k+1);
			s[k] = toupper(s[k]);
			solve(res,s,k+1);
			s[k] = tolower(s[k]);    
		}
		else // if digit
		{
			solve(res,s,k+1);
		}
	}
    vector<string> letterCasePermutation(string s) {
        vector<string> sol;
        solve(sol,s,0);
        return sol;
    }
};