/*1518. Water Bottles*/
class Solution {
public:
    int count = 0;
    int extraEmpties = 0;
    int numWaterBottles(int numBottles, int numExchange) {
        count += numBottles;
        int newBottles = (numBottles+extraEmpties) / numExchange;
        extraEmpties = (numBottles+extraEmpties) % numExchange;
        if(newBottles <= 0) return count;
        else {
            return numWaterBottles(newBottles, numExchange);
        }
    }
};