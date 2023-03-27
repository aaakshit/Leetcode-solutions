class Solution {
public:
    int solve(vector<vector<int>>& grid,vector<vector<int>>& dp,int i,int j){
        if(i==grid.size()-1 && j==grid[0].size()-1)
            return grid[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        // cout<<grid[i][j]<<endl;
        int x=INT_MAX,y=INT_MAX;
        if(i<grid.size()-1){
            x=solve(grid,dp,i+1,j);
        }
        if(j<grid[0].size()-1){
            y=solve(grid,dp,i,j+1);
        }
        return dp[i][j]=grid[i][j]+min(x,y);
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        return solve(grid,dp,0,0);
    }
};