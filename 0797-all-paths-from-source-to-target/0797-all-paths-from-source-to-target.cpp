class Solution {
public:
    void solve(int i,vector<vector<int>>& graph,vector<int>& v,vector<vector<int>>& ans){
        if(i==graph.size()-1){
            ans.push_back(v);
            return;
        }
        for(auto x:graph[i]){
            v.push_back(x);
            solve(x,graph,v,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       vector<vector<int>>ans;
        vector<int>v;
        v.push_back(0);
        solve(0,graph,v,ans);
        return ans;
    }
};