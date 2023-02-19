class Solution {
public:
    int dp[101][101];
    const int inf = 1e8;
    int solve(int s,int k,int d,vector<vector<int>>&cost,vector<int>adj[]){
        if(k<0)
            return inf;
        if(s==d)
            return 0;
        if(dp[s][k]!=-1)
            return dp[s][k];
        int ans=inf;
        for(auto x:adj[s]){
            ans=min(ans,cost[s][x]+solve(x,k-1,d,cost,adj));
        }
        return dp[s][k]=ans;
    }
    int dfs(int node, int k, int dest, vector<vector<int>> &cost, vector<int> adj[])
    {
        if (k < 0)
            return inf;

        if (node == dest)
            return 0;

        if (dp[node][k] != -1)
            return dp[node][k];

        int ans = inf;
        for (auto i : adj[node])
            ans = min(ans, cost[node][i] + dfs(i, k - 1, dest, cost, adj));

        return dp[node][k] = ans;
    }
    int findCheapestPrice(int n, vector<vector<int>>& f, int src, int dst, int k) {
        vector<vector<int>> cost(n, vector<int>(n));
        vector<int> adj[n];
        for (auto e : f)
        {
            adj[e[0]].push_back(e[1]);
            cost[e[0]][e[1]] = e[2];
        }
        memset(dp,-1,sizeof(dp));
        int ans=solve(src,k+1,dst,cost,adj);
        return ans==inf?-1:ans;
       
    }
};