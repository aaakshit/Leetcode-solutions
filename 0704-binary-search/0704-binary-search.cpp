class Solution {
public:
    int search(vector<int>& nums, int target) {
        int t=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(t<=nums.size()-1&&nums[t]==target)
            return t;
        else
            return -1;
    }
};