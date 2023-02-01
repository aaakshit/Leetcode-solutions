class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>ans(n,vector<int>(m,-1));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    ans[i][j]=0;
                }
            }
        }
        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
        while(!q.empty()){
            int x=q.front().first,y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int a=x+dx[i],b=y+dy[i];
                if(a>=0 && b>=0 && a<n && b<m && ans[a][b]==-1){
                    ans[a][b]=ans[x][y]+1;
                    q.push({a,b});
                }
            }
        }
        return ans;
    }
};