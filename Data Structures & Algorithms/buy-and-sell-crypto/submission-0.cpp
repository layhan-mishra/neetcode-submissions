class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minSoFar = 101;
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] - minSoFar > maxProfit)
            {
                maxProfit = prices[i] - minSoFar;
            }
            if(prices[i] < minSoFar)
            {
                minSoFar = prices[i];
            }
        }
        
        return maxProfit;
    }
};
