/*1662. Check If Two String Arrays are Equivalent*/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1="";
        string w2="";
        for(auto a: word1)
            w1+=a;
        for(auto a: word2)
            w2+=a;
        return w1==w2;
    }
};