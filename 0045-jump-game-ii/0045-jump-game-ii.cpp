class Solution {
public:
    vector<int>dp;
    int solve(int i,vector<int>&nums){
        if(i>=nums.size()-1)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int ans=10005;
        for(int j=1;j<=nums[i];j++){
            ans=min(ans,solve(i+j,nums)+1);
        }
        return dp[i]=ans;
    }
    int jump(vector<int>& nums) {
        if(nums[0]==0)
            return 0;
        dp.resize(nums.size()+5,-1);
        return solve(0,nums);
    }
};