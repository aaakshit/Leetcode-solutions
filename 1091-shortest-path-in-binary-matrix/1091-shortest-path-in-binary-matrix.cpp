class Solution {
public:
	int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
		if(grid[0][0] || grid[grid.size()-1][grid[0].size()-1]){return -1;}
		vector<vector<int>>v(grid.size(), vector<int>(grid[0].size(), 0));
		int ans=INT_MAX, chk=1;
		queue<pair<pair<int, int>, int>>q;
		q.push({{0, 0}, 1});
		v[0][0]=1;
		while(!q.empty()){
			int x=q.front().first.first, y=q.front().first.second, cnt=q.front().second;
			q.pop();
			if(x==grid.size()-1 && y==grid[0].size()-1){ans=min(ans, cnt); chk=-1;}
			if(x>0 && !v[x-1][y] && !grid[x-1][y]){
				v[x-1][y]=1;
				q.push({{x-1, y}, cnt+1});
			}
			if(y>0 && !v[x][y-1] && !grid[x][y-1]){
				v[x][y-1]=1;
				q.push({{x, y-1}, cnt+1});
			}
			if(x<grid.size()-1 && !v[x+1][y] && !grid[x+1][y]){
				v[x+1][y]=1;
				q.push({{x+1, y}, cnt+1});
			}
			if(y<grid[0].size()-1 && !v[x][y+1] && !grid[x][y+1]){
				v[x][y+1]=1;
				q.push({{x, y+1}, cnt+1});
			}
			if(x>0 && y>0 && !v[x-1][y-1] && !grid[x-1][y-1]){
				v[x-1][y-1]=1;
				q.push({{x-1, y-1}, cnt+1});
			}
			if(x>0 && y<grid[0].size()-1  && !v[x-1][y+1] && !grid[x-1][y+1]){
				v[x-1][y+1]=1;
				q.push({{x-1, y+1}, cnt+1});
			}
			if(x<grid.size()-1 && y>0 && !v[x+1][y-1] && !grid[x+1][y-1]){
				v[x+1][y-1]=1;
				q.push({{x+1, y-1}, cnt+1});
			}
			if(x<grid.size()-1 && y<grid[0].size()-1  && !v[x+1][y+1] && !grid[x+1][y+1]){
				v[x+1][y+1]=1;
				q.push({{x+1, y+1}, cnt+1});
			}
		}
		if(chk==-1){return ans;}
		return -1;
	}
};