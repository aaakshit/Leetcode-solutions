class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<int>adj[n];
        for(auto i:p) adj[i[1]].push_back(i[0]);
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            for(auto x:adj[i]){
                vis[x]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(vis[i]==0)
                q.push(i);
        }
        vector<int>ans;
        while(!q.empty()){
            int val=q.front();
            q.pop();
            ans.push_back(val);
            for(auto x:adj[val]){
                vis[x]--;
                if(vis[x]==0)
                    q.push(x);
            }
        }
        if(ans.size()!=n)
            return { };
        return ans;
    }
};