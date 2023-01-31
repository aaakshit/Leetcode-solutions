class Solution {
public:
    void solve(vector<vector<char>>& grid,vector<vector<bool>>&vis,int i, int j){
        if(i<0 || j<0 || i>=grid.size()||j>=grid[0].size() || vis[i][j]==1||grid[i][j]=='0')
            return ;
        vis[i][j]=1;
      //  grid[i][j]='1';
        solve(grid,vis,i+1,j);
        solve(grid,vis,i,j+1);
        solve(grid,vis,i,j-1);
        solve(grid,vis,i-1,j);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        // m=grid[0].size();
        vector<vector<bool>>vis(grid.size(),vector<bool>(grid[0].size(),0));
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'&& !vis[i][j]){
                 //   vis[i][j]=1;
                    c++;
                    solve(grid,vis,i,j);
                }
            }
        }
        return c;
    }
};