/*228. Summary Ranges*/
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
         int n=nums.size();
        vector<string>ans;
        int i=0;
        int j=0;
        
        while(j<n)
        {
            while(j+1<n and  nums[j+1]==nums[j]+1)
            {
                j++;
            }
            if(i!=j)
            {
            string temp="";
            temp+=to_string(nums[i]);
            temp+="->";
            temp+=to_string(nums[j]);
            ans.push_back(temp);
            }
            else
            {
                string temp="";
                temp+=to_string(nums[i]);
                ans.push_back(temp);
            }
            j++;
            i=j;
        }
        return ans;
    }
};