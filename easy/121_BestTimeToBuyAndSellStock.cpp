class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<1)
            return 0;
        int minP = prices[0];
        // vector<int> profit(1);
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<minP)
                minP = prices[i];
            profit = max(profit, prices[i] - minP);
        }
        return profit;
    }
};