//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class AP
{
public:
    int *low, *dis, *children, V, time;
    bool *isAP;
    AP(int V)
    {
        this->V = V;
        time = 0;
        isAP = new bool[V];
        dis = new int[V];
        children = new int[V];
        low = new int[V];
        for (int i = 0; i < V; i++)
            isAP[i]=false,dis[i]=low[i]=children[i]=0;
    }
    void dfs(int src, int parent, vector<int> adj[])
    {
        dis[src] = low[src] = ++time;
        for (auto v : adj[src])
        {
            if (v == parent)
                continue;
            // dis[v] is 0 if v is not visited
            if (!dis[v])
            {
                children[src]++;
                dfs(v, src, adj);
                low[src] = min(low[src], low[v]);
                if (low[v] >= dis[src])
                    isAP[src] = true;
            }
            // Already visited
            else
                low[src] = min(low[src], dis[v]);
        }
    }
};
class Solution {
    public:
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        AP ap(V);
        for (int i = 0; i < V; i++)
            // it means i is also the root, therefore, we use >1 child condition for AP
            if (!ap.dis[i])
            {
                ap.dfs(i, -1, adj);
                ap.isAP[i] = ap.children[i] > 1;
            }
        vector<int> APS;
        for (int i = 0; i < V; i++)
            if (ap.isAP[i])
                APS.push_back(i);
        if(APS.empty())
            APS.push_back(-1);
        return APS;
    }
};

//{ Driver Code Starts.

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		vector<int> ans = obj.articulationPoints(V, adj);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends