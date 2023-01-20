class Solution {
public:
   
    void solve(int i,vector<int>&nums,vector<int>&v, set<vector<int>>&ans){
        if(i==nums.size()){
            if(v.size()>=2){
                ans.insert(v);
                return;
            }
            return;
        }
        if(v.size()==0 || nums[i]>=v.back()){
            v.push_back(nums[i]);
            solve(i+1,nums,v,ans);
            v.pop_back();
        }
        solve(i+1,nums,v,ans);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>v;
        set<vector<int>>ans;
        solve(0,nums,v,ans);
        vector<vector<int>>res;
        for(auto x:ans){
            res.push_back(x);
        }
        return res;
    }
};