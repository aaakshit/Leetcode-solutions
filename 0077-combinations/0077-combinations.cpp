class Solution {
public:
    void solve(int i,int n, int k , vector<vector<int>>&ans,vector<int>&v){
        if(i>n){
            if(v.size()!=k)return;
            ans.push_back(v);
            return;
        }
        v.push_back(i);
        solve(i+1,n,k,ans,v);
        v.pop_back();
        solve(i+1,n,k,ans,v);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>v;
        solve(1,n,k,ans,v);
        return ans;
    }
};