class Solution {
public:
//     int dp[10005];
//    int solve(int i,vector<int>&nums,int n){
//         if(i>=n)return 1;
//         if(dp[i]!=-1)return dp[i];
//         if(nums[i]==0)return 0;
//         for(int j=1;j<=nums[i];j++){
//             dp[i]=solve(j,nums,n);
//         }
//         return dp[i];
        
//     }
    bool canJump(vector<int>& nums) {
     int i=0,c=0;
        while(i<nums.size()){
            if(c<i)return 0;
            c=max(c,nums[i]+i);
            i++;
        }
        return 1;
    }
};