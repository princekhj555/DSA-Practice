//1268. Search Suggestions System
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
         vector<vector<string>>vec;
        unordered_map<string,set<string>>mp;
        for(auto I:products)
        {
            string temp ="";
            for(auto j:I)
            {
                temp+=j;
                mp[temp].insert(I);
                if(mp[temp].size()>3)
                {
                   auto it=prev(mp[temp].end());
                     mp[temp].erase(it);
                }
            }
        }
        string x="";
        for(auto j:searchWord)
        {
            x+=j;
         vector<string>temp(mp[x].begin(),mp[x].end());
            vec.push_back(temp);
        }
        return vec;
    }
};