/*997. Find the Town Judge*/

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
         vector<int> sumtrusts (n,0);
    for(auto& i:trust)
            sumtrusts[i[1]-1]++;
        
    //find who has the trust of all
    int label=-1;
    for(int i=0;i<n;i++)
        if(sumtrusts[i]==n-1){
            label = i;
            break;
            }

    if(label<0) return -1;
        
    //check if the person found trusts no one
    for(auto& i:trust){
            if((i[0]-1)==label)
            return -1;  
            }
 
    return (label + 1);
    }
};