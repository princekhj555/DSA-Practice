//1385. Find the Distance Value Between Two Arrays
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int count = 0;
        bool check = true;
        
     
        for(int i = 0; i < arr1.size(); i++)
        {
            int first = 0, last = arr2.size() - 1, middle;
            while(first <= last)
            {
                middle = (first + last ) / 2;
                if(abs(arr1[i] - arr2[middle]) <= d) { check = false; break; }
                else if(arr2[middle] > arr1[i]) last = middle - 1;
                else first = middle + 1;
            }
            
            if(check) count++;
            else check = true;
        }
        
        return count;        
    }
};