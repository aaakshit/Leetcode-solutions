class Solution {
public:
    bool solve(vector<vector<int>>& adj,vector<int>&vis,int c,int i){
         vis[i]=c;
        for(auto x:adj[i]){
            if(!vis[x]){
            if(solve(adj,vis,-c,x))
                return 1;
            }
            else if(vis[x]==c)
                return 1;
        }
        return false;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        int m=graph[0].size();
       // vector<int>adj[n];
        vector<int>vis(n,0);
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         adj[graph[i][j]].push_back(graph[j][i]);
        //         adj[graph[j][i]].push_back(graph[i][j]);
        //     }
        // }
        for(int i=0;i<n;i++){
            if(!vis[i])
            if(solve(graph,vis,1,i))
                return false;
        }
        return true;
    }
};