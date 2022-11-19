//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
     bool valid(int i, int j, int n, int m,vector<vector<int>>& grid ){
        if(i>=0 && j>=0 && i<n && j<m && grid[i][j]==1)
            return 1;
        
        return 0;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int time=0,fresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1)
                    fresh++;
            }
        }
        if(fresh==0)return 0;
        
        while(!q.empty()){
            int s=q.size();
            int temp=0;
            while(s){
                pair<int,int>p=q.front();
                q.pop();
                int x1=p.first;
                int y1=p.second;
                int ax[4]={1,-1,0,0};
                int ay[4]={0,0,1,-1};
                for(int i=0;i<4;i++){
                    int x=ax[i]+x1;
                    int y=ay[i]+y1;
                    if(valid(x,y,n,m,grid)){
                        temp++;
                        q.push({x,y});
                        grid[x][y]=2;
                    }
                }
                s--;
            }
            if(temp!=0)time++;
        }
        
        
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return time;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends