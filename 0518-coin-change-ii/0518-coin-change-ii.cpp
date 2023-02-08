class Solution {
public:
    vector<vector<int>>dp;
    int solve(int i,int sum,int amount,vector<int>&coins){
        if(i>=coins.size()||sum>=amount){
            if(sum==amount)
                return 1;
            else
                return 0;
        }
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        if(coins[i]<=amount)
        return dp[i][sum]=solve(i,sum+coins[i],amount,coins)+solve(i+1,sum,amount,coins);
        else
            return dp[i][sum]=solve(i+1,sum,amount,coins);
    }
    int change(int amount, vector<int>& coins) {
        dp.resize(305,vector<int>(5005,-1));
        int ans=solve(0,0,amount,coins);
        return ans;
    }
};