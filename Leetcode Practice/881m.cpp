/*881. Boats to Save People*/
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int ans=0;
        for(int i=0,j=n-1;i<=j;)
        {
            if(people[i]+people[j]<=limit){
                i++;
                j--;
            }else j--;
            ans++;
        }
        return ans;
    }
};