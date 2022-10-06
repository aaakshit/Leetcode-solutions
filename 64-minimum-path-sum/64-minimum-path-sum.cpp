class Solution {
public:
    int dp[205][205];
    int solve(vector<vector<int>>&grid, int r, int c){
        if(r==grid.size()-1&& c==grid[0].size()-1)return dp[r][c]=grid[r][c];
       // if(r>m || r>c)return 0;
        if(dp[r][c]!=-1)return dp[r][c];
        int x=INT_MAX,y=INT_MAX;
        if(r<grid.size()-1)
            x=solve(grid,r+1,c);
        if(c<grid[0].size()-1)
            y=solve(grid,r,c+1);
        return dp[r][c]=grid[r][c]+min(x,y);
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        int m=grid.size();
        int n=grid[0].size();
        return solve(grid,0,0);
    }
};