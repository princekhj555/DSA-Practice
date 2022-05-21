
//1855. Maximum Distance Between a Pair of Valuesclass Solution {
public:
     int maxDistance(vector<int>& nums1, vector<int>& nums2) {
		int ans = 0,l=0,r=0,m=0,j=0;
		for (int i = 0; i < nums1.size(); ++i) {
			if (i > nums2.size()-1) break;
			if(nums1[i] > nums2[i]) continue;
			l = i, r = nums2.size() - 1;
			while (l <= r) {
				m = l + ((r - l) >> 1);
				if (nums1[i] <= nums2[m]) {
					l = m + 1;
				}
				else {
					r = m - 1;
				}
			}
			l = min(l, (int)nums2.size() - 1);
			while (l >=i && nums2[l] < nums1[i])
				l--;
			j = l;
			ans = max(ans, j - i);			
		}
		return ans;
	}
};