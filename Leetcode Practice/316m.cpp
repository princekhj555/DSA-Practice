/*316. Remove Duplicate Letters*/

class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans;
		vector<int> map(26);
		vector<bool> visited(26); // char in ans
		for(auto& c : s) map[c - 'a']++;
		for(int i = 0; i < s.size(); i++) {
			if(visited[s[i] - 'a']) {
				map[s[i] - 'a']--;
				continue;
			}
			while(!ans.empty() && map[ans.back() - 'a'] > 1 && s[i] <= ans.back()) {
				map[ans.back() - 'a']--;
				visited[ans.back() - 'a'] = false;
				ans.pop_back();
			}
			ans.push_back(s[i]);
			visited[s[i] - 'a'] = true;
		}
		return ans;
    }
};