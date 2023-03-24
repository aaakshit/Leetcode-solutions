class Solution {
public:
    vector<int>vis;
    int dfs(int i,vector<int>adj[]){
        vis[i]=1;
        int ans=0;
        for(auto x:adj[i]){
            if(!vis[abs(x)]){
                ans+=dfs(abs(x),adj)+(x>0);
            }
        }
        return ans;
    }
    int minReorder(int n, vector<vector<int>>& c) {
        vector<int>adj[n];
        for(auto x:c){
            int u=x[0],v=x[1];
            adj[u].push_back(v);
            adj[v].push_back(-u);
        }
        vis.resize(50005,0);
        return dfs(0,adj);
    }
};