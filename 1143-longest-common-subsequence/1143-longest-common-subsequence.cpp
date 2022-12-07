class Solution {
public:
//     int dp[1005][1005];
//     int solve(int x ,int y,string s1, string s2){
//         if(x<0||y<0)
//         return 0;
//         if(dp[x][y]!=-1)return dp[x][y];
//         if(s1[x]==s2[y])
//         return dp[x][y]=1+solve(x-1,y-1,s1,s2);
//         else
//         return dp[x][y]=max(solve(x,y-1,s1,s2),solve(x-1,y,s1,s2));
        
//        // return dp[x][y];
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         memset(dp,-1,sizeof(dp));
//         solve(text1.size(),text2.size(),text1,text2);
//         return dp[text1.size()-1][text2.size()-1];
//     }
    int pre(int n,int m,string &s1,string &s2,vector<vector<int>> &dp){
                if(n < 0 or m < 0) return 0;
                if(dp[n][m]!=-1) return dp[n][m];
                if(s1[n] == s2[m]) return dp[n][m] = pre(n-1,m-1,s1,s2,dp) + 1;
                else return dp[n][m] = max(pre(n-1,m,s1,s2,dp),pre(n,m-1,s1,s2,dp));
            }
            int longestCommonSubsequence(string text1, string text2) {
                int n = text1.size();
                int m = text2.size();
                vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
                pre(n,m,text1,text2,dp);
                return dp[n-1][m-1];
            }
};