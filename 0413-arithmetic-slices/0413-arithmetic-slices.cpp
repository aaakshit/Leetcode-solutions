class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)
            return 0;
        int count=0,diff=0,j=0,pdiff=nums[1]-nums[0];
        for(int i=1;i<nums.size()-1;i++){
            diff=nums[i+1]-nums[i];
            if(diff==pdiff)
                j++;
            else{
                pdiff=diff;
                j=0;
            }
            count+=j;
        }
        return count;
        
    }
};