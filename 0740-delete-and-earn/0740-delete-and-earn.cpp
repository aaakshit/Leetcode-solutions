class Solution {
public:
    int dp[20005];
    int solve(vector<int>& nums,int i){
        if(i>=nums.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int sum=nums[i];
        int value=nums[i];
        int j=i+1;
        while(j<nums.size() && nums[j]==value){
            sum+=nums[j];
            j++;
        }
         while(j<nums.size() && nums[j]==value+1){
            //sum+=nums[j];
            j++;
        }
        return dp[i]=max(sum+solve(nums,j),solve(nums,i+1));
        
        
    }
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        memset(dp,-1,sizeof(dp));
        return solve(nums,0);
    }
};