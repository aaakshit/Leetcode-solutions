class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,sum=0,ans=INT_MAX;
        while(i<nums.size()){
            sum+=nums[i];
            while(sum>=target){
                ans=min(ans,i-j+1);
                sum-=nums[j++];
            }
            i++;
        }
        return (ans==INT_MAX?0:ans);
    }
};