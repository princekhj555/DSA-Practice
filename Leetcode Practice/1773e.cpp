/*1773. Count Items Matching a Rule*/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int a;
    if(ruleKey == "type"){
        a=0;
    }else if(ruleKey == "color"){
        a=1;
    }else
        a=2;
    
    
    int count =0;
    for(int i=0;i<items.size();i++)
    {
        if(items[i][a]==ruleValue){
            count++;
        }
    }
    return count;
    }
};