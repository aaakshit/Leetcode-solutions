class Solution {
public:
    int n,m;
    void solve(int i, int j, vector<vector<int>>&grid, vector<vector<bool>>&vis){
        if(i<0||j<0||i>=n||j>=m||vis[i][j]||grid[i][j]==0)
            return;
        vis[i][j]=1;
        solve(i+1,j,grid,vis);
        solve(i-1,j,grid,vis);
        solve(i,j+1,grid,vis);
        solve(i,j-1,grid,vis);
        
    }
    int numEnclaves(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0||j==0||i==n-1||j==m-1){
                    if(!vis[i][j] && grid[i][j]==1)
                        solve(i,j,grid,vis);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1)
                    c++;
            }
        }
        return c;
    }
};