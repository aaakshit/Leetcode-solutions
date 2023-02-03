//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool f=0;
    void solve(int i,vector<int>adj[],vector<int>&vis){
       if(vis[i]){
           if(vis[i]==1)
           f=1;
           return;
       }
       vis[i]=1;
       for(auto x:adj[i]){
           solve(x,adj,vis);
       }
       vis[i]=2;
       //return 0;
    }
    bool isCyclic(int v, vector<int> adj[]) {
        // code here
        vector<int>vis(v+1,0);
        for(int i=0;i<v;i++){
            if(!vis[i]){
                solve(i,adj,vis);
                if(f==1)
                return 1;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends