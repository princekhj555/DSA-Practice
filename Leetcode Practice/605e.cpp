/*605. Can Place Flowers*/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       int count=0;
        flowerbed.push_back(0);
        flowerbed.insert(flowerbed.begin(),0);
        int s=flowerbed.size();
        for(int i=1;i<s-1;i++)
        {
            if(!flowerbed[i])
            {
                if(!flowerbed[i+1] and !flowerbed[i-1])
                {
                    flowerbed[i]=1;
                    count++;
                }
            }
        }
        cout<<count;
           return (count>=n);
    }
};