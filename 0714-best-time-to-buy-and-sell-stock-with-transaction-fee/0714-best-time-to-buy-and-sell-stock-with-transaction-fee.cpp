class Solution {
public:
    int solve(int i, int buy,vector<int>& prices,vector<vector<int>>&dp,int fee){
        if(i>=prices.size())
            return 0;
        if(dp[i][buy]!=-1)
            return dp[i][buy];
        if(buy)
        return dp[i][buy]=max(-prices[i]+solve(i+1,0,prices,dp,fee),solve(i+1,1,prices,dp,fee));
        else
        return dp[i][buy]=max(prices[i]-fee+solve(i+1,1,prices,dp,fee),solve(i+1,0,prices,dp,fee));
    }
    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        return solve(0,1,prices,dp,fee);
    }
};