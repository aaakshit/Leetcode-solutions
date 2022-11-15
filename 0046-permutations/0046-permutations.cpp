class Solution {
public:
    void solve(int i,vector<int>&nums,vector<vector<int>>&v){
        if(i==nums.size()){
            v.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[j],nums[i]);
            solve(i+1,nums,v);
            swap(nums[j],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        solve(0,nums,v);
        return v;
    }
};