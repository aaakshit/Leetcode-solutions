class Solution {
public:
    int mod=1e9+7;
    int dp[51][51][51];
    int solve(int i,int j,int m,int n,int mm){
        if(i>=m || i<0 || j>=n || j<0 ){
            if(mm>=0)
                return 1;
            return 0;
        }
        if(mm<0)
            return 0;
        if(dp[i][j][mm]!=-1)
            return dp[i][j][mm];
        int ans=0;
        ans=(ans+solve(i+1,j,m,n,mm-1))%mod;
        ans=(ans+solve(i,j+1,m,n,mm-1))%mod;
        ans=(ans+solve(i-1,j,m,n,mm-1))%mod;
        ans=(ans+solve(i,j-1,m,n,mm-1))%mod;
        return dp[i][j][mm]=ans%mod;
        
        
    }
    int findPaths(int m, int n, int mm, int i, int j) {
        memset(dp,-1,sizeof(dp));
        return solve(i,j,m,n,mm);
    }
};