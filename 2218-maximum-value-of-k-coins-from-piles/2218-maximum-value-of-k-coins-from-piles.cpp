class Solution {
public:
    vector<vector<int>>dp;
    int solve(int i,vector<vector<int>>&piles,int k){
        if(i>=piles.size())
            return 0;
        int mx=0,sum=0;
        if(dp[i][k]!=-1)
            return dp[i][k];
        mx=max(mx,solve(i+1,piles,k));
        for(int j=0;j<piles[i].size();j++){
            sum+=piles[i][j];
            if(k-(j+1)>=0){
                mx=max(mx,sum+solve(i+1,piles,k-(j+1)));
            }
        }
        return dp[i][k]=mx;
    }
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        dp.resize(piles.size()+1,vector<int>(k+1,-1));
        return solve(0,piles,k);
        // return 0;
    }
};