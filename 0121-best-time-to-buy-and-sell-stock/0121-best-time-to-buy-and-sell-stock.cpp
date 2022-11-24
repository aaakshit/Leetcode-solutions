class Solution {
public:
     int maxProfit(vector<int>& prices) {
        int profit=0;
        for(int i=0;i<prices.size();i++){
            int buy=min(prices[i],buy);
            int sell=prices[i]-buy;
            profit=max(profit,sell);
        }
        return profit;
    }
};