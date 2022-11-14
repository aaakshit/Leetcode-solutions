class Solution {
public:
    int count=0;
    int dfs(vector<vector<int>>& grid,vector<vector<bool>>& vis,int n,int m, int i, int j){
        if(i<0||i>=n||j<0||j>=m||grid[i][j]!=1||vis[i][j]==1)
            return 0;
        vis[i][j]=1;
        count++;
         dfs(grid,vis,n,m,i-1,j);
         dfs(grid,vis,n,m,i+1,j);
         dfs(grid,vis,n,m,i,j+1);
         dfs(grid,vis,n,m,i,j-1);
         return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&!vis[i][j]){
                    count=0;
                    mx=max(mx,dfs(grid,vis,n,m,i,j));
                }
            }
        }
        if(mx==INT_MIN)
            return 0;
        else
        return mx;
    }
};