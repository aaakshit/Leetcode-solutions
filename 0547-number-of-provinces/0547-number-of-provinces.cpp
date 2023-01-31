class Solution {
public:
    void solve(int i,vector<int>&vis,vector<int>adj[]){
        if(!vis[i]){
            vis[i]=1;
            for(auto x:adj[i])
                solve(x,vis,adj);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
          int n=isConnected.size();
        vector<int>adj[n+1];
        vector<int>vis(n+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && isConnected[i][j]==1)
                    adj[i+1].push_back(j+1);
            }
        }
        int c=0;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                c++;
                solve(i,vis,adj);
            }
        }
        return c;
    }
};