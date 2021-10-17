/*123. Best Time to Buy and Sell Stock III*/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int hold_1 = INT_MIN;
        int hold_2 = INT_MIN;
        int cont_1 = 0;
        int cont_2 = 0;

        for (auto i : prices)
        {
            cont_2 = max(cont_2, hold_2 + i);
            hold_2 = max(hold_2, cont_1 - i);

            cont_1 = max(cont_1, hold_1 + i);
            hold_1 = max(hold_1, -i);
        }
        return cont_2;
    }
};