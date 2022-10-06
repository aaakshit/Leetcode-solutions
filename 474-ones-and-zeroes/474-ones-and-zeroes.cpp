class Solution {
public:
   vector<vector<vector<int>>>dp;
    int solve(vector<string>&s,int m,int n, int i){
        if(i==s.size())return 0;
        if(dp[m][n][i]!=-1)return dp[m][n][i];
        int zero=count(s[i].begin(),s[i].end(),'0');
        int one=s[i].size()-zero;
        
        if(m-zero>=0 && n-one>=0)
            return dp[m][n][i]=max(1+solve(s,m-zero,n-one,i+1),solve(s,m,n,i+1));
        
        return dp[m][n][i]=solve(s,m,n,i+1);
        
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        dp.resize(m+1,vector<vector<int>>(n+1,vector<int>(strs.size(),-1)));
        return solve(strs,m,n,0);
    }
};