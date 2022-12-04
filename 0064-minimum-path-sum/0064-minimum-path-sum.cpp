class Solution {
public:
    int dp[205][205];
    int solve(int m, int n, int i, int j,vector<vector<int>>& grid){
        // if(i>=m || j>=n)
        //     return 0;
        if(i==m-1 && j==n-1)
            return grid[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        int x=INT_MAX,y=INT_MAX;
        if(i<m-1)
            x=solve(m,n,i+1,j,grid);
        if(j<n-1)
            y=solve(m,n,i,j+1,grid);
        return dp[i][j]=grid[i][j]+min(x,y);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(m,n,0,0,grid);
    }
};