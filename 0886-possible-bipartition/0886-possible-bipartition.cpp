class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int>vis(n+1,0);
        vector<int>color(n+1,0);
        vis[0]=1;
      vector<int>adj[n+1];
        for(int i=0;i<dislikes.size();i++){
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        for(int i=1;i<=n;i++){
            queue<int>q;
            if(color[i]==0)
                color[i]=1;
            q.push(i);
            while(!q.empty()){
                int node=q.front();
                q.pop();
                for(auto x:adj[node]){
                    if(color[x]==color[node])
                        return 0;
                    if(!color[x]){
                        color[x]=-1*color[node];
                    q.push(x);
                    }
                }
            }
        }
        return 1;
        
    }
};