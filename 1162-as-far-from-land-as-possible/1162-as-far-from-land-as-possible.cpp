class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        queue<pair<pair<int,int>,int>>q;int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0)
                    c++;
                if(grid[i][j]==1 && !vis[i][j]){
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
            }
        }
        if(c==0 || c==m*n)
            return -1;
        int ans=INT_MIN;
        while(!q.empty()){
            int x=q.front().first.first,y=q.front().first.second,count=q.front().second;
            q.pop();
            ans=max(ans,count);
            if(x>0 && !vis[x-1][y]){
                vis[x-1][y]=1;
                q.push({{x-1,y},count+1});
            }
            if(x<n-1 && !vis[x+1][y]){
                vis[x+1][y]=1;
                q.push({{x+1,y},count+1});
            }
            if(y>0 && !vis[x][y-1]){
                vis[x][y-1]=1;
                q.push({{x,y-1},count+1});
            }
            if(y<m-1 && !vis[x][y+1]){
                vis[x][y+1]=1;
                q.push({{x,y+1},count+1});
            }
        }
        return ans;
    }
};