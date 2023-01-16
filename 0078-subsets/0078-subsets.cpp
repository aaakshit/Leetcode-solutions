class Solution {
public:
    vector<int>v;
    void solve(vector<vector<int>>&ans,vector<int>&nums,int i){
        if(i==nums.size()){
            ans.push_back(v);
            return;
        }
      //  vector<int>v;
        solve(ans,nums,i+1);
        v.push_back(nums[i]);
        solve(ans,nums,i+1);
        v.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        solve(ans,nums,0);
        return ans;
    }
};