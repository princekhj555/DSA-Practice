/*167. Two Sum II - Input array is sorted*/
class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n=num.size();
        vector<int> sol;
        for(int i=0,j=n-1;i<j;){
            if(num[i]+num[j]==target)
            {
                sol.push_back(i+1);
                sol.push_back(j+1); break;
            }
            else if(num[i]+num[j]>target)
            {
                j--;
            }
            else i++;
        }
        return sol;
    }
};