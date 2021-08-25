/*Count More than n/k Occurences */

class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        unordered_map<int,int> ump;
        for(int i=0;i<n;i++){
            ump[arr[i]]++;
        }
        int count=0;
        float t=(float)n/k;
        for(auto i:ump){
            if(i.second>t) count++;
        }
        return count;
    }
};
