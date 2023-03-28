class Solution {
public:
//     // vector<vector<int>>dp;
//     int solve(vector<int>&days,vector<int>&cost,int i,int d,vector<vector<int>>&dp){
//         if(i==days.size())return 0;
//         if(d>=days[i])
//             return solve(days,cost,i+1,d,dp);
//         if(dp[i][d]!=-1)
//             return dp[d][i];
//         int x=1e9,y=1e9,z=1e9;
//         x=solve(days,cost,i+1,0,dp)+cost[0];
//         y=solve(days,cost,i+1,days[i]+7-1,dp)+cost[1];
//         z=solve(days,cost,i+1,days[i]+30-1,dp)+cost[2];
//         return dp[i][d]=min(x,min(y,z));
        
//     }
//     int mincostTickets(vector<int>& days, vector<int>& costs) {
//         // dp.resize(days.size(),vector<int>(366,-1));
//         vector<vector<int>>dp(days.size(),vector<int>(366,-1));
//         return solve(days,costs,0,0,dp);
//     }
    int f(vector<int>&d,vector<int>&c,int ind,int pre,vector<vector<int>>&dp){
        if(ind==d.size()) return 0;
        if(pre>=d[ind])
            return f(d,c,ind+1,pre,dp);
        if(dp[ind][pre]!=-1) return dp[ind][pre];
        int x=1e9,y=1e9,z=1e9;
        x=f(d,c,ind+1,0,dp)+c[0];
        y=f(d,c,ind+1,d[ind]+7-1,dp)+c[1];
        z=f(d,c,ind+1,d[ind]+30-1,dp)+c[2];
        return dp[ind][pre]=min({x,y,z});
    }
    int mincostTickets(vector<int>& d, vector<int>& c) {
        vector<vector<int>>dp(d.size(),vector<int>(366,-1));
        return f(d,c,0,0,dp);
    }
};