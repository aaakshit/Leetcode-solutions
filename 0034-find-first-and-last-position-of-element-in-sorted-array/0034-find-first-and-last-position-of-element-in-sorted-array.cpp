class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
         int u=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if((l>=0 && l<nums.size()) && (nums[l]==target) && (u>=0 && u-1<nums.size()) && (nums[u-1]==target ))
        return {l,u-1};
        else
            return {-1,-1};
    }
};