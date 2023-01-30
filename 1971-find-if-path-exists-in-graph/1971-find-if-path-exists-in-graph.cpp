class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>ans[n];
        for(int i=0;i<edges.size();i++){
            ans[edges[i][0]].push_back(edges[i][1]);
            ans[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int>q;
        vector<bool>vis(n,0);
        q.push(source);
        while(!q.empty()){
            int x=q.front();
            if(vis[destination])
                return 1;
            q.pop();
            //if(!vis[x])
                vis[x]=1;
            for(int i:ans[x]){
                if(!vis[i]){
                    q.push(i);
                    vis[i]=1;
                }
            }
        }
        return vis[n-1];
    }
};