class Solution {
public:
    int dp[105][105];
    int solve(vector<vector<int>>&grid,int m, int n, int i, int j){
        if(i==m&&j==n)
            return 1;
        if(i>m || j>n)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
         if(grid[i][j]==1)
            return 0;
        
            return dp[i][j]=(solve(grid,m,n,i+1,j)+solve(grid,m,n,i,j+1));
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>&grid) {
        memset(dp,-1,sizeof(dp));
        int m=grid.size();
        int n=grid[0].size();
        if(grid[m-1][n-1]==1)
            return 0;
        return solve(grid,m-1,n-1,0,0);
    }
};