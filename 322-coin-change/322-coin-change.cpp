class Solution {
public:
    int dp[13][10005];
    int solve(vector<int>& coins,int amount, int n){
      if(n==0 or amount==0)
        {
            if(amount==0)
                return 0;
            return INT_MAX-1;
        }
        if(dp[n][amount]!=-1)
            return dp[n][amount];
        if(coins[n-1]<=amount)
        {
            return dp[n][amount] = min(1+solve(coins,amount-coins[n-1],n) , solve(coins,amount,n-1));
        }
        else
        {
            return dp[n][amount] = solve(coins,amount,n-1);
        }
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int ans=solve(coins,amount,coins.size());
        return(ans==INT_MAX-1)?-1:ans;
    }
};