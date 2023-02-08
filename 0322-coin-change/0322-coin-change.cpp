class Solution {
public:
    vector<vector<int>>dp;
    int solve(int i,int sum, vector<int>&coins,int amount){
       if(i>=coins.size() || sum>=amount){
           if(sum==amount)
               return 0;
           else
               return INT_MAX-1;
       }
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        if(coins[i]<=amount){
    return dp[i][sum]=min(1+solve(i,sum+coins[i],coins,amount),solve(i+1,sum,coins,amount));
        }
        else
            return dp[i][sum]=solve(i+1,sum,coins,amount);
    }
    int coinChange(vector<int>& coins, int amount) {
       dp.resize(13,vector<int>(10005,-1));
        // if(amount==0)
        //     return 0;
        int ans=solve(0,0,coins,amount);
        if(ans==INT_MAX-1)
            return -1;
        else
            return ans;
    }
};