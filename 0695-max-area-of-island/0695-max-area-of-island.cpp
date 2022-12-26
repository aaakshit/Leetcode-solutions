class Solution {
public:
    int c=0;
    int solve(vector<vector<int>>& grid,int i,int j,vector<vector<bool>>&vis){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()||grid[i][j]!=1||vis[i][j]==1)
            return 0;
        vis[i][j]=1;
        c++;
        solve(grid,i+1,j,vis);
         solve(grid,i-1,j,vis);
         solve(grid,i,j+1,vis);
         solve(grid,i,j-1,vis);
        return c;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
      vector<vector<bool>>vis(grid.size(),vector<bool>(grid[0].size(),0));
        int mx=INT_MIN;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1 & !vis[i][j]){
                     c=0;
                    mx=max(mx,solve(grid,i,j,vis));
                }
            }
        }
        if(mx==INT_MIN)return 0;
        
        return mx;
    }
};