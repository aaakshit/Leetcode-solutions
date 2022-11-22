class Solution {
public:
    int ans=INT_MAX;
    int solve(vector<int>& nums,vector<int>&dp,int i){
        if(i>=nums.size()-1)
            return 0;
        if(dp[i]!=10005)
            return dp[i];
        for(int j=1;j<=nums[i];j++){
            dp[i]=min(dp[i],1+solve(nums,dp,i+j));
        }
        return dp[i];
    }
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),10005);
        return solve(nums,dp,0);
    }
};