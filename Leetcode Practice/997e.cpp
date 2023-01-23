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


//*************************************************************************************/
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> trustCount(N+1, 0);
    
    // First pass: calculate trust count for each person
    for (auto t : trust) {
        trustCount[t[0]]--;
        trustCount[t[1]]++;
    }
    
    // Second pass: find the person with a trust count of N-1
    for (int i = 1; i <= N; i++) {
        if (trustCount[i] == N-1) {
            // Check if this person does not trust anyone
            bool isJudge = true;
            for (auto t : trust) {
                if (t[0] == i) {
                    isJudge = false;
                    break;
                }
            }
            if (isJudge) return i;
        }
    }
    
    return -1;
    }
};