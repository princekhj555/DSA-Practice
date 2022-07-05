//135. Candy
class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> cnt(ratings.size(), 1);
        for(int i=1; i<ratings.size(); i++)
            if(ratings[i]>ratings[i-1]) cnt[i] = cnt[i-1]+1;
        for(int i=ratings.size()-2; i>=0; i--)
            if(ratings[i]>ratings[i+1]) cnt[i] = max(cnt[i], cnt[i+1]+1);
        return accumulate(cnt.begin(), cnt.end(), 0);
    }
};