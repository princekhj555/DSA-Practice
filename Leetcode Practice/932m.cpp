/*932. Beautiful Array*/

class Solution {
public:
    vector<int> beautifulArray(int n) {
        if (n == 1) return { 1 };

	auto left = beautifulArray(n / 2);
	auto right = beautifulArray(n - (n / 2));

	vector<int> res;

	for (auto l : left)
		res.push_back(l * 2);

	for (auto r : right)
		res.push_back(r * 2 - 1);

	return res;
    }
};