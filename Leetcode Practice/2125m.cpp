/*2125. Number of Laser Beams in a Bank*/

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int prev=0,curr=0;
        int lasers=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<bank[i].size();j++)
            {
                if(bank[i][j]=='1')
                    curr++;
            }
            lasers=lasers+prev*curr;
            cout<<lasers<<endl;
            prev= curr!=0 ? curr : prev;
            curr=0;
        }
        return lasers;
    }
};