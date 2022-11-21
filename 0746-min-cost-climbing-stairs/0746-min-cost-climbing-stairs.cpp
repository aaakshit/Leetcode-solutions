class Solution {
public:
    int dp[1005];
    int solve(vector<int>& cost,int i){
        if(i>=cost.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        return dp[i]=cost[i]+min(solve(cost,i+1),solve(cost,i+2));
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        if(cost.size()==1)
            return cost[0];
        return min(solve(cost,0),solve(cost,1));
    }
};