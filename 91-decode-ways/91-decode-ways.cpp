class Solution {
public:
    int dp[105];
    int solve(string s, int i){
        if(i>=s.size())return 1;
        else if(s[i]=='0')return 0;
        else if(i==s.size()-1)return 1;
        else if(dp[i]!=-1)return dp[i];
        else if(s[i]=='1'||(s[i]=='2'&&(s[i+1]>=48 && s[i+1]<=54)))
                return dp[i]=solve(s,i+1)+solve(s,i+2);
                
        else
                return dp[i]=solve(s,i+1);
    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
        return solve(s,0);
    }
};