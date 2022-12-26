class Solution {
public:
    // bool solve(int i, int j,vector<vector<int>>& grid){
    //     if(i<0 || i>=grid.size()||j<0 || j>=grid[0].size())
    //         return 0;
    //     if(grid[i][j]==1)return 1;
    //     grid[i][j]=1;
    //     return (solve(i+1,j,grid) && solve(i-1,j,grid) && solve(i,j-1,grid) && solve(i,j+1,grid) );
    // }
    bool dfs(int x, int y, vector<vector<int>>& grid){
		if(x<0 || x>=grid.size() || y<0 || y>=grid[0].size()){return false;}
		if(grid[x][y]==1){return true;}
		grid[x][y]=1;
		bool chk1=dfs(x-1, y, grid), chk2=dfs(x, y-1, grid), chk3=dfs(x+1, y, grid), chk4=dfs(x, y+1, grid);
		return (chk1 && chk2 && chk3 && chk4);
	}
    int closedIsland(vector<vector<int>>& grid) {
        int c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){
                    if(dfs(i,j,grid)){
                        c++;
                    }
                }
            }
        }
        return c;
    }
};