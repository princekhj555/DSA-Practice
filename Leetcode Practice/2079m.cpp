/*2079. Watering Plants*/
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
         int walk=0;
        int can=capacity;
        for(int i=0;i<plants.size();i++){
            if(can<plants[i]){     
                walk+=2*i+1;
                can=capacity;
                can-=plants[i];
            }else if(can>=plants[i]){  
                walk+=1;
                can-=plants[i];
            }
        }
        return walk;
    }
};