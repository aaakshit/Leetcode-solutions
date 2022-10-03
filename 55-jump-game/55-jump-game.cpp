class Solution {
public:
    bool canJump(vector<int>& nums) {
        int c=0;
        int i=0;
        while(i<nums.size()){
            if(c<i)return 0;
            c=max(c,nums[i]+i);
            i++;
        }
        return 1;
    }
};