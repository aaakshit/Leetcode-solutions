class Solution {
public:
    vector<int>dp;
    int solve(int i,vector<int>&nums){
        int ans=1;
        if(dp[i]!=-1)
            return dp[i];
        for(int j=0;j<i;j++){
            if(nums[j]<nums[i])
                ans=max(ans,solve(j,nums)+1);
        }
        return dp[i]=ans;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int mx=INT_MIN;
        dp.resize(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            mx=max(mx,solve(i,nums));
        }
        return mx;
    }
};