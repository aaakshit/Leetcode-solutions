class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        queue<pair<pair<int,int>,int>>q;int c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0)
                    c++;
                if(!vis[i][j] && grid[i][j]==1){
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
            }
        }
        if(c==0 || c==grid.size()*grid[0].size())
            return -1;
        int ans=INT_MIN;
        while(!q.empty()){
           int x=q.front().first.first, y=q.front().first.second, count=q.front().second;
            q.pop();
            ans=max(ans,count);
           if(x>0 && !vis[x-1][y]){
				vis[x-1][y]=1;
				q.push({{x-1, y}, count+1});
			}
			if(y>0 && !vis[x][y-1]){
				vis[x][y-1]=1;
				q.push({{x, y-1}, count+1});
			}
			if(x<grid.size()-1 && !vis[x+1][y]){
				vis[x+1][y]=1;
				q.push({{x+1, y}, count+1});
			}
			if(y<grid[0].size()-1 && !vis[x][y+1]){
				vis[x][y+1]=1;
				q.push({{x, y+1}, count+1});
			}
        }
        return ans;
    }
};