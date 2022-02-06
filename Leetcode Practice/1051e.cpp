/*1051. Height Checker*/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> a=heights;
		int count=0;
        sort(a.begin(), a.end());
        for(int i=0;i<heights.size();i++)
        {if(heights[i]!=a[i])
                count++;}
        return count;
    }
};