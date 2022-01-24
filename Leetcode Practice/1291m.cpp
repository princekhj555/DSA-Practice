/*1291. Sequential Digits*/

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string tmp="123456789";
        vector<int> ans;
        int l=to_string(low).length();
        int h=to_string(high).length();
        
        for(int i=l;i<=h;i++)
        {
            for(int j=0;j<10-i;j++)
            {
                int num = stoi(tmp.substr(j, i));
                if(num>=low and num<=high) ans.push_back(num);
            }
        }
        return ans;
            
    }
};