/*1023. Camelcase Matching*/
class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> res(queries.size(), false);

        for(int i=0; i<queries.size(); ++i){
            string query = queries[i];
            int itrQ=0, itrP = 0;
            int lenQ=query.size(), lenP=pattern.size();

            while(itrQ < lenQ) {
                if(isupper(query[itrQ])) {
                    // in case of uppercase letter there has to be a matching letter
                    // in pattern else it is a bad match and we break the loop
                    if(itrP >= lenP || query[itrQ] != pattern[itrP]){
                        break;
                    }
                    itrQ++; itrP++;
                } else {
                    // in case of lowercase letter there may or may not be a match in pattern
                    if(query[itrQ] == pattern[itrP]) {
                        itrQ++; itrP++;
                    } else {
                        itrQ++;
                    }
                }
            }

            // if we iterated over all positions in query and pattern 
            // without breaking any rules then it is a good match
            if(itrQ == lenQ && itrP == lenP)
                res[i] = true;
        }

        return res;
    }
    
};