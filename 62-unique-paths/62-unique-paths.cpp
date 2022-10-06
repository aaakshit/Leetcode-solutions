class Solution {
public:
    int dp[105][105];
    int solve(int m, int n, int row ,int column){
        if(row==m && column==n)
            return 1;
        if(row>m || column>n)
            return 0;
        if(dp[row][column]!=-1)
            return dp[row][column];
        
        return dp[row][column]=(solve(m,n,row+1,column)+solve(m,n,row,column+1));
    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return solve(m-1,n-1,0,0);
    }
};