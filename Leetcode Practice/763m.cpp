/*763. Partition Labels*/

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.length();
        vector<int>sol;
        unordered_map<int,int> ump;
        for(int i=0;i<n;i++)
        {
            ump[s[i]]=i; //updating the last occuring 
        }
        int begg=0,end=ump[s[0]];
        int i=0;
        while(i<n)
        {
            // when there is another element in the range with repetion outside the range
            if(ump[s[i]]> end ) 
                end=ump[s[i]];
        //when we got the end of one partition and no repeted element is outside that range
            if(i==end)
            {
                sol.push_back(end-begg +1); 
                begg=i+1;
                end=ump[s[begg]];
            }
            i++;
        }
        return sol;
        
    }
};