class Solution {
public:
   vector<vector<int>> ans;
    void dfs(int node, vector<int> &path, vector<vector<int>> &adj)
    {
        // reached destination, push current path to the answer
        if (node == adj.size() - 1)
        {
            ans.push_back(path);
            return;
        }

        // explore all path from the current node
        for (auto i : adj[node])
        {
            // push current child to the path (if it will reach the destination then base case will take care of it)
            path.push_back(i);
            dfs(i, path, adj);
            // backtrack
            path.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        ans.clear();
        vector<int> path = {0};
        dfs(0, path, graph);
        return ans;
    }
};