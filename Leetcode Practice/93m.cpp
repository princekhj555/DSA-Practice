class Solution {
public:
static bool isValid(string s) {
    if (s.size() > 3 || s.size() == 0 || (s[0] == '0' && s.size() > 1) || stoi(s) > 255) return false;
    return true;
}
    vector<string> restoreIpAddresses(string s) {
       vector<string> res;
    for (int i = 1; i < 4 && i < s.size(); i++) {
        for (int j = i + 1; j < i + 4 && j < s.size(); j++) {
            for (int k = j + 1; k < j + 4 && k < s.size(); k++) {
                string s1 = s.substr(0, i), s2 = s.substr(i, j - i), s3 = s.substr(j, k - j), s4 = s.substr(k);
                if (isValid(s1) && isValid(s2) && isValid(s3) && isValid(s4)) {
                    res.push_back(s1 + "." + s2 + "." + s3 + "." + s4);
                }
            }
        }
    }
    return res; 
    }
};