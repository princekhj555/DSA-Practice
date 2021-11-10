//1732. Find the Highest Altitude
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int ans = 0, largest = 0;;
        
        for (int i = 0; i < gain.size(); i++)
        {
			//Running total of altitude
            ans += gain[i];
			
			//Keep track of largest altitude
            if (ans > largest)
                largest = ans;
        }
        
        return largest;
    }
};