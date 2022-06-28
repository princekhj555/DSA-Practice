//1689. Partitioning Into Minimum Number Of Deci-Binary Numbers
class Solution {
public:
    int minPartitions(string n) {
        int sol=1;
        string t="";
        for(auto a: n){
            t=a;
            sol=max(std::stoi(t),sol);
        }
        return sol;
    }
};