class Solution {
public:
      vector<int>ans;
    vector<pair<int,int>>adj[105];
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
       
       for(auto x:times){
           int u=x[0];
           int v=x[1];
           int w=x[2];
           adj[u].push_back({v,w});
       }
      ans.resize(105,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        ans[k]=0;
        pq.push({0,k});
        while(!pq.empty()){
            int i=pq.top().second;
            // int d=pq.top().first;
            pq.pop();
            
            for(int j=0;j<adj[i].size();j++){
                int v=adj[i][j].first;
                int w=adj[i][j].second;
                if(ans[i]+w<ans[v]){
                    ans[v]=ans[i]+w;
                    pq.push({ans[v],v});
                }
            }
        }
        int mx=INT_MIN;
        for(int i=1;i<=n;i++){
            mx=max(mx,ans[i]);
        }
        if(mx==INT_MAX)
            return -1;
        return mx;
        
    }
};