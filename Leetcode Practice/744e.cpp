/*744. Find Smallest Letter Greater Than Target*/
class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char key) {
        int n = arr.size();
        int low(0),high(n-1);
        char ans('#');
        
        while(low <= high){
            int mid = low +(high - low)/2;
            if(arr[mid]>key){
                ans = arr[mid];        //Saving answer and reducing our search space
                high = mid -1;
            }
            else low = mid +1;
        }
        if(ans == '#')ans = arr[0];    //If not found we will store first ele of array
        
        return ans;
    }
};