/*451. Sort Characters By Frequency*/

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        
        priority_queue<pair<int,int>> q;
        string output;
        for(auto& i:s) freq[i]++;
		
        //Stores frequency of character and character as pair 
        for(auto& i : freq) q.push(make_pair(i.second,i.first));
        
        while(!q.empty())
        {
            auto i = q.top();
            output+=string(i.first,i.second);
            q.pop();
        }
        return output;
    }
};